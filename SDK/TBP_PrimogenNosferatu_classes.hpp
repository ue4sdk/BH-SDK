#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_PrimogenNosferatu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_PrimogenNosferatu.TBP_PrimogenNosferatu_C
// 0x0000 (0x0110 - 0x0110)
class UTBP_PrimogenNosferatu_C : public UTigerInteractiveNpcComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_PrimogenNosferatu.TBP_PrimogenNosferatu_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
