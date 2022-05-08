// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Builders_Container_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Builders_Container_01.BP_Builders_Container_01_C.SetCustomPrimitiveData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Builders_Container_01_C::SetCustomPrimitiveData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Builders_Container_01.BP_Builders_Container_01_C.SetCustomPrimitiveData"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Builders_Container_01.BP_Builders_Container_01_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Builders_Container_01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Builders_Container_01.BP_Builders_Container_01_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Builders_Container_01.BP_Builders_Container_01_C.OnBeginCharacterOverlap
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         OverlappingCharacter           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            TotalOverlapCount              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Builders_Container_01_C::OnBeginCharacterOverlap(class ATigerCharacter* OverlappingCharacter, int TotalOverlapCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Builders_Container_01.BP_Builders_Container_01_C.OnBeginCharacterOverlap"));

	struct
	{
		class ATigerCharacter*         OverlappingCharacter;
		int                            TotalOverlapCount;
	} params = {};

	params.OverlappingCharacter = OverlappingCharacter;
	params.TotalOverlapCount = TotalOverlapCount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Builders_Container_01.BP_Builders_Container_01_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Builders_Container_01_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Builders_Container_01.BP_Builders_Container_01_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Builders_Container_01.BP_Builders_Container_01_C.ExecuteUbergraph_BP_Builders_Container_01
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Builders_Container_01_C::ExecuteUbergraph_BP_Builders_Container_01(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Builders_Container_01.BP_Builders_Container_01_C.ExecuteUbergraph_BP_Builders_Container_01"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
