#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// UserDefinedEnum ShopSigns_SM_Enum.ShopSigns_SM_Enum
enum class EShopSigns_SM_Enum : uint8_t
{
	ShopSigns_SM_Enum__NewEnumerator25 = 0,
	ShopSigns_SM_Enum__NewEnumerator0 = 1,
	ShopSigns_SM_Enum__NewEnumerator24 = 2,
	ShopSigns_SM_Enum__NewEnumerator6 = 3,
	ShopSigns_SM_Enum__NewEnumerator1 = 4,
	ShopSigns_SM_Enum__NewEnumerator2 = 5,
	ShopSigns_SM_Enum__NewEnumerator7 = 6,
	ShopSigns_SM_Enum__NewEnumerator9 = 7,
	ShopSigns_SM_Enum__NewEnumerator8 = 8,
	ShopSigns_SM_Enum__NewEnumerator14 = 9,
	ShopSigns_SM_Enum__NewEnumerator26 = 10,
	ShopSigns_SM_Enum__NewEnumerator27 = 11,
	ShopSigns_SM_Enum__NewEnumerator28 = 12,
	ShopSigns_SM_Enum__NewEnumerator29 = 13,
	ShopSigns_SM_Enum__NewEnumerator30 = 14,
	ShopSigns_SM_Enum__NewEnumerator22 = 15,
	ShopSigns_SM_Enum__NewEnumerator31 = 16,
	ShopSigns_SM_Enum__NewEnumerator10 = 17,
	ShopSigns_SM_Enum__NewEnumerator11 = 18,
	ShopSigns_SM_Enum__NewEnumerator12 = 19,
	ShopSigns_SM_Enum__NewEnumerator13 = 20,
	ShopSigns_SM_Enum__NewEnumerator23 = 21,
	ShopSigns_SM_Enum__NewEnumerator15 = 22,
	ShopSigns_SM_Enum__NewEnumerator16 = 23,
	ShopSigns_SM_Enum__NewEnumerator17 = 24,
	ShopSigns_SM_Enum__NewEnumerator32 = 25,
	ShopSigns_SM_Enum__NewEnumerator18 = 26,
	ShopSigns_SM_Enum__NewEnumerator33 = 27,
	ShopSigns_SM_Enum__NewEnumerator19 = 28,
	ShopSigns_SM_Enum__NewEnumerator3 = 29,
	ShopSigns_SM_Enum__NewEnumerator20 = 30,
	ShopSigns_SM_Enum__NewEnumerator21 = 31,
	ShopSigns_SM_Enum__NewEnumerator38 = 32,
	ShopSigns_SM_Enum__NewEnumerator4 = 33,
	ShopSigns_SM_Enum__NewEnumerator5 = 34,
	ShopSigns_SM_Enum__NewEnumerator39 = 35,
	ShopSigns_SM_Enum__NewEnumerator43 = 36,
	ShopSigns_SM_Enum__NewEnumerator44 = 37,
	ShopSigns_SM_Enum__NewEnumerator45 = 38,
	ShopSigns_SM_Enum__NewEnumerator46 = 39,
	ShopSigns_SM_Enum__NewEnumerator47 = 40,
	ShopSigns_SM_Enum__NewEnumerator48 = 41,
	ShopSigns_SM_Enum__NewEnumerator49 = 42,
	ShopSigns_SM_Enum__NewEnumerator50 = 43,
	ShopSigns_SM_Enum__NewEnumerator51 = 44,
	ShopSigns_SM_Enum__NewEnumerator52 = 45,
	ShopSigns_SM_Enum__NewEnumerator53 = 46,
	ShopSigns_SM_Enum__NewEnumerator54 = 47,
	ShopSigns_SM_Enum__NewEnumerator55 = 48,
	ShopSigns_SM_Enum__NewEnumerator56 = 49,
	ShopSigns_SM_Enum__NewEnumerator57 = 50,
	ShopSigns_SM_Enum__NewEnumerator58 = 51,
	ShopSigns_SM_Enum__NewEnumerator59 = 52,
	ShopSigns_SM_Enum__NewEnumerator60 = 53,
	ShopSigns_SM_Enum__NewEnumerator61 = 54,
	ShopSigns_SM_Enum__NewEnumerator62 = 55,
	ShopSigns_SM_Enum__NewEnumerator63 = 56,
	ShopSigns_SM_Enum__NewEnumerator64 = 57,
	ShopSigns_SM_Enum__NewEnumerator65 = 58,
	ShopSigns_SM_Enum__NewEnumerator66 = 59,
	ShopSigns_SM_Enum__NewEnumerator67 = 60,
	ShopSigns_SM_Enum__NewEnumerator68 = 61,
	ShopSigns_SM_Enum__NewEnumerator69 = 62,
	ShopSigns_SM_Enum__NewEnumerator81 = 63,
	ShopSigns_SM_Enum__NewEnumerator70 = 64,
	ShopSigns_SM_Enum__NewEnumerator71 = 65,
	ShopSigns_SM_Enum__NewEnumerator72 = 66,
	ShopSigns_SM_Enum__NewEnumerator73 = 67,
	ShopSigns_SM_Enum__NewEnumerator74 = 68,
	ShopSigns_SM_Enum__NewEnumerator75 = 69,
	ShopSigns_SM_Enum__NewEnumerator76 = 70,
	ShopSigns_SM_Enum__NewEnumerator77 = 71,
	ShopSigns_SM_Enum__NewEnumerator78 = 72,
	ShopSigns_SM_Enum__NewEnumerator79 = 73,
	ShopSigns_SM_Enum__NewEnumerator80 = 74,
	ShopSigns_SM_Enum__NewEnumerator82 = 75,
	ShopSigns_SM_Enum__NewEnumerator83 = 76,
	ShopSigns_SM_Enum__NewEnumerator84 = 77,
	ShopSigns_SM_Enum__NewEnumerator85 = 78,
	ShopSigns_SM_Enum__NewEnumerator86 = 79,
	ShopSigns_SM_Enum__NewEnumerator87 = 80,
	ShopSigns_SM_Enum__NewEnumerator88 = 81,
	ShopSigns_SM_Enum__NewEnumerator89 = 82,
	ShopSigns_SM_Enum__NewEnumerator90 = 83,
	ShopSigns_SM_Enum__NewEnumerator91 = 84,
	ShopSigns_SM_Enum__NewEnumerator92 = 85,
	ShopSigns_SM_Enum__NewEnumerator93 = 86,
	ShopSigns_SM_Enum__NewEnumerator94 = 87,
	ShopSigns_SM_Enum__NewEnumerator95 = 88,
	ShopSigns_SM_Enum__NewEnumerator96 = 89,
	ShopSigns_SM_Enum__NewEnumerator97 = 90,
	ShopSigns_SM_Enum__NewEnumerator98 = 91,
	ShopSigns_SM_Enum__NewEnumerator99 = 92,
	ShopSigns_SM_Enum__NewEnumerator100 = 93,
	ShopSigns_SM_Enum__NewEnumerator101 = 94,
	ShopSigns_SM_Enum__NewEnumerator102 = 95,
	ShopSigns_SM_Enum__NewEnumerator103 = 96,
	ShopSigns_SM_Enum__NewEnumerator104 = 97,
	ShopSigns_SM_Enum__NewEnumerator105 = 98,
	ShopSigns_SM_Enum__NewEnumerator106 = 99,
	ShopSigns_SM_Enum__NewEnumerator107 = 100,
	ShopSigns_SM_Enum__NewEnumerator108 = 101,
	ShopSigns_SM_Enum__NewEnumerator109 = 102,
	ShopSigns_SM_Enum__NewEnumerator110 = 103,
	ShopSigns_SM_Enum__NewEnumerator111 = 104,
	ShopSigns_SM_Enum__NewEnumerator112 = 105,
	ShopSigns_SM_Enum__NewEnumerator113 = 106,
	ShopSigns_SM_Enum__NewEnumerator114 = 107,
	ShopSigns_SM_Enum__NewEnumerator115 = 108,
	ShopSigns_SM_Enum__NewEnumerator116 = 109,
	ShopSigns_SM_Enum__NewEnumerator117 = 110,
	ShopSigns_SM_Enum__NewEnumerator118 = 111,
	ShopSigns_SM_Enum__ShopSigns_SM_MAX = 112
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
