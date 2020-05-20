cmake_minimum_required(VERSION 3.5)

project(LuckyDraw LANGUAGES CXX)

add_executable(LuckyDraw execute.cc)

add_subdirectory(LuckyDrawLib)

target_link_libraries(LuckyDraw PUBLIC LuckyDrawLib)