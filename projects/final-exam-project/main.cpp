#include <iostream>
#include <string>
#include <vector>
#include "mountain.h"

int minElevation(std::vector<Mountain> mountains) {
    int minIndex = 0;

    for(unsigned int i=0; i < mountains.size(); i++) {
        if(mountains[i].GetElevation() < mountains[minIndex].GetElevation()) {
            minIndex = i;
        }
    }

    return minIndex;
}


int main() {

    std::vector<Mountain> mountains;

    Mountain mountain1;
    mountain1.SetName("Chimborozo");
    mountain1.SetCountry("Ecuador");
    mountain1.SetElevation(20549);
    mountains.push_back(mountain1);

    Mountain mountain2;
    mountain2.SetName("Matterhorn");
    mountain2.SetCountry("Switzerland");
    mountain2.SetElevation(14692);
    mountains.push_back(mountain2);

    Mountain mountain3;
    mountain3.SetName("Olympus");
    mountain3.SetCountry("Greece (Macedonia)");
    mountain3.SetElevation(9573);
    mountains.push_back(mountain3);

    Mountain mountain4;
    mountain4.SetName("Everest");
    mountain4.SetCountry("Nepal");
    mountain4.SetElevation(29029);
    mountains.push_back(mountain4);

    Mountain mountain5;
    mountain5.SetName("Mount Marcy - Adirondacks");
    mountain5.SetCountry("United States");
    mountain5.SetElevation(5344);
    mountains.push_back(mountain5);

    Mountain mountain6;
    mountain6.SetName("Mount Mitchell - Blue Ridge");
    mountain6.SetCountry("United States");
    mountain6.SetElevation(6684);
    mountains.push_back(mountain6);

    Mountain mountain7;
    mountain7.SetName("Zugspitze");
    mountain7.SetCountry("Switzerland");
    mountain7.SetElevation(9719);
    mountains.push_back(mountain7);

    
    for(unsigned int i=0; i < mountains.size(); i++) {
        std::cout 
        << mountains[i].GetName() << ", " 
        << mountains[i].GetCountry() << " " 
        << mountains[i].GetElevation() << "ft " 
        << mountains[i].toMeters(mountains[i].GetElevation()) << "m " 
        << std::endl;
    }
    
    std::cout 
    << "Lowest Elevation: " 
    << mountains[minElevation(mountains)].GetName() << ", " 
    << mountains[minElevation(mountains)].GetCountry() << " " 
    << mountains[minElevation(mountains)].GetElevation() << "ft " 
    << mountains[minElevation(mountains)].toMeters(mountains[minElevation(mountains)].GetElevation()) << "m" 
    << std::endl;



    return 0;
}