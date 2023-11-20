#include "animal.h"
#include <iostream>


void fillAnimalData(Animal& animal) {
    std::cout << "Enter animal name: ";
    std::getline(std::cin, animal.name);

    std::cout << "Enter animal class: ";
    std::getline(std::cin, animal.className);

    std::cout << "Enter animal nickname: ";
    std::getline(std::cin, animal.nickname);
}


void displayAnimalData(const Animal& animal) {
    std::cout << "Animal Data:\n";
    std::cout << "Name: " << animal.name << "\n";
    std::cout << "Class: " << animal.className << "\n";
    std::cout << "Nickname: " << animal.nickname << "\n";
}

void makeSound(const Animal& animal) {
    std::cout << animal.name << " says: ";
    
    std::cout << "No sound defined for this animal.\n";
}
