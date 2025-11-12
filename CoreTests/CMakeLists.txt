project(CoreTests)
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(CoreTests
        domain/model/PersonTests.cpp
        domain/model/DGSAdminUserTests.cpp
        domain/model/NurseUserTests.cpp
        domain/model/ReceptionistUserTests.cpp
        domain/model/NurseContainerTests.cpp
        domain/model/ReceptionistContainerTests.cpp)

target_link_libraries(CoreTests Core)
target_link_libraries(CoreTests gtest gtest_main)