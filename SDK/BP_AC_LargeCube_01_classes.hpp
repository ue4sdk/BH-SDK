#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AC_LargeCube_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AC_LargeCube_01.BP_AC_LargeCube_01_C
// 0x0000 (0x0280 - 0x0280)
class ABP_AC_LargeCube_01_C : public ATigerActivatedObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AC_LargeCube_01.BP_AC_LargeCube_01_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
