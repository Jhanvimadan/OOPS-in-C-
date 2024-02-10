//6. Write a C++ program to swap two numbers using functions (Call by value and Call by reference - pointers)

#include <iostream>
using namespace std;

// Function to swap two numbers using call by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping (Call by Value): a = " << a << ", b = " << b << "\n";
}

// Function to swap two numbers using call by reference with pointers
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping (Call by Reference - Pointers): a = " << a << ", b = " << b << "\n";
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Call by value
    swapByValue(num1, num2);
    cout << "After swapping (Original values): a = " << num1 << ", b = " << num2 << "\n";

    // Call by reference with pointers
    swapByReference(num1, num2);
    cout << "After swapping (Original values): a = " << num1 << ", b = " << num2 << "\n";

    return 0;
}
