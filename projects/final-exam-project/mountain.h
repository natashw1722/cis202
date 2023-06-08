#ifndef MOUNTAIN_H

#include <iostream>
#include <string>

class Mountain
{
private:

    std::string name;
    std::string country;
    int elevation;

public:

    //Getters
    std::string GetName() const;
    std::string GetCountry() const;
    int GetElevation() const;

    //Setters
    void SetName(std::string mtName);
    void SetCountry(std::string mtCountry);
    void SetElevation(int mtElevation);

    //conversion
    double toMeters(int mtElevation);

};

#endif