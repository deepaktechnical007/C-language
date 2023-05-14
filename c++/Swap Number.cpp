#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping by value: a = " << a << ", b = " << b << endl;
}

void swapByRef(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping by reference: a = " << a << ", b = " << b << endl;
}

void swapByPtr(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "After swapping by pointer: a = " << *a << ", b = " << *b << endl;
}

int main() {
    int a = 5, b = 10;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    swapByValue(a, b);
    cout << "After swapByValue: a = " << a << ", b = " << b << endl;

    swapByRef(a, b);
    cout << "After swapByRef: a = " << a << ", b = " << b << endl;

    swapByPtr(&a, &b);
    cout << "After swapByPtr: a = " << a << ", b = " << b << endl;

    return 0;
}

