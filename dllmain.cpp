#include "SDK.hpp"
#include <vector>

//settings
#include "settings.h"

//ZeroGui
#include "GUI/ZeroGUI.h"

#define RELATIVE(addr, size) ((uintptr_t)((UINT_PTR)(addr) + *(PINT)((UINT_PTR)(addr) + ((size) - sizeof(INT))) + (size)))

void MainRender(SDK::UObject* object, SDK::UCanvas* Canvas) {
	if (Canvas) {
		if (!ue->SetObjects()) return;
		
		

		// LOCAL SACHEN BRA
		auto MyController = ue->PlayerController;
		auto MyPawn = ue->World->OwningGameInstance->LocalPlayers[0]->PlayerController->Pawn;
		auto MyPlayer = ue->PlayerController->K2_GetPawn();
		auto CamManager = ue->PlayerController->PlayerCameraManager;
		auto MyLoc = ue->PlayerController->PlayerCameraManager->GetCameraLocation();
		auto MyRot = ue->PlayerController->PlayerCameraManager->GetCameraRotation();

		//init menu
		CWINGui::SetupCanvas(Canvas);
		ZeroGUI::Input::Handle();

		//Menu key
		if (GetAsyncKeyState(VK_INSERT) & 1) settings::menuopened = !settings::menuopened;

		//FOV Circle
		if (settings::memory && settings::drawfov)
		{
			CWINGui::DrawCircle({ (float)GetSystemMetrics(SM_CXSCREEN) / 2, (float)GetSystemMetrics(SM_CYSCREEN) / 2 }, settings::aimfov, 500.0f, SDK::FLinearColor(255, 255, 255, 255));
		}

		//FOV Changer
		if (settings::FOVChanger)
			MyController->FOV(settings::fov);


		if (CWINGui::Window("Internal", &settings::menupos, SDK::FVector2D{ 500.0f, 475.0f }, settings::menuopened))
		{
			//Simple Tabs
			static int tab = 0;
			if (CWINGui::ButtonTab(L"Aimbot", SDK::FVector2D{ 110, 35 }, tab == 0)) tab = 0;
			if (CWINGui::ButtonTab(L"Visuals", SDK::FVector2D{ 110, 35 }, tab == 1)) tab = 1;
			if (CWINGui::ButtonTab(L"Exploits", SDK::FVector2D{ 110, 35 }, tab == 2)) tab = 2;
			CWINGui::NextColumn(140.0f);


			if (tab == 0)
			{
				CWINGui::Checkbox(L"Memory Aimbot (NOT WORKING UPDATE!!)", &settings::memory);
				CWINGui::Checkbox(L"Draw FOV", &settings::drawfov);

				CWINGui::SliderFloat(L"aimbot fov", &settings::aimfov, 10, 120);
				CWINGui::SliderFloat(L"smoothing", &settings::smoothing, 1, 10);
			}

			if (tab == 1)
			{
				CWINGui::Checkbox(L"Player Names", &settings::names);
				CWINGui::Checkbox(L"Bounding Boxes", &settings::Box2d);
				CWINGui::Checkbox(L"Skeleton", &settings::Skeleton);
				CWINGui::Checkbox(L"View Direction", &settings::viewdirection);
				CWINGui::Checkbox(L"Health", &settings::Health);
			}

			if (tab == 2)
			{
				CWINGui::Checkbox(L"Teleport (LMENU)", &settings::teleport);

				CWINGui::Checkbox(L"FOV Changer", &settings::FOVChanger);
				CWINGui::SliderFloat(L"FOV", &settings::fov, 80, 180);
			}


		}
		CWINGui::Draw_Cursor(settings::menuopened); //draw ugly cursor
		CWINGui::Render(); //render thing



		
		SDK::APortalWarsCharacter* closest_player = 0;
		float closest_distance = FLT_MAX;

		SDK::FVector2D wnd_size = SDK::FVector2D(x, y);

		SDK::TArray<SDK::AActor*> actors;

		ue->GPStatics->STATIC_GetAllActorsOfClass(ue->World, (SDK::AActor*)SDK::APortalWarsCharacter::StaticClass(), &actors);

		for (int i = 0; i < actors.Num(); i++) {

			SDK::APortalWarsCharacter* enemies = (SDK::APortalWarsCharacter*)actors[i];

			SDK::AProjectile* Projectiles = (SDK::AProjectile*)actors[i];



			if (enemies)
			{

				if (enemies == MyPawn)
					continue;


				

				auto Health = enemies->Health;
				auto MaxHealth = enemies->MaxHealth;
				float Percentage = (Health / MaxHealth) * 100;


				
				auto Bot = enemies->IsBotControlled();

				auto EnemyMesh = enemies->Mesh;


					SDK::FVector ActorLoc = enemies->K2_GetActorLocation();

					SDK::FVector BulletLoc = Projectiles->K2_GetActorLocation();




					SDK::FVector2D ScreenLoc;

					auto vis = enemies->Mesh->IsVisible();

					auto color = (vis) ? SDK::FLinearColor(255, 0, 0, 255) : SDK::FLinearColor(0, 255, 0, 255);

					std::vector<std::pair<int, int>> SkeletonConnections = {
					{neck_01, head},
					{spine_02, neck_01},
					{spine_01, spine_02},
					{spine_03, spine_01}, // stomach to chest
					{pelvis, spine_03},
					{clavicle_r, spine_02},
					{upperarm_r, clavicle_r},
					{lowerarm_r, upperarm_r}, // right elbow
					{hand_r, lowerarm_r},
					{clavicle_l, spine_02},
					{upperarm_l, clavicle_l},
					{lowerarm_l, upperarm_l}, // left elbow
					{hand_l, lowerarm_l},
					{thigh_r, pelvis},
					{calf_r, thigh_r},
					{foot_r, calf_r},
					{thigh_l, pelvis},
					{calf_l, thigh_l},
					{foot_l, calf_l},
					};

					SDK::FVector2D BoneScreen, PrevBoneScreen;
					for (const std::pair<int, int>& Connection : SkeletonConnections)
					{
						const auto Bone1 = Connection.first;
						const auto Bone2 = Connection.second;

						const auto BoneLoc1 = enemies->Mesh->GetSocketLocation(enemies->Mesh->GetBoneName(Bone1));
						const auto BoneLoc2 = enemies->Mesh->GetSocketLocation(enemies->Mesh->GetBoneName(Bone2));

						const auto Screen1 = ue->PlayerController->ProjectWorldLocationToScreen(BoneLoc1, false, &BoneScreen);
						const auto Screen2 = ue->PlayerController->ProjectWorldLocationToScreen(BoneLoc2, false, &PrevBoneScreen);



						if (settings::Skeleton)
						{
							if (Screen1 && Screen2)
								Canvas->K2_DrawLine(BoneScreen, PrevBoneScreen, 1.5f, SDK::FLinearColor(255, 255, 255, 255));

						}
					}

					const auto BoneLoc1 = enemies->Mesh->GetSocketLocation(enemies->Mesh->GetBoneName(head));
					const auto BoneLoc2 = enemies->Mesh->GetSocketLocation(enemies->Mesh->GetBoneName(foot_l));
					const auto BoneLoc3 = enemies->Mesh->GetSocketLocation(enemies->Mesh->GetBoneName(Root));

					SDK::FVector WorldHead = BoneLoc1;
					SDK::FVector WorldBottom = BoneLoc2;
					SDK::FVector WorldRoot = BoneLoc3;

					SDK::FVector2D head; ue->PlayerController->ProjectWorldLocationToScreen(WorldHead, false, &head);
					SDK::FVector2D Top; ue->PlayerController->ProjectWorldLocationToScreen({ BoneLoc1.X, BoneLoc1.Y, BoneLoc1.Z + 20 }, false, &Top);
					SDK::FVector2D Bottom; ue->PlayerController->ProjectWorldLocationToScreen(WorldBottom, false, &Bottom);
					SDK::FVector2D Root; ue->PlayerController->ProjectWorldLocationToScreen(WorldRoot, false, &Root);

					if (settings::viewdirection)
					{
						SDK::FVector PlayerViewLocation;
						SDK::FRotator PlayerViewRotation;
						enemies->GetActorEyesViewPoint(&PlayerViewLocation, &PlayerViewRotation);


						float yaw = PlayerViewRotation.Yaw * M_PI / 180.0f;
						float pitch = PlayerViewRotation.Pitch * M_PI / 180.0f;

						SDK::FVector LookVector;
						LookVector.X = cos(yaw) * cos(pitch);
						LookVector.Y = sin(yaw) * cos(pitch);
						LookVector.Z = sin(pitch);


						float LineLength = 250.f; // This is in Unreal Units. Adjust as necessary.
						SDK::FVector EndPoint = PlayerViewLocation + (LookVector * LineLength);

						SDK::FVector2D ScreenStartPoint, ScreenEndPoint;
						ue->PlayerController->ProjectWorldLocationToScreen(PlayerViewLocation, false, &ScreenStartPoint);
						ue->PlayerController->ProjectWorldLocationToScreen(EndPoint, false, &ScreenEndPoint);

						Canvas->K2_DrawLine(ScreenStartPoint, ScreenEndPoint, 1.f, SDK::FLinearColor(255, 255, 255, 255));
					}

					if (settings::Health)
					{
						CWINGui::DrawHealthBar(Top, 25.f, 20.f / 10, 20.f / 10, Percentage);
					}

					if (settings::Box2d)
					ue->Box2D(Canvas, enemies, Bottom, Top, color);

					if (settings::teleport)
					{
						if (GetAsyncKeyState(VK_LMENU))
						{
							MyPawn->K2_TeleportTo(ActorLoc, { 0 });
						}
					}

					if (settings::names)
					{
						if (Bot)
						{
							ue->DrawTextRGB(Canvas, L"BOT", Root.X, Root.Y, SDK::FLinearColor(255, 0, 0, 255));
						}
						else
						{
							ue->DrawTextRGB(Canvas, L"PLAYER", Root.X, Root.Y, SDK::FLinearColor(255, 0, 0, 255));
						}

					}
					

					//aimbot calc
					auto width = Canvas->SizeX;
					auto height = Canvas->SizeY;

					auto dx = head.X - (width / 2);
					auto dy = head.Y - (height / 2);
					auto dist = sqrtf(dx * dx + dy * dy);

					if (dist <= FLT_MAX && dist < closest_distance) {

						if (dist > settings::aimfov)
						{
							continue;
						}
						closest_distance = dist;
						closest_player = enemies;
					}


					//aimbot
					if (settings::memory && GetAsyncKeyState(VK_RBUTTON) && vis)
					{
						if (closest_player == 0)
							continue;
						else
							ue->Aimbot(ue->PlayerController, closest_player, settings::smoothing);  //update SETROTATION
					}
			}

		}

		

	}

	return origin_renderer(object, Canvas);
}

void main() {

	/***************-UWORLD-**********************/
	ue->GWorld = (SDK::UWorld**)((DWORD64)GetModuleHandleW(NULL) + 0x5B7DD90);
	/********************************************/

	uintptr_t GlobalObjects;

	const auto address = FindPattern(GetModuleHandleW(NULL),
		reinterpret_cast<const unsigned char*>("\x48\x8B\x05\x00\x00\x0\x00\x48\x8B\x0C\x07\x48\x85\xC9\x74\x20"),
		"xxx????xxxxxxxxx");

	const auto offset = *reinterpret_cast<uint32_t*>(address + 3);
	GlobalObjects = address + 7 + offset;

	printf("GlobalObjects: 0x%x\n", GlobalObjects - (uintptr_t)GetModuleHandleW(0));
	uintptr_t funcGetObjectName;

	const auto address2 = FindPattern(GetModuleHandleW(NULL),
		reinterpret_cast<const unsigned char*>("\x41\xb8\x00\x00\x00\x00\xe8\x00\x00\x00\x00\x48\x8b\xc3\x48\x83\xc4\x00\x5b\xc3\x48\x8b\x42"), "xx????x????xxxxxx?xxxxx");

	funcGetObjectName = address2 - 0x3F;

	printf("funcGetObjectName: 0x%x\n", funcGetObjectName - (uintptr_t)GetModuleHandleW(0));

	printf("GWorld: 0x%x\n", ue->GWorld);

	/***************-Post render-**********************/
	SDK::UWorld* World = *ue->GWorld;
	auto GameInstance = World->OwningGameInstance;
	auto LocalPlayer = GameInstance->LocalPlayers[0];
	auto ViewportClient = LocalPlayer->ViewportClient;
	// swapping vtables
	auto vTable = *(void***)(ViewportClient);
	origin_renderer = (PostRender_t)vTable[100];
	SwapVtable((void*)ViewportClient, 100, MainRender);
}

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
	if (dwReason == 1) {
		AllocConsole();
		FILE* fileptr;
		freopen_s(&fileptr, "CONOUT$", "w", stdout);
		freopen_s(&fileptr, "CONOUT$", "w", stderr);
		freopen_s(&fileptr, "CONIN$", "r", stdin);
		main();
	}
	return true;
}

/*
GlobalObjects: 0x6171490
funcGetObjectName: 0x35fd460
*/