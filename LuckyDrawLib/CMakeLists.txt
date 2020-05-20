project(luckyDrawLib)

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

include(GNUInstallDirs)

install(TARGETS LuckyDrawLib
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

configure_file(LuckyDrawLib.pc.in LuckyDrawLib.pc @ONLY)

install(FILES ${CMAKE_BINARY_DIR}/LuckyDrawLib/LuckyDrawLib.pc 
    DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/pkgconfig)