#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Perk_Item_Melancholic_Siren_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Perk_Item_Melancholic_Siren.TBP_Perk_Item_Melancholic_Siren_C
// 0x0000 (0x0110 - 0x0110)
class UTBP_Perk_Item_Melancholic_Siren_C : public UTBP_Perk_Item_Melancholic_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Perk_Item_Melancholic_Siren.TBP_Perk_Item_Melancholic_Siren_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
