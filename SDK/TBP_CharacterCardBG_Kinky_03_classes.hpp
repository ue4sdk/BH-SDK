#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_CharacterCardBG_Kinky_03_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_CharacterCardBG_Kinky_03.TBP_CharacterCardBG_Kinky_03_C
// 0x0000 (0x0130 - 0x0130)
class UTBP_CharacterCardBG_Kinky_03_C : public UTigerCharacterCardBackgroundCustomization
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_CharacterCardBG_Kinky_03.TBP_CharacterCardBG_Kinky_03_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
