#pragma once
#define WINDOWS_IGNORE_PACKING_MISMATCH
// PortalWars (big penis) SDK

#define M_PI 3.14159265358979323846264338327950288419716939937510

#include <set>
#include <string>
#include <xlocale>
#include <windows.h>
#include <psapi.h>
static int x, y;

#include "SDK/PW_Basic.hpp"

#include "SDK/PW_CoreUObject_structs.hpp"
#include "SDK/PW_CoreUObject_classes.hpp"
#include "SDK/PW_CoreUObject_parameters.hpp"
#include "SDK/PW_DeveloperSettings_structs.hpp"
#include "SDK/PW_DeveloperSettings_classes.hpp"
#include "SDK/PW_DeveloperSettings_parameters.hpp"
#include "SDK/PW_InputCore_structs.hpp"
#include "SDK/PW_InputCore_classes.hpp"
#include "SDK/PW_InputCore_parameters.hpp"
#include "SDK/PW_PropertyAccess_structs.hpp"
#include "SDK/PW_PropertyAccess_classes.hpp"
#include "SDK/PW_PropertyAccess_parameters.hpp"
#include "SDK/PW_SlateCore_structs.hpp"
#include "SDK/PW_SlateCore_classes.hpp"
#include "SDK/PW_SlateCore_parameters.hpp"
#include "SDK/PW_Slate_structs.hpp"
#include "SDK/PW_Slate_classes.hpp"
#include "SDK/PW_Slate_parameters.hpp"
#include "SDK/PW_PacketHandler_structs.hpp"
#include "SDK/PW_PacketHandler_classes.hpp"
#include "SDK/PW_PacketHandler_parameters.hpp"
#include "SDK/PW_Chaos_structs.hpp"
#include "SDK/PW_Chaos_classes.hpp"
#include "SDK/PW_Chaos_parameters.hpp"
#include "SDK/PW_PhysicsCore_structs.hpp"
#include "SDK/PW_PhysicsCore_classes.hpp"
#include "SDK/PW_PhysicsCore_parameters.hpp"
#include "SDK/PW_SessionMessages_structs.hpp"
#include "SDK/PW_SessionMessages_classes.hpp"
#include "SDK/PW_SessionMessages_parameters.hpp"
#include "SDK/PW_Serialization_structs.hpp"
#include "SDK/PW_Serialization_classes.hpp"
#include "SDK/PW_Serialization_parameters.hpp"
#include "SDK/PW_PropertyPath_structs.hpp"
#include "SDK/PW_PropertyPath_classes.hpp"
#include "SDK/PW_PropertyPath_parameters.hpp"
#include "SDK/PW_Renderer_structs.hpp"
#include "SDK/PW_Renderer_classes.hpp"
#include "SDK/PW_Renderer_parameters.hpp"
#include "SDK/PW_Nexus_structs.hpp"
#include "SDK/PW_Nexus_classes.hpp"
#include "SDK/PW_Nexus_parameters.hpp"
#include "SDK/PW_VectorVM_structs.hpp"
#include "SDK/PW_VectorVM_classes.hpp"
#include "SDK/PW_VectorVM_parameters.hpp"
#include "SDK/PW_EngineMessages_structs.hpp"
#include "SDK/PW_EngineMessages_classes.hpp"
#include "SDK/PW_EngineMessages_parameters.hpp"
#include "SDK/PW_AudioPlatformConfiguration_structs.hpp"
#include "SDK/PW_AudioPlatformConfiguration_classes.hpp"
#include "SDK/PW_AudioPlatformConfiguration_parameters.hpp"
#include "SDK/PW_MediaUtils_structs.hpp"
#include "SDK/PW_MediaUtils_classes.hpp"
#include "SDK/PW_MediaUtils_parameters.hpp"
#include "SDK/PW_ImageWrapper_structs.hpp"
#include "SDK/PW_ImageWrapper_classes.hpp"
#include "SDK/PW_ImageWrapper_parameters.hpp"
#include "SDK/PW_Engine_structs.hpp"
#include "SDK/PW_Engine_classes.hpp"
#include "SDK/PW_Engine_parameters.hpp"
#include "SDK/PW_Landmass_structs.hpp"
#include "SDK/PW_Landmass_classes.hpp"
#include "SDK/PW_Landmass_parameters.hpp"
#include "SDK/PW_VivoxCore_structs.hpp"
#include "SDK/PW_VivoxCore_classes.hpp"
#include "SDK/PW_VivoxCore_parameters.hpp"
#include "SDK/PW_JsonUtilities_structs.hpp"
#include "SDK/PW_JsonUtilities_classes.hpp"
#include "SDK/PW_JsonUtilities_parameters.hpp"
#include "SDK/PW_MovieScene_structs.hpp"
#include "SDK/PW_MovieScene_classes.hpp"
#include "SDK/PW_MovieScene_parameters.hpp"
#include "SDK/PW_MovieSceneTracks_structs.hpp"
#include "SDK/PW_MovieSceneTracks_classes.hpp"
#include "SDK/PW_MovieSceneTracks_parameters.hpp"
#include "SDK/PW_NavigationSystem_structs.hpp"
#include "SDK/PW_NavigationSystem_classes.hpp"
#include "SDK/PW_NavigationSystem_parameters.hpp"
#include "SDK/PW_PortalWarsGlobals_structs.hpp"
#include "SDK/PW_PortalWarsGlobals_classes.hpp"
#include "SDK/PW_PortalWarsGlobals_parameters.hpp"
#include "SDK/PW_AudioMixer_structs.hpp"
#include "SDK/PW_AudioMixer_classes.hpp"
#include "SDK/PW_AudioMixer_parameters.hpp"
#include "SDK/PW_GameplayCameras_structs.hpp"
#include "SDK/PW_GameplayCameras_classes.hpp"
#include "SDK/PW_GameplayCameras_parameters.hpp"
#include "SDK/PW_ClothingSystemRuntimeInterface_structs.hpp"
#include "SDK/PW_ClothingSystemRuntimeInterface_classes.hpp"
#include "SDK/PW_ClothingSystemRuntimeInterface_parameters.hpp"
#include "SDK/PW_Overlay_structs.hpp"
#include "SDK/PW_Overlay_classes.hpp"
#include "SDK/PW_Overlay_parameters.hpp"
#include "SDK/PW_MoviePlayer_structs.hpp"
#include "SDK/PW_MoviePlayer_classes.hpp"
#include "SDK/PW_MoviePlayer_parameters.hpp"
#include "SDK/PW_MagicLeapARPin_structs.hpp"
#include "SDK/PW_MagicLeapARPin_classes.hpp"
#include "SDK/PW_MagicLeapARPin_parameters.hpp"
#include "SDK/PW_DmgTypeBP_Environmental_structs.hpp"
#include "SDK/PW_DmgTypeBP_Environmental_classes.hpp"
#include "SDK/PW_DmgTypeBP_Environmental_parameters.hpp"
#include "SDK/PW_AccelByteUe4Sdk_structs.hpp"
#include "SDK/PW_AccelByteUe4Sdk_classes.hpp"
#include "SDK/PW_AccelByteUe4Sdk_parameters.hpp"
#include "SDK/PW_InteractiveToolsFramework_structs.hpp"
#include "SDK/PW_InteractiveToolsFramework_classes.hpp"
#include "SDK/PW_InteractiveToolsFramework_parameters.hpp"
#include "SDK/PW_MeshDescription_structs.hpp"
#include "SDK/PW_MeshDescription_classes.hpp"
#include "SDK/PW_MeshDescription_parameters.hpp"
#include "SDK/PW_StaticMeshDescription_structs.hpp"
#include "SDK/PW_StaticMeshDescription_classes.hpp"
#include "SDK/PW_StaticMeshDescription_parameters.hpp"
#include "SDK/PW_ChaosSolverEngine_structs.hpp"
#include "SDK/PW_ChaosSolverEngine_classes.hpp"
#include "SDK/PW_ChaosSolverEngine_parameters.hpp"
#include "SDK/PW_AssetRegistry_structs.hpp"
#include "SDK/PW_AssetRegistry_classes.hpp"
#include "SDK/PW_AssetRegistry_parameters.hpp"
#include "SDK/PW_NetCore_structs.hpp"
#include "SDK/PW_NetCore_classes.hpp"
#include "SDK/PW_NetCore_parameters.hpp"
#include "SDK/PW_FieldSystemEngine_structs.hpp"
#include "SDK/PW_FieldSystemEngine_classes.hpp"
#include "SDK/PW_FieldSystemEngine_parameters.hpp"
#include "SDK/PW_GeometryCollectionEngine_structs.hpp"
#include "SDK/PW_GeometryCollectionEngine_classes.hpp"
#include "SDK/PW_GeometryCollectionEngine_parameters.hpp"
#include "SDK/PW_AnimationCore_structs.hpp"
#include "SDK/PW_AnimationCore_classes.hpp"
#include "SDK/PW_AnimationCore_parameters.hpp"
#include "SDK/PW_GameplayTasks_structs.hpp"
#include "SDK/PW_GameplayTasks_classes.hpp"
#include "SDK/PW_GameplayTasks_parameters.hpp"
#include "SDK/PW_AccelByteCustomization_structs.hpp"
#include "SDK/PW_AccelByteCustomization_classes.hpp"
#include "SDK/PW_AccelByteCustomization_parameters.hpp"
#include "SDK/PW_ImageWriteQueue_structs.hpp"
#include "SDK/PW_ImageWriteQueue_classes.hpp"
#include "SDK/PW_ImageWriteQueue_parameters.hpp"
#include "SDK/PW_BuildPatchServices_structs.hpp"
#include "SDK/PW_BuildPatchServices_classes.hpp"
#include "SDK/PW_BuildPatchServices_parameters.hpp"
#include "SDK/PW_UMG_structs.hpp"
#include "SDK/PW_UMG_classes.hpp"
#include "SDK/PW_UMG_parameters.hpp"
#include "SDK/PW_GameplayTags_structs.hpp"
#include "SDK/PW_GameplayTags_classes.hpp"
#include "SDK/PW_GameplayTags_parameters.hpp"
#include "SDK/PW_CinematicCamera_structs.hpp"
#include "SDK/PW_CinematicCamera_classes.hpp"
#include "SDK/PW_CinematicCamera_parameters.hpp"
#include "SDK/PW_EngineSettings_structs.hpp"
#include "SDK/PW_EngineSettings_classes.hpp"
#include "SDK/PW_EngineSettings_parameters.hpp"
#include "SDK/PW_AnimGraphRuntime_structs.hpp"
#include "SDK/PW_AnimGraphRuntime_classes.hpp"
#include "SDK/PW_AnimGraphRuntime_parameters.hpp"
#include "SDK/PW_MaterialShaderQualitySettings_structs.hpp"
#include "SDK/PW_MaterialShaderQualitySettings_classes.hpp"
#include "SDK/PW_MaterialShaderQualitySettings_parameters.hpp"
#include "SDK/PW_TimeManagement_structs.hpp"
#include "SDK/PW_TimeManagement_classes.hpp"
#include "SDK/PW_TimeManagement_parameters.hpp"
#include "SDK/PW_Landscape_structs.hpp"
#include "SDK/PW_Landscape_classes.hpp"
#include "SDK/PW_Landscape_parameters.hpp"
#include "SDK/PW_Foliage_structs.hpp"
#include "SDK/PW_Foliage_classes.hpp"
#include "SDK/PW_Foliage_parameters.hpp"
#include "SDK/PW_HeadMountedDisplay_structs.hpp"
#include "SDK/PW_HeadMountedDisplay_classes.hpp"
#include "SDK/PW_HeadMountedDisplay_parameters.hpp"
#include "SDK/PW_AugmentedReality_structs.hpp"
#include "SDK/PW_AugmentedReality_classes.hpp"
#include "SDK/PW_AugmentedReality_parameters.hpp"
#include "SDK/PW_OnlineSubsystem_structs.hpp"
#include "SDK/PW_OnlineSubsystem_classes.hpp"
#include "SDK/PW_OnlineSubsystem_parameters.hpp"
#include "SDK/PW_MRMesh_structs.hpp"
#include "SDK/PW_MRMesh_classes.hpp"
#include "SDK/PW_MRMesh_parameters.hpp"
#include "SDK/PW_AudioAnalyzer_structs.hpp"
#include "SDK/PW_AudioAnalyzer_classes.hpp"
#include "SDK/PW_AudioAnalyzer_parameters.hpp"
#include "SDK/PW_EyeTracker_structs.hpp"
#include "SDK/PW_EyeTracker_classes.hpp"
#include "SDK/PW_EyeTracker_parameters.hpp"
#include "SDK/PW_AudioExtensions_structs.hpp"
#include "SDK/PW_AudioExtensions_classes.hpp"
#include "SDK/PW_AudioExtensions_parameters.hpp"
#include "SDK/PW_SoundFields_structs.hpp"
#include "SDK/PW_SoundFields_classes.hpp"
#include "SDK/PW_SoundFields_parameters.hpp"
#include "SDK/PW_MovieSceneCapture_structs.hpp"
#include "SDK/PW_MovieSceneCapture_classes.hpp"
#include "SDK/PW_MovieSceneCapture_parameters.hpp"
#include "SDK/PW_AIModule_structs.hpp"
#include "SDK/PW_AIModule_classes.hpp"
#include "SDK/PW_AIModule_parameters.hpp"
#include "SDK/PW_AudioSynesthesia_structs.hpp"
#include "SDK/PW_AudioSynesthesia_classes.hpp"
#include "SDK/PW_AudioSynesthesia_parameters.hpp"
#include "SDK/PW_AkAudio_structs.hpp"
#include "SDK/PW_AkAudio_classes.hpp"
#include "SDK/PW_AkAudio_parameters.hpp"
#include "SDK/PW_PhysXVehicles_structs.hpp"
#include "SDK/PW_PhysXVehicles_classes.hpp"
#include "SDK/PW_PhysXVehicles_parameters.hpp"
#include "SDK/PW_AppleImageUtils_structs.hpp"
#include "SDK/PW_AppleImageUtils_classes.hpp"
#include "SDK/PW_AppleImageUtils_parameters.hpp"
#include "SDK/PW_GooglePAD_structs.hpp"
#include "SDK/PW_GooglePAD_classes.hpp"
#include "SDK/PW_GooglePAD_parameters.hpp"
#include "SDK/PW_UdpMessaging_structs.hpp"
#include "SDK/PW_UdpMessaging_classes.hpp"
#include "SDK/PW_UdpMessaging_parameters.hpp"
#include "SDK/PW_TcpMessaging_structs.hpp"
#include "SDK/PW_TcpMessaging_classes.hpp"
#include "SDK/PW_TcpMessaging_parameters.hpp"
#include "SDK/PW_WmfMediaFactory_structs.hpp"
#include "SDK/PW_WmfMediaFactory_classes.hpp"
#include "SDK/PW_WmfMediaFactory_parameters.hpp"
#include "SDK/PW_CustomMeshComponent_structs.hpp"
#include "SDK/PW_CustomMeshComponent_classes.hpp"
#include "SDK/PW_CustomMeshComponent_parameters.hpp"
#include "SDK/PW_ImgMediaFactory_structs.hpp"
#include "SDK/PW_ImgMediaFactory_classes.hpp"
#include "SDK/PW_ImgMediaFactory_parameters.hpp"
#include "SDK/PW_CableComponent_structs.hpp"
#include "SDK/PW_CableComponent_classes.hpp"
#include "SDK/PW_CableComponent_parameters.hpp"
#include "SDK/PW_AssetTags_structs.hpp"
#include "SDK/PW_AssetTags_classes.hpp"
#include "SDK/PW_AssetTags_parameters.hpp"
#include "SDK/PW_DialogBackground_structs.hpp"
#include "SDK/PW_DialogBackground_classes.hpp"
#include "SDK/PW_DialogBackground_parameters.hpp"
#include "SDK/PW_ActorSequence_structs.hpp"
#include "SDK/PW_ActorSequence_classes.hpp"
#include "SDK/PW_ActorSequence_parameters.hpp"
#include "SDK/PW_ImgMediaEngine_structs.hpp"
#include "SDK/PW_ImgMediaEngine_classes.hpp"
#include "SDK/PW_ImgMediaEngine_parameters.hpp"
#include "SDK/PW_OnlineSubsystemUtils_structs.hpp"
#include "SDK/PW_OnlineSubsystemUtils_classes.hpp"
#include "SDK/PW_OnlineSubsystemUtils_parameters.hpp"
#include "SDK/PW_MediaAssets_structs.hpp"
#include "SDK/PW_MediaAssets_classes.hpp"
#include "SDK/PW_MediaAssets_parameters.hpp"
#include "SDK/PW_MagicLeapARPinInfoActor_structs.hpp"
#include "SDK/PW_MagicLeapARPinInfoActor_classes.hpp"
#include "SDK/PW_MagicLeapARPinInfoActor_parameters.hpp"
#include "SDK/PW_MagicLeapSharedWorld_structs.hpp"
#include "SDK/PW_MagicLeapSharedWorld_classes.hpp"
#include "SDK/PW_MagicLeapSharedWorld_parameters.hpp"
#include "SDK/PW_ImgMedia_structs.hpp"
#include "SDK/PW_ImgMedia_classes.hpp"
#include "SDK/PW_ImgMedia_parameters.hpp"
#include "SDK/PW_EditableMesh_structs.hpp"
#include "SDK/PW_EditableMesh_classes.hpp"
#include "SDK/PW_EditableMesh_parameters.hpp"
#include "SDK/PW_ClothingSystemRuntimeCommon_structs.hpp"
#include "SDK/PW_ClothingSystemRuntimeCommon_classes.hpp"
#include "SDK/PW_ClothingSystemRuntimeCommon_parameters.hpp"
#include "SDK/PW_ClothingSystemRuntimeNv_structs.hpp"
#include "SDK/PW_ClothingSystemRuntimeNv_classes.hpp"
#include "SDK/PW_ClothingSystemRuntimeNv_parameters.hpp"
#include "SDK/PW_ChaosCloth_structs.hpp"
#include "SDK/PW_ChaosCloth_classes.hpp"
#include "SDK/PW_ChaosCloth_parameters.hpp"
#include "SDK/PW_LevelSequence_structs.hpp"
#include "SDK/PW_LevelSequence_classes.hpp"
#include "SDK/PW_LevelSequence_parameters.hpp"
#include "SDK/PW_GeometryCache_structs.hpp"
#include "SDK/PW_GeometryCache_classes.hpp"
#include "SDK/PW_GeometryCache_parameters.hpp"
#include "SDK/PW_ProceduralMeshComponent_structs.hpp"
#include "SDK/PW_ProceduralMeshComponent_classes.hpp"
#include "SDK/PW_ProceduralMeshComponent_parameters.hpp"
#include "SDK/PW_GeometryCacheTracks_structs.hpp"
#include "SDK/PW_GeometryCacheTracks_classes.hpp"
#include "SDK/PW_GeometryCacheTracks_parameters.hpp"
#include "SDK/PW_SignificanceManager_structs.hpp"
#include "SDK/PW_SignificanceManager_classes.hpp"
#include "SDK/PW_SignificanceManager_parameters.hpp"
#include "SDK/PW_AutomationUtils_structs.hpp"
#include "SDK/PW_AutomationUtils_classes.hpp"
#include "SDK/PW_AutomationUtils_parameters.hpp"
#include "SDK/PW_VariantManagerContent_structs.hpp"
#include "SDK/PW_VariantManagerContent_classes.hpp"
#include "SDK/PW_VariantManagerContent_parameters.hpp"
#include "SDK/PW_DatasmithContent_structs.hpp"
#include "SDK/PW_DatasmithContent_classes.hpp"
#include "SDK/PW_DatasmithContent_parameters.hpp"
#include "SDK/PW_FacialAnimation_structs.hpp"
#include "SDK/PW_FacialAnimation_classes.hpp"
#include "SDK/PW_FacialAnimation_parameters.hpp"
#include "SDK/PW_LightPropagationVolumeRuntime_structs.hpp"
#include "SDK/PW_LightPropagationVolumeRuntime_classes.hpp"
#include "SDK/PW_LightPropagationVolumeRuntime_parameters.hpp"
#include "SDK/PW_AnimationSharing_structs.hpp"
#include "SDK/PW_AnimationSharing_classes.hpp"
#include "SDK/PW_AnimationSharing_parameters.hpp"
#include "SDK/PW_OodleNetworkHandlerComponent_structs.hpp"
#include "SDK/PW_OodleNetworkHandlerComponent_classes.hpp"
#include "SDK/PW_OodleNetworkHandlerComponent_parameters.hpp"
#include "SDK/PW_GeometryCollectionTracks_structs.hpp"
#include "SDK/PW_GeometryCollectionTracks_classes.hpp"
#include "SDK/PW_GeometryCollectionTracks_parameters.hpp"
#include "SDK/PW_DiscordRpc_structs.hpp"
#include "SDK/PW_DiscordRpc_classes.hpp"
#include "SDK/PW_DiscordRpc_parameters.hpp"
#include "SDK/PW_MediaCompositing_structs.hpp"
#include "SDK/PW_MediaCompositing_classes.hpp"
#include "SDK/PW_MediaCompositing_parameters.hpp"
#include "SDK/PW_PortalWars_structs.hpp"
#include "SDK/PW_PortalWars_classes.hpp"
#include "SDK/PW_PortalWars_parameters.hpp"
#include "SDK/PW_EQU8_structs.hpp"
#include "SDK/PW_EQU8_classes.hpp"
#include "SDK/PW_EQU8_parameters.hpp"
#include "SDK/PW_Synthesis_structs.hpp"
#include "SDK/PW_Synthesis_classes.hpp"
#include "SDK/PW_Synthesis_parameters.hpp"
#include "SDK/PW_TakeMovieScene_structs.hpp"
#include "SDK/PW_TakeMovieScene_classes.hpp"
#include "SDK/PW_TakeMovieScene_parameters.hpp"
#include "SDK/PW_TemplateSequence_structs.hpp"
#include "SDK/PW_TemplateSequence_classes.hpp"
#include "SDK/PW_TemplateSequence_parameters.hpp"
#include "SDK/PW_OpenColorIO_structs.hpp"
#include "SDK/PW_OpenColorIO_classes.hpp"
#include "SDK/PW_OpenColorIO_parameters.hpp"
#include "SDK/PW_ActorLayerUtilities_structs.hpp"
#include "SDK/PW_ActorLayerUtilities_classes.hpp"
#include "SDK/PW_ActorLayerUtilities_parameters.hpp"
#include "SDK/PW_SequencerScripting_structs.hpp"
#include "SDK/PW_SequencerScripting_classes.hpp"
#include "SDK/PW_SequencerScripting_parameters.hpp"
#include "SDK/PW_ForgeGamepadBindingOverlay_WidgetBP_structs.hpp"
#include "SDK/PW_ForgeGamepadBindingOverlay_WidgetBP_classes.hpp"
#include "SDK/PW_ForgeGamepadBindingOverlay_WidgetBP_parameters.hpp"
#include "SDK/PW_MovieRenderPipelineCore_structs.hpp"
#include "SDK/PW_MovieRenderPipelineCore_classes.hpp"
#include "SDK/PW_MovieRenderPipelineCore_parameters.hpp"
#include "SDK/PW_NiagaraShader_structs.hpp"
#include "SDK/PW_NiagaraShader_classes.hpp"
#include "SDK/PW_NiagaraShader_parameters.hpp"
#include "SDK/PW_NiagaraCore_structs.hpp"
#include "SDK/PW_NiagaraCore_classes.hpp"
#include "SDK/PW_NiagaraCore_parameters.hpp"
#include "SDK/PW_CommonLoadingScreen_structs.hpp"
#include "SDK/PW_CommonLoadingScreen_classes.hpp"
#include "SDK/PW_CommonLoadingScreen_parameters.hpp"
#include "SDK/PW_SunPosition_structs.hpp"
#include "SDK/PW_SunPosition_classes.hpp"
#include "SDK/PW_SunPosition_parameters.hpp"
#include "SDK/PW_GamepadBindingOverlay_WidgetBP_structs.hpp"
#include "SDK/PW_GamepadBindingOverlay_WidgetBP_classes.hpp"
#include "SDK/PW_GamepadBindingOverlay_WidgetBP_parameters.hpp"
#include "SDK/PW_MovieRenderPipelineRenderPasses_structs.hpp"
#include "SDK/PW_MovieRenderPipelineRenderPasses_classes.hpp"
#include "SDK/PW_MovieRenderPipelineRenderPasses_parameters.hpp"
#include "SDK/PW_Niagara_structs.hpp"
#include "SDK/PW_Niagara_classes.hpp"
#include "SDK/PW_Niagara_parameters.hpp"
#include "SDK/PW_MovieRenderPipelineSettings_structs.hpp"
#include "SDK/PW_MovieRenderPipelineSettings_classes.hpp"
#include "SDK/PW_MovieRenderPipelineSettings_parameters.hpp"
#include "SDK/PW_Ansel_structs.hpp"
#include "SDK/PW_Ansel_classes.hpp"
#include "SDK/PW_Ansel_parameters.hpp"
#include "SDK/PW_Water_structs.hpp"
#include "SDK/PW_Water_classes.hpp"
#include "SDK/PW_Water_parameters.hpp"
#include "SDK/PW_NiagaraAnimNotifies_structs.hpp"
#include "SDK/PW_NiagaraAnimNotifies_classes.hpp"
#include "SDK/PW_NiagaraAnimNotifies_parameters.hpp"
#include "SDK/PW_MDFastBinding_structs.hpp"
#include "SDK/PW_MDFastBinding_classes.hpp"
#include "SDK/PW_MDFastBinding_parameters.hpp"
#include "SDK/PW_NiagaraUIRenderer_structs.hpp"
#include "SDK/PW_NiagaraUIRenderer_classes.hpp"
#include "SDK/PW_NiagaraUIRenderer_parameters.hpp"
#include "SDK/PW_Reflex_structs.hpp"
#include "SDK/PW_Reflex_classes.hpp"
#include "SDK/PW_Reflex_parameters.hpp"
#include "SDK/PW_MotoSynth_structs.hpp"
#include "SDK/PW_MotoSynth_classes.hpp"
#include "SDK/PW_MotoSynth_parameters.hpp"
#include "SDK/PW_ControllerBindingCategory_structs.hpp"
#include "SDK/PW_ControllerBindingCategory_classes.hpp"
#include "SDK/PW_ControllerBindingCategory_parameters.hpp"
#include "SDK/PW_OnlineSubsystemAccelByte_structs.hpp"
#include "SDK/PW_OnlineSubsystemAccelByte_classes.hpp"
#include "SDK/PW_OnlineSubsystemAccelByte_parameters.hpp"
#include "SDK/PW_NVIDIAGfeSDK_structs.hpp"
#include "SDK/PW_NVIDIAGfeSDK_classes.hpp"
#include "SDK/PW_NVIDIAGfeSDK_parameters.hpp"
#include "SDK/PW_ControllerBindingAction_structs.hpp"
#include "SDK/PW_ControllerBindingAction_classes.hpp"
#include "SDK/PW_ControllerBindingAction_parameters.hpp"
#include "SDK/PW_OWGameEvents_structs.hpp"
#include "SDK/PW_OWGameEvents_classes.hpp"
#include "SDK/PW_OWGameEvents_parameters.hpp"
#include "SDK/PW_BackButton_structs.hpp"
#include "SDK/PW_BackButton_classes.hpp"
#include "SDK/PW_BackButton_parameters.hpp"
#include "SDK/PW_AccelByteNetworkUtilities_structs.hpp"
#include "SDK/PW_AccelByteNetworkUtilities_classes.hpp"
#include "SDK/PW_AccelByteNetworkUtilities_parameters.hpp"
#include "SDK/PW_OnlineSubsystemSteam_structs.hpp"
#include "SDK/PW_OnlineSubsystemSteam_classes.hpp"
#include "SDK/PW_OnlineSubsystemSteam_parameters.hpp"

enum bones : int
{
	Root = 0,
	pelvis = 1,
	spine_01 = 2,
	spine_02 = 3,
	spine_03 = 4,
	clavicle_l = 5,
	upperarm_l = 6,
	lowerarm_l = 7,
	hand_l = 8,
	index_01_l = 9,
	index_02_l = 10,
	index_03_l = 11,
	middle_01_l = 12,
	middle_02_l = 13,
	middle_03_l = 14,
	pinky_01_l = 15,
	pinky_02_l = 16,
	pinky_03_l = 17,
	ring_01_l = 18,
	ring_02_l = 19,
	ring_03_l = 20,
	thumb_01_l = 21,
	thumb_02_l = 22,
	thumb_03_l = 23,
	lowerarm_twist_01_l = 24,
	upperarm_twist_01_l = 25,
	clavicle_r = 26,
	upperarm_r = 27,
	lowerarm_r = 28,
	hand_r = 29,
	index_01_r = 30,
	index_02_r = 31,
	index_03_r = 32,
	middle_01_r = 33,
	middle_02_r = 34,
	middle_03_r = 35,
	pinky_01_r = 36,
	pinky_02_r = 37,
	pinky_03_r = 38,
	ring_01_r = 39,
	ring_02_r = 40,
	ring_03_r = 41,
	thumb_01_r = 42,
	thumb_02_r = 43,
	thumb_03_r = 44,
	lowerarm_twist_01_r = 45,
	upperarm_twist_01_r = 46,
	neck_01 = 47,
	head = 48,
	thigh_l = 49,
	calf_l = 50,
	calf_twist_01_l = 51,
	foot_l = 52,
	ball_l = 53,
	thigh_twist_01_l = 54,
	thigh_r = 55,
	calf_r = 56,
	calf_twist_01_r = 57,
	foot_r = 58,
	ball_r = 59,
	thigh_twist_01_r = 60,
	ik_foot_root = 61,
	ik_foot_l = 62,
	ik_foot_r = 63,
	ik_hand_root = 64,
	ik_hand_gun = 65,
	ik_hand_l = 66,
	ik_hand_r = 67,
	knee_target_l = 68,
	knee_target_r = 69,
	RHS_ik_hand_gun = 70,
};

static inline void memcpy_(void* _Dst, void const* _Src, size_t _Size)
{
	auto csrc = (char*)_Src;
	auto cdest = (char*)_Dst;

	for (int i = 0; i < _Size; i++)
	{
		cdest[i] = csrc[i];
	}
}

static inline void SwapVtable(void* obj, uint32_t index, void* hook) {
	auto currVt = *(void**)(obj);

	auto vtable = *(void***)(obj);
	int i = 0;

	for (; vtable[i]; i++)
		__noop();

	auto newVt = new uintptr_t[i];

	memcpy_(newVt, currVt, i * 0x8);

	newVt[index] = (uintptr_t)hook;

	*(uintptr_t**)(obj) = newVt;
}

uintptr_t FindPattern(HMODULE module, const unsigned char* pattern, const char* mask);
uintptr_t FindPattern(uintptr_t start, size_t length, const unsigned char* pattern, const char* mask);

class unrealengine {
public:
	static inline SDK::UWorld** GWorld = NULL;
	static inline SDK::UWorld* World = NULL;
	static inline SDK::FMinimalViewInfo* Camera;
	static inline SDK::APlayerController* PlayerController = NULL;
	static inline SDK::ULocalPlayer* LocalPlayer = NULL;
	static inline SDK::UKismetMathLibrary* MathLib = NULL;
	static inline SDK::UKismetSystemLibrary* KismetSystemLib = NULL;
	static inline SDK::UGameplayStatics* GPStatics = NULL;
	static inline SDK::UFont* Font = NULL;

	static bool SetObjects()
	{
		//set MathLib for math functions
		if (!MathLib) MathLib = (SDK::UKismetMathLibrary*)SDK::UKismetMathLibrary::StaticClass();

		//set SystemLib for math functions
		if (!KismetSystemLib) KismetSystemLib = (SDK::UKismetSystemLibrary*)SDK::UKismetSystemLibrary::StaticClass();

		//Set GPStatics for game functions
		if (!GPStatics) GPStatics = (SDK::UGameplayStatics*)SDK::UGameplayStatics::StaticClass();
		if (!GPStatics) return false;

		//set world
		World = *GWorld;

		//check world
		if (!World) return false;

		//Set local player 
		if (World->OwningGameInstance && World->OwningGameInstance->LocalPlayers.IsValidIndex(0)) LocalPlayer = World->OwningGameInstance->LocalPlayers[0];
		if (!LocalPlayer) return false;

		//Set player contoller
		if (LocalPlayer) PlayerController = LocalPlayer->PlayerController;
		if (!PlayerController) return false;

		//Everything went well
		return true;
	}

	void DrawLine(SDK::UCanvas* Canvas, SDK::FVector2D position1, SDK::FVector2D position2, SDK::FLinearColor color, int thickness = 1)
	{
		Canvas->K2_DrawLine(position1, position2, thickness, color);
	}



	inline void SetAim(SDK::APlayerCameraManager* MyCamera, SDK::APortalWarsCharacter* Target)
	{
		SDK::FVector CamLocation = MyCamera->GetCameraLocation();
		SDK::FRotator CamRotation = MyCamera->GetCameraRotation();
		SDK::FVector AimLocation;
		SDK::FRotator AimRotation, CurrentRotation;

		AimLocation = Target->Mesh->GetSocketLocation(Target->Mesh->GetBoneName(head));

		//get aim rotation
		AimRotation = MathLib->STATIC_FindLookAtRotation(CamLocation, AimLocation);

		//set aim
		PlayerController->SetControlRotation(AimRotation);
	}

	void SetRotation(SDK::APlayerCameraManager* PlayerCameraManager, SDK::APlayerController* PlayerController, SDK::FRotator TargetRotation, bool bWithRotationInput, float Smooth)
	{
		auto v11 = reinterpret_cast<uint64_t>(PlayerController) + 0x6A0; //update
		auto v10 = reinterpret_cast<uint64_t>(PlayerCameraManager) + 0x299C; //update

		if (!bWithRotationInput)
			v11 = v10;

		SDK::FRotator currentRotation = *(SDK::FRotator*)(v11);

		SDK::FRotator smoothRotation;
		smoothRotation.Pitch = currentRotation.Pitch + (TargetRotation.Pitch - currentRotation.Pitch) / Smooth;
		smoothRotation.Yaw = currentRotation.Yaw + (TargetRotation.Yaw - currentRotation.Yaw) / Smooth;
		smoothRotation.Roll = currentRotation.Roll + (TargetRotation.Roll - currentRotation.Roll) / Smooth;

		*(SDK::FRotator*)(v11) = smoothRotation;
	}

	SDK::FRotator ToRotator(SDK::FVector local, SDK::FVector target) {

		SDK::FVector rotation = local - target;

		SDK::FRotator newViewAngle = { 0 };

		float hyp = sqrt(rotation.X * rotation.X + rotation.Y * rotation.Y);

		newViewAngle.Pitch = -atan(rotation.Z / hyp) * (180.f / M_PI);
		newViewAngle.Yaw = atan(rotation.Y / rotation.X) * (180.f / M_PI);
		newViewAngle.Roll = (float)0.f;

		if (rotation.X >= 0.f)
			newViewAngle.Yaw += 180.0f;

		return newViewAngle;
	}

	void Aimbot(SDK::APlayerController* PlayerController, SDK::APortalWarsCharacter* Target, float Smooth)
	{
		SDK::FVector AimDirection = Target->Mesh->GetSocketLocation(Target->Mesh->GetBoneName(head));
		SDK::FVector CameraCachePrivate_POV_Location = PlayerController->PlayerCameraManager->CameraCachePrivate.POV.Location;
		SDK::FRotator AimRotation = ToRotator(CameraCachePrivate_POV_Location, AimDirection);
		SetRotation(PlayerController->PlayerCameraManager, PlayerController, AimRotation, false, Smooth);
	}




	void DrawCorneredBox(SDK::UCanvas* Canvas, SDK::FVector2D position, SDK::FVector2D size, int thickness, SDK::FLinearColor color) {
		float lineW = (size.X / 5);
		float lineH = (size.Y / 4);

		//corners
		DrawLine(Canvas, SDK::FVector2D(position.X, position.Y), SDK::FVector2D(position.X, position.Y + lineH), color, thickness);
		DrawLine(Canvas, SDK::FVector2D(position.X, position.Y), SDK::FVector2D(position.X + lineW, position.Y), color, thickness);
		DrawLine(Canvas, SDK::FVector2D(position.X + size.X - lineW, position.Y), SDK::FVector2D(position.X + size.X, position.Y), color, thickness);
		DrawLine(Canvas, SDK::FVector2D(position.X + size.X, position.Y), SDK::FVector2D(position.X + size.X, position.Y + lineH), color, thickness);
		DrawLine(Canvas, SDK::FVector2D(position.X, position.Y + size.Y - lineH), SDK::FVector2D(position.X, position.Y + size.Y), color, thickness);
		DrawLine(Canvas, SDK::FVector2D(position.X, position.Y + size.Y), SDK::FVector2D(position.X + lineW, position.Y + size.Y), color, thickness);
		DrawLine(Canvas, SDK::FVector2D(position.X + size.X - lineW, position.Y + size.Y), SDK::FVector2D(position.X + size.X, position.Y + size.Y), color, thickness);
		DrawLine(Canvas, SDK::FVector2D(position.X + size.X, position.Y + size.Y - lineH), SDK::FVector2D(position.X + size.X, position.Y + size.Y), color, thickness);
	}

	bool bOutline = 1;




	void DrawTextRGB(SDK::UCanvas* canvas, const wchar_t* text, float x, float y, SDK::FLinearColor color, bool CenterX = 0)
	{
		canvas->K2_DrawText1(text, { x, y }, { 1.1, 1.1 }, { 1.f,1.f,1.f,1.0f }, 0.f, { 0, 0, 0, 1 }, { 0, 0 }, 0, 0, 0, { 0, 0, 0, 1 });
	}

	void DrawTextRGBWithFString(SDK::UCanvas* canvas, SDK::FString text, float x, float y, SDK::FLinearColor color, bool CenterX = 0)
	{
		canvas->K2_DrawText1(text, { x, y }, { 1.1, 1.1 }, { 1.f,1.f,1.f,1.0f }, 0.f, { 0, 0, 0, 1 }, { 0, 0 }, 0, 0, 0, { 0, 0, 0, 1 });
	}



	inline void Box2D(SDK::UCanvas* Canvas, SDK::APortalWarsCharacter* actor, SDK::FVector2D Bottom, SDK::FVector2D Top, SDK::FLinearColor col)
	{
		SDK::FVector WorldOrigin, WorldBoxExtent;
		actor->GetActorBounds(bool(PlayerController->AcknowledgedPawn), false, &WorldOrigin, &WorldBoxExtent);

		WorldBoxExtent.X *= 2.f;
		WorldBoxExtent.Y *= 2.f;
		WorldBoxExtent.Z *= 2.f;

		WorldOrigin.X -= WorldBoxExtent.X / 2.f;
		WorldOrigin.Y -= WorldBoxExtent.Y / 2.f;
		WorldOrigin.Z -= WorldBoxExtent.Z / 2.f;

		SDK::FVector one = WorldOrigin;
		SDK::FVector two = WorldOrigin; two.X += WorldBoxExtent.X;
		SDK::FVector three = WorldOrigin; three.X += WorldBoxExtent.X; three.Y += WorldBoxExtent.Y;
		SDK::FVector four = WorldOrigin; four.Y += WorldBoxExtent.Y;

		SDK::FVector five = one; five.Z += WorldBoxExtent.Z;
		SDK::FVector six = two; six.Z += WorldBoxExtent.Z;
		SDK::FVector seven = three; seven.Z += WorldBoxExtent.Z;
		SDK::FVector eight = four; eight.Z += WorldBoxExtent.Z;

		SDK::FVector2D s1, s2, s3, s4, s5, s6, s7, s8;
		PlayerController->ProjectWorldLocationToScreen(one, false, &s1);
		PlayerController->ProjectWorldLocationToScreen(two, false, &s2);
		PlayerController->ProjectWorldLocationToScreen(three, false, &s3);
		PlayerController->ProjectWorldLocationToScreen(four, false, &s4);
		PlayerController->ProjectWorldLocationToScreen(five, false, &s5);
		PlayerController->ProjectWorldLocationToScreen(six, false, &s6);
		PlayerController->ProjectWorldLocationToScreen(seven, false, &s7);
		PlayerController->ProjectWorldLocationToScreen(eight, false, &s8);

		int x_array[8] = { s1.X, s2.X, s3.X, s4.X, s5.X, s6.X, s7.X, s8.X };
		int right = x_array[0], left = x_array[0];

		for (int right_idx = 0; right_idx < 8; right_idx++)
		{
			if (x_array[right_idx] > right)
				right = x_array[right_idx];
		}

		for (int left_idx = 0; left_idx < 8; left_idx++)
		{
			if (x_array[left_idx] < left)
				left = x_array[left_idx];
		}

		float Width = right - left;
		float Height = Bottom.Y - Top.Y;

		SDK::FVector2D min, max, size;
		min.X = left;
		min.Y = Bottom.Y;

		max.X = right;
		max.Y = Top.Y;

		size.X = min.X - max.X;
		size.Y = min.Y - max.Y;

		DrawCorneredBox(Canvas, max, size, 1.5, col);
	}
};

inline unrealengine* ue = new unrealengine;

typedef void (*PostRender_t)(SDK::UObject* pObject, SDK::UCanvas* pCanvas);
static inline PostRender_t origin_renderer;