
if(UNIX)
    find_package(PkgConfig)
    if(PkgConfig_FOUND)
        pkg_search_module(SCDOC scdoc)
        if(SCDOC_FOUND)
            pkg_get_variable(SCDOC_SCDOC scdoc scdoc)
        endif()
    endif()
endif()

set(Launcher_CommonName "CocraikeLauncher")
set(Launcher_DisplayName "Cocraike Launcher")

set(Launcher_Name "${Launcher_CommonName}" PARENT_SCOPE)
set(Launcher_DisplayName "${Launcher_DisplayName}" PARENT_SCOPE)

set(Launcher_Copyright "Cocraike Launcher Contributors\\n© 2021-2022 PolyMC Contributors \\n© 2012-2021 MultiMC Contributors")
set(Launcher_Copyright_Mac "Cocraike Launcher Contributors, © 2021-2022 PolyMC Contributors and © 2012-2021 MultiMC
Contributors" PARENT_SCOPE)
set(Launcher_Copyright "${Launcher_Copyright}" PARENT_SCOPE)
set(Launcher_Domain "cocraikelauncher.org" PARENT_SCOPE)
set(Launcher_UserAgent "${Launcher_CommonName}/${Launcher_VERSION_NAME}" PARENT_SCOPE)
set(Launcher_ConfigFile "cocraikelauncher.cfg" PARENT_SCOPE)
set(Launcher_Git "https://github.com/3NWT/CocraikeLauncher" PARENT_SCOPE)
set(Launcher_DesktopFileName "org.cocraikelauncher.CocraikeLauncher.desktop" PARENT_SCOPE)
set(Launcher_SVGFileName "org.cocraikelauncher.CocraikeLauncher.svg" PARENT_SCOPE)

set(Launcher_Desktop "program_info/org.cocraikelauncher.CocraikeLauncher.desktop" PARENT_SCOPE)
set(Launcher_mrpack_MIMEInfo "program_info/modrinth-mrpack-mime.xml" PARENT_SCOPE)
set(Launcher_MetaInfo "program_info/org.cocraikelauncher.CocraikeLauncher.metainfo.xml" PARENT_SCOPE)
set(Launcher_SVG "program_info/org.cocraikelauncher.CocraikeLauncher.svg" PARENT_SCOPE)
set(Launcher_Branding_ICNS "program_info/cocraikelauncher.icns" PARENT_SCOPE)
set(Launcher_Branding_ICO "program_info/cocraikelauncher.ico")
set(Launcher_Branding_ICO "${Launcher_Branding_ICO}" PARENT_SCOPE)
set(Launcher_Branding_WindowsRC "program_info/cocraikelauncher.rc" PARENT_SCOPE)
set(Launcher_Branding_LogoQRC "program_info/cocraikelauncher.qrc" PARENT_SCOPE)

set(Launcher_Portable_File "program_info/portable.txt" PARENT_SCOPE)

configure_file(org.cocraikelauncher.CocraikeLauncher.desktop.in org.cocraikelauncher.CocraikeLauncher.desktop)
configure_file(org.cocraikelauncher.CocraikeLauncher.metainfo.xml.in org.cocraikelauncher.CocraikeLauncher.metainfo.xml)
configure_file(cocraikelauncher.rc.in cocraikelauncher.rc @ONLY)
configure_file(cocraikelauncher.manifest.in cocraikelauncher.manifest @ONLY)
configure_file(cocraikelauncher.ico cocraikelauncher.ico COPYONLY)
configure_file(win_install.nsi.in win_install.nsi @ONLY)

if(SCDOC_FOUND)
    set(in_scd "${CMAKE_CURRENT_SOURCE_DIR}/cocraikelauncher.6.scd")
    set(out_man "${CMAKE_CURRENT_BINARY_DIR}/cocraikelauncher.6")
    add_custom_command(
        DEPENDS "${in_scd}"
        OUTPUT "${out_man}"
        COMMAND ${SCDOC_SCDOC} < "${in_scd}" > "${out_man}"
    )
    add_custom_target(man ALL DEPENDS ${out_man})
    set(Launcher_ManPage "program_info/cocraikelauncher.6" PARENT_SCOPE)
endif()
