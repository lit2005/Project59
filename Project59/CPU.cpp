#include "CPU.h"  
#include <cstring>  

CPU::CPU(const char* brand, double speed)
    : speed(speed) {
    this->brand = new char[strlen(brand) + 1];
    strcpy(this->brand, brand);
}

CPU::CPU(const CPU& other)
    : speed(other.speed) {
    brand = new char[strlen(other.brand) + 1];
    strcpy(brand, other.brand);
}

CPU::~CPU() {
    delete[] brand;
}
