#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Avatar_Elegant_08_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Avatar_Elegant_08.TBP_Avatar_Elegant_08_C
// 0x0000 (0x0130 - 0x0130)
class UTBP_Avatar_Elegant_08_C : public UTigerCharacterIconCustomization
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Avatar_Elegant_08.TBP_Avatar_Elegant_08_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif