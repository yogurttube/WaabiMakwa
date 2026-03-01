// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AMakw_Character.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAMakw_Character() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
MAKWA_API UClass* Z_Construct_UClass_AAMakw_Character();
MAKWA_API UClass* Z_Construct_UClass_AAMakw_Character_NoRegister();
UPackage* Z_Construct_UPackage__Script_Makwa();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAMakw_Character *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AAMakw_Character;
UClass* AAMakw_Character::GetPrivateStaticClass()
{
	using TClass = AAMakw_Character;
	if (!Z_Registration_Info_UClass_AAMakw_Character.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AMakw_Character"),
			Z_Registration_Info_UClass_AAMakw_Character.InnerSingleton,
			StaticRegisterNativesAAMakw_Character,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AAMakw_Character.InnerSingleton;
}
UClass* Z_Construct_UClass_AAMakw_Character_NoRegister()
{
	return AAMakw_Character::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAMakw_Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AMakw_Character.h" },
		{ "ModuleRelativePath", "Public/AMakw_Character.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AAMakw_Character constinit property declarations *************************
// ********** End Class AAMakw_Character constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAMakw_Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AAMakw_Character_Statics
UObject* (*const Z_Construct_UClass_AAMakw_Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Makwa,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAMakw_Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAMakw_Character_Statics::ClassParams = {
	&AAMakw_Character::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAMakw_Character_Statics::Class_MetaDataParams), Z_Construct_UClass_AAMakw_Character_Statics::Class_MetaDataParams)
};
void AAMakw_Character::StaticRegisterNativesAAMakw_Character()
{
}
UClass* Z_Construct_UClass_AAMakw_Character()
{
	if (!Z_Registration_Info_UClass_AAMakw_Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAMakw_Character.OuterSingleton, Z_Construct_UClass_AAMakw_Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAMakw_Character.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAMakw_Character);
AAMakw_Character::~AAMakw_Character() {}
// ********** End Class AAMakw_Character ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_bythe_OneDrive_Documents_Unreal_Projects_Makwa_Source_Makwa_Public_AMakw_Character_h__Script_Makwa_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAMakw_Character, AAMakw_Character::StaticClass, TEXT("AAMakw_Character"), &Z_Registration_Info_UClass_AAMakw_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAMakw_Character), 339390945U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_bythe_OneDrive_Documents_Unreal_Projects_Makwa_Source_Makwa_Public_AMakw_Character_h__Script_Makwa_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_bythe_OneDrive_Documents_Unreal_Projects_Makwa_Source_Makwa_Public_AMakw_Character_h__Script_Makwa_3006148261{
	TEXT("/Script/Makwa"),
	Z_CompiledInDeferFile_FID_Users_bythe_OneDrive_Documents_Unreal_Projects_Makwa_Source_Makwa_Public_AMakw_Character_h__Script_Makwa_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_bythe_OneDrive_Documents_Unreal_Projects_Makwa_Source_Makwa_Public_AMakw_Character_h__Script_Makwa_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
