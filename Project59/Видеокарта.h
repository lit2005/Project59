#ifndef ����������_H  
#define ����������_H  

class ���������� {
private:
    char* model;
    int memory; 

public:
    ����������(const char* model, int memory);
    ����������(const ����������& other);  
    ~����������();
    const char* getModel() const { return model; }
    int getMemory() const { return memory; }
};

#endif 