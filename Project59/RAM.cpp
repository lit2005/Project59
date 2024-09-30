#include "RAM.h"  

RAM::RAM(int size)
	: size(size) {}

RAM::RAM(const RAM& other)
	: size(other.size) {}
