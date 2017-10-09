#include <iostream>
using namespace std;

int main() {
    int arraySize = 2000;
    //Create the array
    int integerArray[arraySize];

    srand(time(0));

    //Go through the array and create a random number for each
    int i = -1;
    while(++i < arraySize){
        integerArray[i] = rand() % arraySize;
        cout << "Intger[" << i << "]: " << integerArray[i] << endl;
    }

    cout << "------------Start the pointer arithmetic--------------" << endl;

    //Create a pointer
    int* pointer = integerArray;
    int* endPointer = &integerArray[arraySize-1];
    i = 0;

    //Go through the "pointer array" as a pointer
    while(pointer <= endPointer){
        cout << "Pointer[" << i++ << "]: " << *pointer << endl;
        pointer++;
    }

    return 0;
}