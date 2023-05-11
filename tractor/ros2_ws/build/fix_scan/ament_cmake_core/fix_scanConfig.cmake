# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_fix_scan_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED fix_scan_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(fix_scan_FOUND FALSE)
  elseif(NOT fix_scan_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(fix_scan_FOUND FALSE)
  endif()
  return()
endif()
set(_fix_scan_CONFIG_INCLUDED TRUE)

# output package information
if(NOT fix_scan_FIND_QUIETLY)
  message(STATUS "Found fix_scan: 0.0.0 (${fix_scan_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'fix_scan' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${fix_scan_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(fix_scan_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${fix_scan_DIR}/${_extra}")
endforeach()
