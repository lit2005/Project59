#ifndef LAPTOP_H  
#define LAPTOP_H  

#include "CPU.h"  
#include "SSD.h"  
#include "Видеокарта.h"  
#include "RAM.h"  

class Laptop {
private:
    char* name;
    double price;
    char* color;
    CPU* cpu;
    SSD* ssd;
    Видеокарта* videoCard;
    RAM* ram;

    static int count; 

public:
    Laptop(const char* name, double price, const char* color,
        CPU* cpu, SSD* ssd, Видеокарта* videoCard, RAM* ram);
    Laptop(const Laptop& other);  
    ~Laptop();

    static int getCount() { return count; }
    const char* getName() const { return name; }
    double getPrice() const { return price; }
    const char* getColor() const { return color; }
};

#endif 