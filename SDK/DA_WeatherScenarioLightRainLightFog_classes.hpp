#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DA_WeatherScenarioLightRainLightFog_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DA_WeatherScenarioLightRainLightFog.DA_WeatherScenarioLightRainLightFog_C
// 0x0000 (0x00F5 - 0x00F5)
class UDA_WeatherScenarioLightRainLightFog_C : public UDA_WeatherScenario_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass DA_WeatherScenarioLightRainLightFog.DA_WeatherScenarioLightRainLightFog_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif