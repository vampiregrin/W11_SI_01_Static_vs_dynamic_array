#include "myArray.h"


myArray::myArray(int topIndex) {
    this->topIndex = topIndex;
    arr = new int[topIndex];
}

int myArray::getSize() {
    return sizeof(arr) / sizeof(arr[0]);
}

void myArray::resize() {
    int newTopIndex = topIndex * 2;
    int* newArr = new int[newTopIndex];

    memcpy(newArr, arr, topIndex * sizeof(int));

    topIndex = newTopIndex;
    delete[] arr;
    arr = newArr;
}

void myArray::push_back(int value) {
    if (topIndex > getSize()) {
        resize();
    }
    arr[topIndex] = value;
    topIndex++;
}
int myArray::getItem(int index) {

    if (getSize() < index) {
        std::cout << "Improper index! I am not going to allow you to access the memory location I don't know!";
        return -1;
    }
    return arr[index];
}
void myArray::setValue(int index, int value) {

    if (index < 0 || index > getSize())
        std::cout << "Improper index! I am not going to allow you to access the memory location I don't know!";
    else
        arr[index] = value;
}
void myArray::clear() {
    topIndex = 0;
    delete[] arr;
}

int myArray::operator[](int i) {
    if (i > topIndex) {
        std::cout << "Index out of bounds" << std::endl;
        return arr[0];
    }
    return arr[i];
}
