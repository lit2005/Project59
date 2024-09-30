#include "Laptop.h"  
#include <cstring>  

int Laptop::count = 0;

Laptop::Laptop(const char* name, double price, const char* color,
    CPU* cpu, SSD* ssd, Видеокарта* videoCard, RAM* ram)
    : price(price), cpu(cpu), ssd(ssd), videoCard(videoCard), ram(ram) {
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
    this->color = new char[strlen(color) + 1];
    strcpy(this->color, color);
    count++;
}

Laptop::Laptop(const Laptop& other)
    : price(other.price), cpu(new CPU(*other.cpu)),
    ssd(new SSD(*other.ssd)), videoCard(new Видеокарта(*other.videoCard)),
    ram(new RAM(*other.ram)) {
    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);
    color = new char[strlen(other.color) + 1];
    strcpy(color, other.color);
    count++;
}

Laptop::~Laptop() {
    delete[] name;
    delete[] color;
    delete cpu;
    delete ssd;
    delete videoCard;
    delete ram;
    count--;
}
