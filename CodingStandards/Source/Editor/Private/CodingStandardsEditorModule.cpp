// License info here...

#include "CodingStandardsEditorModule.h"

#include "CodingStandardsEditorModuleInterface.h"

#include <Modules/ModuleManager.h>

#define LOCTEXT_NAMESPACE "CodingStandardsEditorModule"

namespace CodingStandardsEditor
{
class FCodingStandardsEditorModule : public ICodingStandardsEditorModule
{
    virtual void StartupModule() override
    {
        UE_LOG(LogCodingStandardsEditor, Log,
               TEXT("Coding Standards Editor has started!"));
    }

    virtual void ShutdownModule() override
    {
        UE_LOG(LogCodingStandardsEditor, Log,
               TEXT("Coding Standards Editor has shut down!"));
    }
};
} // namespace CodingStandardsEditor

IMPLEMENT_MODULE(CodingStandardsEditor::FCodingStandardsEditorModule,
                 CodingStandardsEditor);

DEFINE_LOG_CATEGORY(LogCodingStandardsEditor);

#undef LOCTEXT_NAMESPACE
