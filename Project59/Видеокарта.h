#ifndef ВИДЕОКАРТА_H  
#define ВИДЕОКАРТА_H  

class Видеокарта {
private:
    char* model;
    int memory; 

public:
    Видеокарта(const char* model, int memory);
    Видеокарта(const Видеокарта& other);  
    ~Видеокарта();
    const char* getModel() const { return model; }
    int getMemory() const { return memory; }
};

#endif 