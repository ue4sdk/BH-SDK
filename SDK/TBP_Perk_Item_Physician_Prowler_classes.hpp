#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Perk_Item_Physician_Prowler_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Perk_Item_Physician_Prowler.TBP_Perk_Item_Physician_Prowler_C
// 0x0000 (0x0110 - 0x0110)
class UTBP_Perk_Item_Physician_Prowler_C : public UTBP_Perk_Item_Physician_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Perk_Item_Physician_Prowler.TBP_Perk_Item_Physician_Prowler_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
