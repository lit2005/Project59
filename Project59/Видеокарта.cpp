#include "����������.h"  
#include <cstring>  

����������::����������(const char* model, int memory)
    : memory(memory) {
    this->model = new char[strlen(model) + 1];
    strcpy(this->model, model);
}

����������::����������(const ����������& other)
    : memory(other.memory) {
    model = new char[strlen(other.model) + 1];
    strcpy(model, other.model);
}

����������::~����������() {
    delete[] model;
}
