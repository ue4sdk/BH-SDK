#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_LightningRod_01DataInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LightningRod_01DataInterface.BP_LightningRod_01DataInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_LightningRod_01DataInterface_C : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_LightningRod_01DataInterface.BP_LightningRod_01DataInterface_C"));
		return ptr;
	}


	void GetMetalBottom(class UStaticMesh** OutMesh);
	void GetMetalTop(class UStaticMesh** OutMesh);
	void GetMetalMiddle(int InIndex, class UStaticMesh** OutMesh);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
