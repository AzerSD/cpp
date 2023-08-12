#ifndef SERIALIZER_H
# define SERIALIZER_H

#include "Data.h"
#include <cstdint>

class Serializer {
public:
    Serializer();
    ~Serializer();
    Serializer(Serializer const& rhs);
    Serializer& operator=(Serializer const& rhs);

    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};


#endif