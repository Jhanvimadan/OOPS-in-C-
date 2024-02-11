//8. Write a C++ program to convert octal number to decimal and vice versa.
#include <iostream>
#include <cmath>
using namespace std;

// Function to convert octal to decimal
int octalToDecimal(int octal) {
    int decimal = 0, i = 0;
    while (octal != 0) {
        decimal += (octal % 10) * pow(8, i);
        ++i;
        octal /= 10;
    }
    return decimal;
}

// Function to convert decimal to octal
int decimalToOctal(int decimal) {
    int octal = 0, i = 1;
    while (decimal != 0) {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }
    return octal;
}

int main() {
    int choice, number;

    cout << "1. Convert Octal to Decimal\n";
    cout << "2. Convert Decimal to Octal\n";
    cout << "Enter your choice (1/2): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter Octal number: ";
            cin >> number;
            cout << "Decimal equivalent: " << octalToDecimal(number) << "\n";
            break;

        case 2:
            cout << "Enter Decimal number: ";
            cin >> number;
            cout << "Octal equivalent: " << decimalToOctal(number) << "\n";
            break;

        default:
            cout << "Invalid choice!\n";
    }

    return 0;
}

