#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_VMP_TOR_M_BEARD_03_POS_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_VMP_TOR_M_BEARD_03_POS.TBP_VMP_TOR_M_BEARD_03_POS_C
// 0x0000 (0x0088 - 0x0088)
class UTBP_VMP_TOR_M_BEARD_03_POS_C : public UTBP_PoseableMesh_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_VMP_TOR_M_BEARD_03_POS.TBP_VMP_TOR_M_BEARD_03_POS_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif