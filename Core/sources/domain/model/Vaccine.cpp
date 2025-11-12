//
// Created by Utilizador on 12/11/2025.
//
#include "headers/domain/model/Vaccine.h"

Vaccine::Vaccine(const std::string& name, const std::string& brand, const std::string& tech,
                const std::string& lot, const std::string& disease)
{
    this->name = name;
    this->brand = brand;
    this->tech_used = tech;
    this->lot = lot;
    this->disease = disease;
}

void Vaccine::setName(const std::string& name) {
    this->name = name;
}

void Vaccine::setBrand(const std::string& brand) {
    this->brand = brand;
}

void Vaccine::setTechUsed(const std::string& tech) {
    this->tech_used = tech;
}

void Vaccine::setLot(const std::string& lot) {
    this->lot = lot;
}

void Vaccine::setDisease(const std::string& disease){
    this->disease = disease;
}

std::string Vaccine::getName() const {
    return name;
}

std::string Vaccine::getBrand() const {
    return brand;
}

std::string Vaccine::getTechUsed() const {
    return tech_used;
}

std::string Vaccine::getLot() const {
    return lot;
}

std::string Vaccine::getDisease() const {
    return disease;
}