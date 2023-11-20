
#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

struct Animal {
    std::string name;
    std::string className;
    std::string nickname;
};


void fillAnimalData(Animal& animal);
void displayAnimalData(const Animal& animal);
void makeSound(const Animal& animal);

#endif 
