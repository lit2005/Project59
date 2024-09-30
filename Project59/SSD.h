#ifndef SSD_H  
#define SSD_H  

class SSD {
private:
    int size;  

public:
    SSD(int size);
    SSD(const SSD& other);   
    int getSize() const { return size; }
};

#endif 
