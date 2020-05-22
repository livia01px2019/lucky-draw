project(luckyDrawLib)

set(CMAKE_BUILD_TYPE "Debug")

add_library(LuckyDrawLib SHARED 
    luckydraw.cc
)

set_target_properties(LuckyDrawLib PROPERTIES PUBLIC_HEADER luckydraw.hh)

target_include_directories(LuckyDrawLib
    PRIVATE 
        .
    INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)
