// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Divider_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Divider.TBP_UI_Divider_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Divider_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Divider.TBP_UI_Divider_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Divider.TBP_UI_Divider_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Divider_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Divider.TBP_UI_Divider_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Divider.TBP_UI_Divider_C.ExecuteUbergraph_TBP_UI_Divider
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Divider_C::ExecuteUbergraph_TBP_UI_Divider(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Divider.TBP_UI_Divider_C.ExecuteUbergraph_TBP_UI_Divider"));

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