#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Challenge_KillPlayers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Challenge_KillPlayers.TBP_Challenge_KillPlayers_C
// 0x0000 (0x0150 - 0x0150)
class UTBP_Challenge_KillPlayers_C : public UTigerChallengeKillPlayers
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Challenge_KillPlayers.TBP_Challenge_KillPlayers_C"));
		return ptr;
	}


	struct FText GetClanRequirementsText();
	struct FText BuildDescriptionText();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
