#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Buff_UsingConsumableWithMovement_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Buff_UsingConsumableWithMovement.TBP_Buff_UsingConsumableWithMovement_C
// 0x0000 (0x0260 - 0x0260)
class UTBP_Buff_UsingConsumableWithMovement_C : public UTigerBuff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Buff_UsingConsumableWithMovement.TBP_Buff_UsingConsumableWithMovement_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
