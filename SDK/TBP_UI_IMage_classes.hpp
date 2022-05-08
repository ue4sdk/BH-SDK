#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_IMage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_IMage.TBP_UI_Image_C
// 0x0008 (0x0288 - 0x0280)
class UTBP_UI_Image_C : public UTigerImageUI
{
public:
	class UImage*                                      WrappedImage;                                             // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_IMage.TBP_UI_Image_C"));
		return ptr;
	}


	class UImage* GetImage();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
