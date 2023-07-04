#pragma once
#include "SDK.hpp"

namespace settings
{

	//Menu
	bool menuopened = true;
	SDK::FVector2D menupos = { ((float)GetSystemMetrics(SM_CXSCREEN) / 2) - 500, ((float)GetSystemMetrics(SM_CYSCREEN) / 2) - 475 };

	//Aimbot
	bool memory = false;
	bool drawfov = false;
	float aimfov = 120.f;
	float smoothing = 2.f;

	//Visuals
	bool Box2d = false;
	bool Skeleton = false;
	bool viewdirection = false;
	bool names = false;
	bool Health = false;

	//Misc
	bool teleport = false;

	bool FOVChanger = false;
	float fov = 120.f;
}

