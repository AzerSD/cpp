#include <iostream>
#include <ctime>
#include "Base.h"
#include "main.h"
#include "A.h"
#include "B.h"
#include "C.h"

int main() {
    std::srand(static_cast<unsigned int>(std::time(0)));
    
    Base* object1 = generate();
    identify(object1);
    
    Base* object2 = generate();
    identify(*object2);
    
    delete object1;
    delete object2;

    return 0;
}