#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_SIB_HAIR_UNI_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_SIB_HAIR_UNI_01.TBP_SIB_HAIR_UNI_01_C
// 0x0000 (0x0140 - 0x0140)
class UTBP_SIB_HAIR_UNI_01_C : public UTigerCharacterCombinedItemConfiguration
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_SIB_HAIR_UNI_01.TBP_SIB_HAIR_UNI_01_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
