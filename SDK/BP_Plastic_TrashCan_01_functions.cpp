// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Plastic_TrashCan_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Plastic_TrashCan_01.BP_Plastic_TrashCan_01_C.SetGraffitiMeshAndMaterial
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InMaterialSeed                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InColorSeed                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InMeshIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Plastic_TrashCan_01_C::SetGraffitiMeshAndMaterial(int InMaterialSeed, int InColorSeed, int InMeshIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Plastic_TrashCan_01.BP_Plastic_TrashCan_01_C.SetGraffitiMeshAndMaterial"));

	struct
	{
		int                            InMaterialSeed;
		int                            InColorSeed;
		int                            InMeshIndex;
	} params = {};

	params.InMaterialSeed = InMaterialSeed;
	params.InColorSeed = InColorSeed;
	params.InMeshIndex = InMeshIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Plastic_TrashCan_01.BP_Plastic_TrashCan_01_C.GetRandomBoolFromSeed
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ABP_Plastic_TrashCan_01_C::GetRandomBoolFromSeed(int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Plastic_TrashCan_01.BP_Plastic_TrashCan_01_C.GetRandomBoolFromSeed"));

	struct
	{
		int                            InIndex;
		bool                           ReturnValue;
	} params = {};

	params.InIndex = InIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_Plastic_TrashCan_01.BP_Plastic_TrashCan_01_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Plastic_TrashCan_01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Plastic_TrashCan_01.BP_Plastic_TrashCan_01_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
