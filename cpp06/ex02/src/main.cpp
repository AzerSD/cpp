#include <iostream>
#include <ctime>
#include "Base.h"
#include "main.h"

int main() {
    srand(static_cast<unsigned int>(time(NULL)));

    Base* obj = generate();
    identify(obj);
    identify(*obj);
    delete obj;

    return 0;
}
