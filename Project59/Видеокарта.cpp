#include "Видеокарта.h"  
#include <cstring>  

Видеокарта::Видеокарта(const char* model, int memory)
    : memory(memory) {
    this->model = new char[strlen(model) + 1];
    strcpy(this->model, model);
}

Видеокарта::Видеокарта(const Видеокарта& other)
    : memory(other.memory) {
    model = new char[strlen(other.model) + 1];
    strcpy(model, other.model);
}

Видеокарта::~Видеокарта() {
    delete[] model;
}
