
#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6};
    std::vector<int> vec(arr1, arr1 + sizeof(arr1)/sizeof(arr1[0]));

    int arr2[] = {7, 8, 9, 10, 11};
    std::list<int> lst(arr2, arr2 + sizeof(arr2)/sizeof(arr2[0]));

    try {
        std::vector<int>::iterator it1 = easyfind(vec, 4);
        std::cout << "Found value " << *it1 << " in vector." << std::endl;

        std::list<int>::iterator it2 = easyfind(lst, 9);
        std::cout << "Found value " << *it2 << " in list." << std::endl;

        // This will throw an exception
        easyfind(vec, 10);
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
