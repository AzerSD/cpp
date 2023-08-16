#include <iostream>
#include "Array.hpp"

int main() {
    try {
        // Test constructors
        Array<int> arr1;
        Array<int> arr2(5);

        std::cout << "Size of arr1: " << arr1.size() << std::endl;
        std::cout << "Size of arr2: " << arr2.size() << std::endl;

        // Test assignment and copy constructors
        Array<int> arr3 = arr2;
        Array<int> arr4(arr2);

        arr2[0] = 10;
        arr3[1] = 20;
        arr4[2] = 30;

        std::cout << "arr2[0]: " << arr2[0] << std::endl;
        std::cout << "arr3[1]: " << arr3[1] << std::endl;
        std::cout << "arr4[2]: " << arr4[2] << std::endl;


        std::cout << "arr2[10]: " << arr2[10] << std::endl;

    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
