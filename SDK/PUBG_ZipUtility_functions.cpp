// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ZipUtility_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ZipUtility.ZipUtilityInterface.OnStartProcess
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                archive                        (Parm, ZeroConstructor)
// int*                           bytes                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71ABE8430              		 offset:2e18430                       

void UZipUtilityInterface::OnStartProcess(struct FString* archive, int* bytes)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ZipUtility.ZipUtilityInterface.OnStartProcess"));

	UZipUtilityInterface_OnStartProcess_Params params;
	params.archive = archive;
	params.bytes = bytes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZipUtility.ZipUtilityInterface.OnProgress
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                archive                        (Parm, ZeroConstructor)
// float*                         Percentage                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bytes                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71ABE8300              		 offset:2e18300                       

void UZipUtilityInterface::OnProgress(struct FString* archive, float* Percentage, int* bytes)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ZipUtility.ZipUtilityInterface.OnProgress"));

	UZipUtilityInterface_OnProgress_Params params;
	params.archive = archive;
	params.Percentage = Percentage;
	params.bytes = bytes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZipUtility.ZipUtilityInterface.OnFileFound
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                archive                        (Parm, ZeroConstructor)
// struct FString*                file                           (Parm, ZeroConstructor)
// int*                           Size                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71ABE81C0              		 offset:2e181c0                       

void UZipUtilityInterface::OnFileFound(struct FString* archive, struct FString* file, int* Size)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ZipUtility.ZipUtilityInterface.OnFileFound"));

	UZipUtilityInterface_OnFileFound_Params params;
	params.archive = archive;
	params.file = file;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZipUtility.ZipUtilityInterface.OnFileDone
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                archive                        (Parm, ZeroConstructor)
// struct FString*                file                           (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71ABE80C0              		 offset:2e180c0                       

void UZipUtilityInterface::OnFileDone(struct FString* archive, struct FString* file)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ZipUtility.ZipUtilityInterface.OnFileDone"));

	UZipUtilityInterface_OnFileDone_Params params;
	params.archive = archive;
	params.file = file;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZipUtility.ZipUtilityInterface.OnDone
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                archive                        (Parm, ZeroConstructor)
// TEnumAsByte<EZipUtilityCompletionState>* CompletionState                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71ABE7FD0              		 offset:2e17fd0                       

void UZipUtilityInterface::OnDone(struct FString* archive, TEnumAsByte<EZipUtilityCompletionState>* CompletionState)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ZipUtility.ZipUtilityInterface.OnDone"));

	UZipUtilityInterface_OnDone_Params params;
	params.archive = archive;
	params.CompletionState = CompletionState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZipUtility.ZipFileFunctionLibrary.Zip
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString*                FileOrFolderPath               (Parm, ZeroConstructor)
// class UObject**                ZipUtilityInterfaceDelegate    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat>* Format                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionLevel>* Level                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71ABE8E80              		 offset:2e18e80                       

bool UZipFileFunctionLibrary::STATIC_Zip(struct FString* FileOrFolderPath, class UObject** ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat>* Format, TEnumAsByte<EZipUtilityCompressionLevel>* Level)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ZipUtility.ZipFileFunctionLibrary.Zip"));

	UZipFileFunctionLibrary_Zip_Params params;
	params.FileOrFolderPath = FileOrFolderPath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.UnzipTo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString*                ArchivePath                    (Parm, ZeroConstructor)
// struct FString*                destinationPath                (Parm, ZeroConstructor)
// class UObject**                ZipUtilityInterfaceDelegate    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat>* Format                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71ABE8D10              		 offset:2e18d10                       

bool UZipFileFunctionLibrary::STATIC_UnzipTo(struct FString* ArchivePath, struct FString* destinationPath, class UObject** ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat>* Format)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ZipUtility.ZipFileFunctionLibrary.UnzipTo"));

	UZipFileFunctionLibrary_UnzipTo_Params params;
	params.ArchivePath = ArchivePath;
	params.destinationPath = destinationPath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.UnzipFilesTo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<int>*                   fileIndices                    (ConstParm, Parm, ZeroConstructor)
// struct FString*                ArchivePath                    (Parm, ZeroConstructor)
// struct FString*                destinationPath                (Parm, ZeroConstructor)
// class UObject**                ZipUtilityInterfaceDelegate    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat>* Format                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71ABE8B10              		 offset:2e18b10                       

bool UZipFileFunctionLibrary::STATIC_UnzipFilesTo(TArray<int>* fileIndices, struct FString* ArchivePath, struct FString* destinationPath, class UObject** ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat>* Format)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ZipUtility.ZipFileFunctionLibrary.UnzipFilesTo"));

	UZipFileFunctionLibrary_UnzipFilesTo_Params params;
	params.fileIndices = fileIndices;
	params.ArchivePath = ArchivePath;
	params.destinationPath = destinationPath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.UnzipFiles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<int>*                   fileIndices                    (ConstParm, Parm, ZeroConstructor)
// struct FString*                ArchivePath                    (Parm, ZeroConstructor)
// class UObject**                ZipUtilityInterfaceDelegate    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat>* Format                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71ABE8960              		 offset:2e18960                       

bool UZipFileFunctionLibrary::STATIC_UnzipFiles(TArray<int>* fileIndices, struct FString* ArchivePath, class UObject** ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat>* Format)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ZipUtility.ZipFileFunctionLibrary.UnzipFiles"));

	UZipFileFunctionLibrary_UnzipFiles_Params params;
	params.fileIndices = fileIndices;
	params.ArchivePath = ArchivePath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.UnzipFileNamedTo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString*                ArchivePath                    (Parm, ZeroConstructor)
// struct FString*                Name                           (Parm, ZeroConstructor)
// struct FString*                destinationPath                (Parm, ZeroConstructor)
// class UObject**                ZipUtilityInterfaceDelegate    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat>* Format                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71ABE87A0              		 offset:2e187a0                       

bool UZipFileFunctionLibrary::STATIC_UnzipFileNamedTo(struct FString* ArchivePath, struct FString* Name, struct FString* destinationPath, class UObject** ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat>* Format)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ZipUtility.ZipFileFunctionLibrary.UnzipFileNamedTo"));

	UZipFileFunctionLibrary_UnzipFileNamedTo_Params params;
	params.ArchivePath = ArchivePath;
	params.Name = Name;
	params.destinationPath = destinationPath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.UnzipFileNamed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString*                ArchivePath                    (Parm, ZeroConstructor)
// struct FString*                Name                           (Parm, ZeroConstructor)
// class UObject**                ZipUtilityInterfaceDelegate    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat>* Format                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71ABE8630              		 offset:2e18630                       

bool UZipFileFunctionLibrary::STATIC_UnzipFileNamed(struct FString* ArchivePath, struct FString* Name, class UObject** ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat>* Format)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ZipUtility.ZipFileFunctionLibrary.UnzipFileNamed"));

	UZipFileFunctionLibrary_UnzipFileNamed_Params params;
	params.ArchivePath = ArchivePath;
	params.Name = Name;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.Unzip
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString*                ArchivePath                    (Parm, ZeroConstructor)
// class UObject**                ZipUtilityInterfaceDelegate    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat>* Format                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71ABE8510              		 offset:2e18510                       

bool UZipFileFunctionLibrary::STATIC_Unzip(struct FString* ArchivePath, class UObject** ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat>* Format)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ZipUtility.ZipFileFunctionLibrary.Unzip"));

	UZipFileFunctionLibrary_Unzip_Params params;
	params.ArchivePath = ArchivePath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.ListFilesInArchive
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString*                ArchivePath                    (Parm, ZeroConstructor)
// class UObject**                ZipUtilityInterfaceDelegate    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat>* Format                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71ABE7EB0              		 offset:2e17eb0                       

bool UZipFileFunctionLibrary::STATIC_ListFilesInArchive(struct FString* ArchivePath, class UObject** ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat>* Format)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ZipUtility.ZipFileFunctionLibrary.ListFilesInArchive"));

	UZipFileFunctionLibrary_ListFilesInArchive_Params params;
	params.ArchivePath = ArchivePath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
