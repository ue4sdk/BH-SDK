#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_VMP_BRU_F_HAIR_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_VMP_BRU_F_HAIR_02.ABP_VMP_BRU_F_HAIR_02_C
// 0x5140 (0x5400 - 0x02C0)
class UABP_VMP_BRU_F_HAIR_02_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02C8(0x0030)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02F8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_19;                            // 0x0300(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_18;                            // 0x0740(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_17;                            // 0x0B80(0x0440)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x0FC0(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_16;                            // 0x0FE0(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_15;                            // 0x1420(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_14;                            // 0x1860(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_13;                            // 0x1CA0(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_12;                            // 0x20E0(0x0440)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x2520(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_11;                            // 0x2540(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_10;                            // 0x2980(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9;                             // 0x2DC0(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8;                             // 0x3200(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7;                             // 0x3640(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6;                             // 0x3A80(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5;                             // 0x3EC0(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4;                             // 0x4300(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3;                             // 0x4740(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                             // 0x4B80(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                               // 0x4FC0(0x0440)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass ABP_VMP_BRU_F_HAIR_02.ABP_VMP_BRU_F_HAIR_02_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_VMP_BRU_F_HAIR_02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif