// BSD 3-Clause License
//
// Copyright (c) 2019, Splash Damage
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// * Redistributions of source code must retain the above copyright notice, this
//   list of conditions and the following disclaimer.
//
// * Redistributions in binary form must reproduce the above copyright notice,
//   this list of conditions and the following disclaimer in the documentation
//   and/or other materials provided with the distribution.
//
// * Neither the name of the copyright holder nor the names of its
//   contributors may be used to endorse or promote products derived from
//   this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.

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
