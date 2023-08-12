// main.cpp

#include <iostream>
#include "Data.h"
#include "Serializer.h"

int main() {
    Data myData = {10, 20.5, 'A'};

    uintptr_t raw = Serializer::serialize(&myData);
    std::cout << "Original Address of myData: " << &myData << std::endl;
    std::cout << "Serialized uintptr_t value: " << raw << std::endl;

    Data* returnedDataPtr = Serializer::deserialize(raw);
    std::cout << "Deserialized Address: " << returnedDataPtr << std::endl;

    if (returnedDataPtr == &myData) {
        std::cout << "Serialization and Deserialization successful!" << std::endl;
    } else {
        std::cout << "Something went wrong!" << std::endl;
    }

    return 0;
}
