
#include "Base.h"
#include <iostream>

void identify(Base* p) {
    p->printType();
}

void identify(Base& p) {
    p.printType();
}
