// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DefaultCycleStyle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DefaultCycleStyle.DefaultCycleStyle_C.DetermineNextWeaponSlot
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerController*  InPlayerController             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerWeaponCycleDirection     InDirection                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerWeaponSlot               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ETigerWeaponSlot UDefaultCycleStyle_C::DetermineNextWeaponSlot(class ATigerPlayerController* InPlayerController, ETigerWeaponCycleDirection InDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DefaultCycleStyle.DefaultCycleStyle_C.DetermineNextWeaponSlot"));

	struct
	{
		class ATigerPlayerController*  InPlayerController;
		ETigerWeaponCycleDirection     InDirection;
		ETigerWeaponSlot               ReturnValue;
	} params = {};

	params.InPlayerController = InPlayerController;
	params.InDirection = InDirection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
