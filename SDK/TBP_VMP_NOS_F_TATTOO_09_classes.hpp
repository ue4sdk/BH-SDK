#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_VMP_NOS_F_TATTOO_09_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_VMP_NOS_F_TATTOO_09.TBP_VMP_NOS_F_TATTOO_09_C
// 0x0000 (0x0140 - 0x0140)
class UTBP_VMP_NOS_F_TATTOO_09_C : public UTigerCharacterTattooCustomization
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_VMP_NOS_F_TATTOO_09.TBP_VMP_NOS_F_TATTOO_09_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
