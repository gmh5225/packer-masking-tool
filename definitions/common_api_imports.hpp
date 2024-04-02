#ifndef COMMON_API_IMPORTS_HPP
#define COMMON_API_IMPORTS_HPP

#include <vector>
#include <string>


// vector of tuples (dll_name, function_name), representing common API imports
// example: ("kernel32.dll", "LoadLibraryA"):
const std::vector<std::pair<std::string, std::string>> common_api_imports = {
        
    {"ADVAPI32.DLL", "CryptSetProvParam"}, 
    {"ADVAPI32.DLL", "RegQueryInfoKeyW"}, 
    {"ADVAPI32.DLL", "AddUsersToEncryptedFileEx"}, 
    {"ADVAPI32.DLL", "CheckAppInitBlockedServiceIdentity"}, 
    {"ADVAPI32.DLL", "LsaEnumerateAccounts"}, 
    {"ADVAPI32.DLL", "RegSaveKeyA"}, 
    {"ADVAPI32.DLL", "CreateProcessAsUserW"}, 
    {"ADVAPI32.DLL", "ReportEventA"}, 
    {"ADVAPI32.DLL", "WmiNotificationRegistrationW"}, 
    {"ADVAPI32.DLL", "SetSecurityDescriptorDacl"}, 
    {"ADVAPI32.DLL", "LsaSetInformationPolicy"}, 
    {"ADVAPI32.DLL", "LsaLookupNames2"}, 
    {"MSVCR120.DLL", "exit"}, 
    {"MSVCR120.DLL", "_snwscanf_l"}, 
    {"MSVCR120.DLL", "acosf"}, 
    {"USER32.DLL", "DdeNameService"}, 
    {"USER32.DLL", "GetSystemMetrics"}, 
    {"USER32.DLL", "GetMessageExtraInfo"}, 
    {"USER32.DLL", "RegisterWindowMessageW"}, 
    {"USER32.DLL", "RegisterWindowMessageA"}, 
    {"USER32.DLL", "SetRectEmpty"}, 
    {"USER32.DLL", "CopyImage"}, 
    {"USER32.DLL", "IsCharUpperA"}, 
    {"USER32.DLL", "PeekMessageA"}, 
    {"USER32.DLL", "DdeSetUserHandle"}, 
    {"USER32.DLL", "GetInputState"}, 
    {"USER32.DLL", "ord2544"}, 
    {"USER32.DLL", "SendNotifyMessageW"}, 
    {"USER32.DLL", "GetPointerType"}, 
    {"USER32.DLL", "RegisterSuspendResumeNotification"}, 
    {"USER32.DLL", "GetTitleBarInfo"}, 
    {"USER32.DLL", "DdePostAdvise"}, 
    {"USER32.DLL", "LoadIconW"}, 
    {"USER32.DLL", "DoSoundDisconnect"}, 
    {"USER32.DLL", "CloseWindowStation"}, 
    {"USER32.DLL", "CreateMenu"}, 
    {"USER32.DLL", "CloseClipboard"}, 
    {"USER32.DLL", "CreateDesktopA"}, 
    {"USER32.DLL", "CreateDesktopW"}, 
    {"USER32.DLL", "CopyRect"}, 
    {"USER32.DLL", "CreateDialogParamW"}, 
    {"USER32.DLL", "CreateDialogParamA"}, 
    {"USER32.DLL", "AnyPopup"}, 
    {"USER32.DLL", "DrawTextW"}, 
    {"USER32.DLL", "PostMessageA"}, 
    {"USER32.DLL", "PostMessageW"}, 
    {"USER32.DLL", "GetKeyboardState"}, 
    {"USER32.DLL", "GetWindowLongPtrA"}, 
    {"USER32.DLL", "GetWindowLongPtrW"}, 
    {"USER32.DLL", "ChangeWindowMessageFilterEx"}, 
    {"USER32.DLL", "GetUpdateRgn"}, 
    {"USER32.DLL", "GetDCEx"}, 
    {"USER32.DLL", "IntersectRect"}, 
    {"USER32.DLL", "SetClipboardData"}, 
    {"USER32.DLL", "IsCharAlphaNumericW"}, 
    {"USER32.DLL", "AdjustWindowRectEx"}, 
    {"USER32.DLL", "WINNLSEnableIME"}, 
    {"USER32.DLL", "CountClipboardFormats"}, 
    {"USER32.DLL", "GetKeyboardState"}, 
    {"USER32.DLL", "SetParent"}, 
    {"USER32.DLL", "IsZoomed"}, 
    {"USER32.DLL", "QueryDisplayConfig"}, 
    {"USER32.DLL", "GetPointerFrameInfoHistory"}, 
    {"USER32.DLL", "ToUnicode"}, 
    {"USER32.DLL", "TrackPopupMenuEx"}, 
    {"USER32.DLL", "TrackPopupMenu"}, 
    {"USER32.DLL", "RealGetWindowClassA"}, 
    {"USER32.DLL", "IsWindowUnicode"}, 
    {"USER32.DLL", "PaintMonitor"}, 
    {"USER32.DLL", "EnumDesktopWindows"}, 
    {"USER32.DLL", "GetKeyboardType"}, 
    {"USER32.DLL", "CopyImage"}, 
    {"USER32.DLL", "GetUpdateRect"}, 
    {"USER32.DLL", "CreateIconIndirect"}, 
    {"USER32.DLL", "BuildReasonArray"}, 
    {"USER32.DLL", "GetPointerFrameTouchInfoHistory"}, 
    {"USER32.DLL", "UnregisterClassA"}, 
    {"USER32.DLL", "ord2005"}, 
    {"USER32.DLL", "DefWindowProcA"}, 
    {"USER32.DLL", "DefWindowProcW"}, 
    {"USER32.DLL", "DispatchMessageW"}, 
    {"USER32.DLL", "DispatchMessageA"}, 
    {"USER32.DLL", "ord2547"}, 
    {"USER32.DLL", "ord2542"}, 
    {"USER32.DLL", "ord2541"}, 
    {"USER32.DLL", "ord2540"}, 
    {"USER32.DLL", "ord2549"}, 
    {"USER32.DLL", "ord2548"}, 
    {"USER32.DLL", "DdeCmpStringHandles"}, 
    {"USER32.DLL", "DestroyMenu"}, 
    {"USER32.DLL", "SubtractRect"}, 
    {"USER32.DLL", "CopyIcon"}, 
    {"USER32.DLL", "SetThreadDesktop"}, 
    {"USER32.DLL", "CharNextA"}, 
    {"USER32.DLL", "CharNextW"}, 
    {"USER32.DLL", "DrawFrameControl"}, 
    {"USER32.DLL", "EnumChildWindows"}, 
    {"USER32.DLL", "EnumDisplayMonitors"}, 
    {"USER32.DLL", "EnumClipboardFormats"}, 
    {"USER32.DLL", "IsChild"}, 
    {"USER32.DLL", "GetWindowPlacement"}, 
    {"USER32.DLL", "GhostWindowFromHungWindow"}, 
    {"USER32.DLL", "PostQuitMessage"}

};


#endif // COMMON_API_IMPORTS_HPP