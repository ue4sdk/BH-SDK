#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_SeasonExpReward_Easy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_SeasonExpReward_Easy.TBP_SeasonExpReward_Easy_C
// 0x0000 (0x0110 - 0x0110)
class UTBP_SeasonExpReward_Easy_C : public UTBP_SeasonExpReward_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_SeasonExpReward_Easy.TBP_SeasonExpReward_Easy_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
