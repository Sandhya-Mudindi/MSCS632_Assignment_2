#include <iostream>

void printData(int* data, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << data[i] << std::endl;
    }
}

int main() {
    int* data = new int[5]{1, 2, 3, 4, 5}; // manual heap allocation
    printData(data, 5);
    delete[] data; // manual deallocation
    return 0;
}
