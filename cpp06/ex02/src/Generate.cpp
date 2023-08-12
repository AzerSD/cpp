
#include "A.h"
#include "B.h"
#include "C.h"
#include <cstdlib>

Base* generate() {
    switch (rand() % 3) {
        case 0: return new A();
        case 1: return new B();
        case 2: return new C();
    }
    return 0;
}
