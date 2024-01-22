!include "FileFunc.nsh"
!include "LogicLib.nsh"
!include "MUI2.nsh"

Unicode true

Name "Cocraike Launcher"
InstallDir "$LOCALAPPDATA\Programs\CocraikeLauncher"
InstallDirRegKey HKCU "Software\CocraikeLauncher" "InstallDir"
RequestExecutionLevel user
OutFile "../CocraikeLauncher-Setup.exe"

!define MUI_ICON "../program_info/cocraikelauncher.ico"

;--------------------------------

; Pages

!insertmacro MUI_PAGE_WELCOME
!define MUI_COMPONENTSPAGE_NODESC
!insertmacro MUI_PAGE_COMPONENTS
!insertmacro MUI_PAGE_DIRECTORY
!insertmacro MUI_PAGE_INSTFILES
!define MUI_FINISHPAGE_RUN "$InstDir\cocraikelauncher.exe"
!insertmacro MUI_PAGE_FINISH

!insertmacro MUI_UNPAGE_CONFIRM
!insertmacro MUI_UNPAGE_INSTFILES

;--------------------------------

; Languages

!insertmacro MUI_LANGUAGE "English"
!insertmacro MUI_LANGUAGE "French"
!insertmacro MUI_LANGUAGE "German"
!insertmacro MUI_LANGUAGE "Spanish"
!insertmacro MUI_LANGUAGE "SpanishInternational"
!insertmacro MUI_LANGUAGE "SimpChinese"
!insertmacro MUI_LANGUAGE "TradChinese"
!insertmacro MUI_LANGUAGE "Japanese"
!insertmacro MUI_LANGUAGE "Korean"
!insertmacro MUI_LANGUAGE "Italian"
!insertmacro MUI_LANGUAGE "Dutch"
!insertmacro MUI_LANGUAGE "Danish"
!insertmacro MUI_LANGUAGE "Swedish"
!insertmacro MUI_LANGUAGE "Norwegian"
!insertmacro MUI_LANGUAGE "NorwegianNynorsk"
!insertmacro MUI_LANGUAGE "Finnish"
!insertmacro MUI_LANGUAGE "Greek"
!insertmacro MUI_LANGUAGE "Russian"
!insertmacro MUI_LANGUAGE "Portuguese"
!insertmacro MUI_LANGUAGE "PortugueseBR"
!insertmacro MUI_LANGUAGE "Polish"
!insertmacro MUI_LANGUAGE "Ukrainian"
!insertmacro MUI_LANGUAGE "Czech"
!insertmacro MUI_LANGUAGE "Slovak"
!insertmacro MUI_LANGUAGE "Croatian"
!insertmacro MUI_LANGUAGE "Bulgarian"
!insertmacro MUI_LANGUAGE "Hungarian"
!insertmacro MUI_LANGUAGE "Thai"
!insertmacro MUI_LANGUAGE "Romanian"
!insertmacro MUI_LANGUAGE "Latvian"
!insertmacro MUI_LANGUAGE "Macedonian"
!insertmacro MUI_LANGUAGE "Estonian"
!insertmacro MUI_LANGUAGE "Turkish"
!insertmacro MUI_LANGUAGE "Lithuanian"
!insertmacro MUI_LANGUAGE "Slovenian"
!insertmacro MUI_LANGUAGE "Serbian"
!insertmacro MUI_LANGUAGE "SerbianLatin"
!insertmacro MUI_LANGUAGE "Arabic"
!insertmacro MUI_LANGUAGE "Farsi"
!insertmacro MUI_LANGUAGE "Hebrew"
!insertmacro MUI_LANGUAGE "Indonesian"
!insertmacro MUI_LANGUAGE "Mongolian"
!insertmacro MUI_LANGUAGE "Luxembourgish"
!insertmacro MUI_LANGUAGE "Albanian"
!insertmacro MUI_LANGUAGE "Breton"
!insertmacro MUI_LANGUAGE "Belarusian"
!insertmacro MUI_LANGUAGE "Icelandic"
!insertmacro MUI_LANGUAGE "Malay"
!insertmacro MUI_LANGUAGE "Bosnian"
!insertmacro MUI_LANGUAGE "Kurdish"
!insertmacro MUI_LANGUAGE "Irish"
!insertmacro MUI_LANGUAGE "Uzbek"
!insertmacro MUI_LANGUAGE "Galician"
!insertmacro MUI_LANGUAGE "Afrikaans"
!insertmacro MUI_LANGUAGE "Catalan"
!insertmacro MUI_LANGUAGE "Esperanto"
!insertmacro MUI_LANGUAGE "Asturian"
!insertmacro MUI_LANGUAGE "Basque"
!insertmacro MUI_LANGUAGE "Pashto"
!insertmacro MUI_LANGUAGE "ScotsGaelic"
!insertmacro MUI_LANGUAGE "Georgian"
!insertmacro MUI_LANGUAGE "Vietnamese"
!insertmacro MUI_LANGUAGE "Welsh"
!insertmacro MUI_LANGUAGE "Armenian"
!insertmacro MUI_LANGUAGE "Corsican"
!insertmacro MUI_LANGUAGE "Tatar"
!insertmacro MUI_LANGUAGE "Hindi"

;--------------------------------

; Version info
VIProductVersion "7.0.0.0"
VIFileVersion "7.0.0.0"
VIAddVersionKey /LANG=${LANG_ENGLISH} "ProductName" "Cocraike Launcher"
VIAddVersionKey /LANG=${LANG_ENGLISH} "FileDescription" "Cocraike Launcher Installer"
VIAddVersionKey /LANG=${LANG_ENGLISH} "LegalCopyright" "Cocraike Launcher Contributors\n© 2021-2022 PolyMC Contributors \n© 2012-2021 MultiMC Contributors"
VIAddVersionKey /LANG=${LANG_ENGLISH} "FileVersion" "7.0.0.0"
VIAddVersionKey /LANG=${LANG_ENGLISH} "ProductVersion" "7.0.0.0"


;--------------------------------
; Shell Associate Macros

!macro APP_SETUP_Def DESCRIPTION ICON APP_ID APP_NAME APP_EXE COMMANDTEXT COMMAND

  ; setup APP_ID
  WriteRegStr ShCtx "Software\Classes\${APP_ID}" "" `${DESCRIPTION}`
  WriteRegStr ShCtx "Software\Classes\${APP_ID}\DefaultIcon" "" `${ICON}`
  ; default open verb
  WriteRegStr ShCtx "Software\Classes\${APP_ID}\shell" "" "open"                  
  WriteRegStr ShCtx "Software\Classes\${APP_ID}\shell\open" "" `${COMMANDTEXT}`
  WriteRegStr ShCtx "Software\Classes\${APP_ID}\shell\open\command" "" `${COMMAND}`

  WriteRegStr ShCtx "Software\Classes\Applications\${APP_EXE}\shell\open\command" "" `${COMMAND}`
  WriteRegStr ShCtx "Software\Classes\Applications\${APP_EXE}" "FriendlyAppName" `${APP_NAME}` ; [Optional]

!macroend

!macro APP_SETUP DESCRIPTION ICON APP_ID APP_NAME APP_EXE COMMANDTEXT COMMAND

  !insertmacro APP_SETUP_Def `${DESCRIPTION}` `${ICON}` `${APP_ID}` `${APP_NAME}` `${APP_EXE}` `${COMMANDTEXT}` `${COMMAND}`

!macroend

!macro APP_SETUP_DEFAULT DESCRIPTION ICON APP_ID APP_NAME APP_EXE COMMANDTEXT COMMAND

  !insertmacro APP_SETUP_Def `${DESCRIPTION}` `${ICON}` `${APP_ID}` `${APP_NAME}` `${APP_EXE}` `${COMMANDTEXT}` `${COMMAND}`

  # Register "Default Programs" 
  WriteRegStr ShCtx "Software\Classes\Applications\${APP_EXE}\Capabilities" "ApplicationDescription" `${DESCRIPTION}`
  WriteRegStr ShCtx "Software\RegisteredApplications" `${APP_NAME}` "Software\Classes\Applications\${APP_EXE}\Capabilities"

!macroend

!macro APP_ASSOCIATE_Def EXT APP_ID APP_EXE OVERWIRTE
  ; Backup the previously associated file class
  ${If} ${OVERWIRTE} == true
  ReadRegStr $R0 ShCtx "Software\Classes\${EXT}" ""
  WriteRegStr ShCtx "Software\Classes\${EXT}" "${APP_ID}_backup" "$R0"
  WriteRegStr ShCtx "Software\Classes\${EXT}" "" "${APP_ID}"
  ${EndIf}

  WriteRegNone ShCtx "Software\Classes\${EXT}\OpenWithList" "${APP_EXE}" ; Win2000+
  WriteRegNone ShCtx "Software\Classes\${EXT}\OpenWithProgids" "${APP_ID}" ; WinXP+

!macroend

!macro APP_ASSOCIATE EXT APP_ID APP_EXE OVERWIRTE

  !insertmacro APP_ASSOCIATE_Def `${EXT}` `${APP_ID}` `${APP_EXE}` `${OVERWIRTE}`

!macroend

!macro APP_ASSOCIATE_DEFAULT EXT APP_ID APP_EXE OVERWIRTE

  !insertmacro APP_ASSOCIATE_Def `${EXT}` `${APP_ID}` `${APP_EXE}` `${OVERWIRTE}`

  # Register "Default Programs"
  WriteRegStr ShCtx "Software\Classes\Applications\${APP_EXE}\Capabilities\FileAssociations" "${EXT}" "${APP_ID}"

!macroend

!macro APP_UNASSOCIATE EXT APP_ID

  # Unregister file type
  ClearErrors
  ; restore backup
  ReadRegStr $R1 ShCtx "Software\Classes\${EXT}" ""
  ${If} $R1 == "${APP_ID}"
    ReadRegStr $R0 ShCtx "Software\Classes\${EXT}" `${APP_ID}_backup`
    WriteRegStr ShCtx "Software\Classes\${EXT}" "" "$R0"
  ${Else}
    ReadRegStr $R0 ShCtx "Software\Classes\${EXT}" ""
  ${EndIf}

  DeleteRegKey /IfEmpty ShCtx "Software\Classes\${APP_ID}"
  ${IfNot} ${Errors}
  ${AndIf} $R0 == "${APP_ID}"
    DeleteRegValue ShCtx "Software\Classes\${EXT}" ""
    DeleteRegKey /IfEmpty ShCtx "Software\Classes\${EXT}"
  ${EndIf}

  DeleteRegValue ShCtx "Software\Classes\${EXT}\OpenWithList" "${APP_EXE}"
  DeleteRegKey /IfEmpty ShCtx "Software\Classes\${EXT}\OpenWithList"
  DeleteRegValue ShCtx "Software\Classes\${EXT}\OpenWithProgids" "${APP_ID}"
  DeleteRegKey /IfEmpty ShCtx "Software\Classes\${EXT}\OpenWithProgids"
  DeleteRegKey /IfEmpty  ShCtx "Software\Classes\${EXT}"

  # Attempt to clean up junk left behind by the Windows shell
  DeleteRegValue HKCU "Software\Microsoft\Windows\CurrentVersion\ApplicationAssociationToasts" "${APP_ID}_${EXT}"
  DeleteRegValue HKCU "Software\Microsoft\Windows\CurrentVersion\ApplicationAssociationToasts" "Applications\${APP_EXE}_${EXT}"
  DeleteRegValue HKCU "Software\Microsoft\Windows\CurrentVersion\Explorer\FileExts\${EXT}\OpenWithProgids" "${APP_ID}"
  DeleteRegKey /IfEmpty HKCU "Software\Microsoft\Windows\CurrentVersion\Explorer\FileExts\${EXT}\OpenWithProgids"
  DeleteRegKey /IfEmpty HKCU "Software\Microsoft\Windows\CurrentVersion\Explorer\FileExts\${EXT}\OpenWithList"
  DeleteRegKey /IfEmpty HKCU "Software\Microsoft\Windows\CurrentVersion\Explorer\FileExts\${EXT}"

!macroend

!macro APP_TEARDOWN_Def APP_ID APP_NAME APP_EXE

  # Unregister file type
  ClearErrors
  DeleteRegKey /IfEmpty ShCtx "Software\Classes\${APP_ID}\shell"
  ${IfNot} ${Errors}
    DeleteRegKey ShCtx "Software\Classes\${APP_ID}\DefaultIcon"
  ${EndIf}
  
  # Unregister "Open With"
  DeleteRegKey ShCtx "Software\Classes\Applications\${APP_EXE}"

  DeleteRegKey ShCtx `Software\Classes\${APP_ID}`
  DeleteRegKey ShCtx "Software\Classes\Applications\${APP_EXE}"

  # Attempt to clean up junk left behind by the Windows shell
  DeleteRegValue HKCU "Software\Microsoft\Windows\CurrentVersion\Search\JumplistData" "$INSTDIR\${APP_EXE}"
  DeleteRegValue HKCU "Software\Classes\Local Settings\Software\Microsoft\Windows\Shell\MuiCache" "$INSTDIR\${APP_EXE}.FriendlyAppName"
  DeleteRegValue HKCU "Software\Classes\Local Settings\Software\Microsoft\Windows\Shell\MuiCache" "$INSTDIR\${APP_EXE}.ApplicationCompany"
  DeleteRegValue HKCU "Software\Microsoft\Windows\ShellNoRoam\MUICache" "$INSTDIR\${APP_EXE}" ; WinXP
  DeleteRegValue HKCU "Software\Microsoft\Windows NT\CurrentVersion\AppCompatFlags\Compatibility Assistant\Store" "$INSTDIR\${APP_EXE}"

!macroend

!macro APP_TEARDOWN APP_ID APP_NAME APP_EXE

  !insertmacro APP_TEARDOWN_Def `${APP_ID}` `${APP_NAME}` `${APP_EXE}`

!macroend

!macro APP_TEARDOWN_DEFAULT APP_ID APP_NAME APP_EXE

  !insertmacro APP_TEARDOWN_Def `${APP_ID}` `${APP_NAME}` `${APP_EXE}`
  
  # Unregister "Default Programs"
  DeleteRegValue ShCtx "Software\RegisteredApplications" `${APP_NAME}`
  DeleteRegKey ShCtx "Software\Classes\Applications\${APP_EXE}\Capabilities"
  DeleteRegKey /IfEmpty ShCtx "Software\Classes\Applications\${APP_EXE}"

!macroend

; !defines for use with SHChangeNotify
!ifdef SHCNE_ASSOCCHANGED
!undef SHCNE_ASSOCCHANGED
!endif
!define SHCNE_ASSOCCHANGED 0x08000000
!ifdef SHCNF_FLUSH
!undef SHCNF_FLUSH
!endif
!define SHCNF_FLUSH        0x1000


# ensure this is called at the end of any section that changes shell keys
!macro NotifyShell_AssocChanged
; Using the system.dll plugin to call the SHChangeNotify Win32 API function so we
; can update the shell.
  System::Call "shell32::SHChangeNotify(i,i,i,i) (${SHCNE_ASSOCCHANGED}, ${SHCNF_FLUSH}, 0, 0)"
!macroend


;--------------------------------

; The stuff to install
Section "Cocraike Launcher"

  SectionIn RO

  nsExec::Exec /TIMEOUT=2000 'TaskKill /IM cocraikelauncher.exe /F'

  SetOutPath $INSTDIR

  File "cocraikelauncher.exe"
  File "qt.conf"
  File *.dll
  File /r "iconengines"
  File /r "imageformats"
  File /r "jars"
  File /r "platforms"
  File /r "styles"
  File /nonfatal /r "tls"

  ; Write the installation path into the registry
  WriteRegStr HKCU Software\CocraikeLauncher "InstallDir" "$INSTDIR"

  ; Write the uninstall keys for Windows
  ${GetParameters} $R0
  ${GetOptions} $R0 "/NoUninstaller" $R1
  ${If} ${Errors}
    !define UNINST_KEY "Software\Microsoft\Windows\CurrentVersion\Uninstall\CocraikeLauncher"
    WriteRegStr HKCU "${UNINST_KEY}" "DisplayName" "Cocraike Launcher"
    WriteRegStr HKCU "${UNINST_KEY}" "DisplayIcon" "$INSTDIR\cocraikelauncher.exe"
    WriteRegStr HKCU "${UNINST_KEY}" "UninstallString" '"$INSTDIR\uninstall.exe"'
    WriteRegStr HKCU "${UNINST_KEY}" "QuietUninstallString" '"$INSTDIR\uninstall.exe" /S'
    WriteRegStr HKCU "${UNINST_KEY}" "InstallLocation" "$INSTDIR"
    WriteRegStr HKCU "${UNINST_KEY}" "Publisher" "Cocraike Launcher Contributors"
    WriteRegStr HKCU "${UNINST_KEY}" "Version" "7.0.0.0"
    WriteRegStr HKCU "${UNINST_KEY}" "DisplayVersion" "7.0"
    WriteRegStr HKCU "${UNINST_KEY}" "VersionMajor" "7"
    WriteRegStr HKCU "${UNINST_KEY}" "VersionMinor" "0"
    ${GetSize} "$INSTDIR" "/S=0K" $0 $1 $2
    IntFmt $0 "0x%08X" $0
    WriteRegDWORD HKCU "${UNINST_KEY}" "EstimatedSize" "$0"
    WriteRegDWORD HKCU "${UNINST_KEY}" "NoModify" 1
    WriteRegDWORD HKCU "${UNINST_KEY}" "NoRepair" 1
    WriteUninstaller "$INSTDIR\uninstall.exe"
  ${EndIf}

SectionEnd

Section "Start Menu Shortcut" SM_SHORTCUTS

  CreateShortcut "$SMPROGRAMS\Cocraike Launcher.lnk" "$INSTDIR\cocraikelauncher.exe" "" "$INSTDIR\cocraikelauncher.exe" 0

SectionEnd

Section /o "Desktop Shortcut" DESKTOP_SHORTCUTS

  CreateShortcut "$DESKTOP\Cocraike Launcher.lnk" "$INSTDIR\cocraikelauncher.exe" "" "$INSTDIR\cocraikelauncher.exe" 0

SectionEnd


!define APPID "CocraikeLauncher.App"
!define APPEXE "cocraikelauncher.exe"
!define APPICON "$INSTDIR\${APPEXE},0"
!define APPDESCRIPTION "Cocraike Launcher"
!define APPNAME "Cocraike Launcher"
!define APPCMDTEXT "Cocraike Launcher"

Section /o "Shell Association (Open-With dialog)" SHELL_ASSOC

  !insertmacro APP_SETUP `${APPDESCRIPTION}` `${APPICON}` `${APPID}` `${APPCMDTEXT}` `${APPEXE}` `${APPCMDTEXT}` '$INSTDIR\${APPEXE} -I "%1"'
  
  !insertmacro APP_ASSOCIATE_DEFAULT ".mrpack" `${APPID}` `${APPEXE}` true
  !insertmacro APP_ASSOCIATE ".zip" `${APPID}` `${APPEXE}` false

  !insertmacro NotifyShell_AssocChanged
SectionEnd


;--------------------------------

; Uninstaller

Section "Uninstall"

  nsExec::Exec /TIMEOUT=2000 'TaskKill /IM cocraikelauncher.exe /F'

  DeleteRegKey HKCU "Software\Microsoft\Windows\CurrentVersion\Uninstall\CocraikeLauncher"
  DeleteRegKey HKCU SOFTWARE\CocraikeLauncher

  Delete $INSTDIR\cocraikelauncher.exe
  Delete $INSTDIR\qt.conf
  Delete $INSTDIR\*.dll

  Delete $INSTDIR\uninstall.exe

  RMDir /r $INSTDIR\iconengines
  RMDir /r $INSTDIR\imageformats
  RMDir /r $INSTDIR\jars
  RMDir /r $INSTDIR\platforms
  RMDir /r $INSTDIR\styles
  RMDir /r $INSTDIR\tls

  Delete "$SMPROGRAMS\Cocraike Launcher.lnk"
  Delete "$DESKTOP\Cocraike Launcher.lnk"

  RMDir "$INSTDIR"

SectionEnd

Section -un.ShellAssoc
  
  !insertmacro APP_TEARDOWN_DEFAULT `${APPID}` `${APPNAME}` `${APPEXE}`

  !insertmacro APP_UNASSOCIATE ".zip" `${APPID}`
  !insertmacro APP_UNASSOCIATE ".mrpack" `${APPID}`

  !insertmacro NotifyShell_AssocChanged
SectionEnd

;--------------------------------

; Extra command line parameters

Function .onInit
${GetParameters} $R0
${GetOptions} $R0 "/NoShortcuts" $R1
${IfNot} ${Errors}
${OrIf} ${FileExists} "$InstDir\cocraikelauncher.exe"
  !insertmacro UnselectSection ${SM_SHORTCUTS}
  !insertmacro UnselectSection ${DESKTOP_SHORTCUTS}
${EndIf}
FunctionEnd
