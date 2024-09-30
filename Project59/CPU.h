#ifndef CPU_H  
#define CPU_H  

class CPU {
private:
    char* brand;
    double speed;  

public:
    CPU(const char* brand, double speed);
    CPU(const CPU& other);  
    ~CPU();
    double getSpeed() const { return speed; }
    const char* getBrand() const { return brand; }
};

#endif 