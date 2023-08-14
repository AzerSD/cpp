
#include "ABC.h"
#include <cstdlib>

Base* generate() {
    int random = rand() % 3;
    switch (random) {
        case 0: return new A();
        case 1: return new B();
        case 2: return new C();
    }
    return NULL; // Shouldn't reach here, but to satisfy all return paths
}