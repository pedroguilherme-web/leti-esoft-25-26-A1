//
// Created by Utilizador on 12/11/2025.
//

#ifndef VACCINE_H
#define VACCINE_H
#include <string>

class Vaccine {
private:
    std::string name;
    std::string brand;
    std::string tech_used;
    std::string lot;
    std::string disease;

public:
    Vaccine();
    Vaccine(const std::string& name, const std::string& brand, const std::string& tech,
            const std::string& lot, const std::string& disease);

    std::string getName() const;
    std::string getBrand() const;
    std::string getTechUsed() const;
    std::string getLot() const;
    std::string getDisease() const;

    void setName(const std::string& name);
    void setBrand(const std::string& brand);
    void setTechUsed(const std::string& tech);
    void setLot(const std::string& lot);
    void setDisease(const std::string& disease);
};

#endif // VACCINE_H