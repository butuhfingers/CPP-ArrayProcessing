#include <iostream>

int main() {
    //Create the array
    int integerArray[2000];

    //Go through the array and create a random number for each
    int i = -1;
    while(++i < 2000){
        integerArray[i] = rand() % 2000;
        std::cout << "Intger[" << i << "]: " << integerArray[i] << std::endl;
    }

    std::cout << "------------Start the pointer arithmetic--------------" << std::endl;

    //Create a pointer
    int* pointer = integerArray;

    //Go through the "pointer array" as a pointer
    for(i = 0; i < 2000; pointer++,i++){
        std::cout << "Pointer[" << i << "]: " << *pointer << std::endl;
    }

    return 0;
}