#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_BulletProjectile_Small_Fiery_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_BulletProjectile_Small_Fiery.TBP_BulletProjectile_Small_Fiery_C
// 0x0000 (0x0438 - 0x0438)
class ATBP_BulletProjectile_Small_Fiery_C : public ATBP_BulletProjectile_Small_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_BulletProjectile_Small_Fiery.TBP_BulletProjectile_Small_Fiery_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
