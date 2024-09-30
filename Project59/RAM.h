#ifndef RAM_H  
#define RAM_H  

class RAM {
private:
    int size; 

public:
    RAM(int size);
    RAM(const RAM& other); 
    int getSize() const { return size; }
};

#endif 
