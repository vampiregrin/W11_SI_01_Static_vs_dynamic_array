
#include <iostream>
class myArray
{
    int* arr;
    int topIndex{};
public:
    myArray(int);
    void resize();
    int getSize();
    void push_back(int);
    int getItem(int);
    void setValue(int, int);
    void clear();
    int operator[](int i);
};