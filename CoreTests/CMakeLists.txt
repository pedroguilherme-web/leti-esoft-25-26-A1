project(CoreTests)
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(CoreTests domain/shared/StringUtilsTests.cpp
        domain/shared/PersonTests.cpp
        domain/shared/DGSAdminUserTests.cpp
        domain/shared/NurseUserTests.cpp
        domain/shared/ReceptionistUserTests.cpp)

target_link_libraries(CoreTests Core)
target_link_libraries(CoreTests gtest gtest_main)