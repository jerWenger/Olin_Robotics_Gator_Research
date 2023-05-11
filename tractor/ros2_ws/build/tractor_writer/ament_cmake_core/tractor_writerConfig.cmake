# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_tractor_writer_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED tractor_writer_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(tractor_writer_FOUND FALSE)
  elseif(NOT tractor_writer_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(tractor_writer_FOUND FALSE)
  endif()
  return()
endif()
set(_tractor_writer_CONFIG_INCLUDED TRUE)

# output package information
if(NOT tractor_writer_FIND_QUIETLY)
  message(STATUS "Found tractor_writer: 0.0.0 (${tractor_writer_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'tractor_writer' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${tractor_writer_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(tractor_writer_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${tractor_writer_DIR}/${_extra}")
endforeach()
