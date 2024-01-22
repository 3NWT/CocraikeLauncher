#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "cmark::cmark_exe" for configuration "Release"
set_property(TARGET cmark::cmark_exe APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(cmark::cmark_exe PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/cmark"
  )

list(APPEND _cmake_import_check_targets cmark::cmark_exe )
list(APPEND _cmake_import_check_files_for_cmark::cmark_exe "${_IMPORT_PREFIX}/bin/cmark" )

# Import target "cmark::cmark_static" for configuration "Release"
set_property(TARGET cmark::cmark_static APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(cmark::cmark_static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C;CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib64/libcmark.a"
  )

list(APPEND _cmake_import_check_targets cmark::cmark_static )
list(APPEND _cmake_import_check_files_for_cmark::cmark_static "${_IMPORT_PREFIX}/lib64/libcmark.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
