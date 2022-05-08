#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_RangedWeapon_SMG_5_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_RangedWeapon_SMG_5.TBP_RangedWeapon_SMG_4_C
// 0x0000 (0x022C - 0x022C)
class UTBP_RangedWeapon_SMG_4_C : public UTBP_RangedWeapon_SMG_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_RangedWeapon_SMG_5.TBP_RangedWeapon_SMG_4_C"));
		return ptr;
	}


	void PlayLoopingAkEvents(class ATigerCharacter* InInstigator);
	void OnEndFireAudio(class ATigerCharacter* InInstigator);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif