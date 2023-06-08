#include "mountain.h"
#include <iostream>

//setters
void Mountain::SetName(std::string mtName) {
    name = mtName;
}

void Mountain::SetCountry(std::string mtCountry) {
    country = mtCountry;
}

void Mountain::SetElevation(int mtElevation) {
    elevation = mtElevation;
}

//getters
std::string Mountain::GetName() const {
    return name;
}

std::string Mountain::GetCountry() const {
    return country;
}

int Mountain::GetElevation() const {
    return elevation;
}

//convert to meters
double Mountain::toMeters(int mtElevation) {
    return (mtElevation / 3.2808);
}