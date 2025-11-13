project(Core)

add_library(Core
        headers/domain/model/Employee.h
        headers/domain/model/Address.h
        headers/domain/model/DGSAdminUser.h
        sources/domain/model/Address.cpp
        sources/domain/model/DGSAdminUser.cpp
        sources/domain/model/Employee.cpp
        headers/domain/model/Vaccine.h
        sources/domain/model/Vaccine.cpp
)