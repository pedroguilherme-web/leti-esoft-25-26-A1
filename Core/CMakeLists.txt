project(Core)

add_library(Core headers/domain/shared/Result.h headers/domain/shared/StringUtils.h sources/domain/shared/Result.cpp sources/domain/shared/StringUtils.cpp
        headers/domain/shared/NurseUser.h
        headers/domain/shared/Person.h
        headers/domain/shared/Address.h
        headers/domain/shared/ReceptionistUser.h
        headers/domain/shared/DGSAdminUser.h
        headers/domain/shared/NurseContainer.h
        headers/domain/shared/ReceptionistContainer.h)