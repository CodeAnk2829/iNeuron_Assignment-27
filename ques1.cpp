#include <iostream>
using namespace std;
class Complex
{
private:
    int a;
    int b;

public:
    void input() {
        cout << "Enter real and imaginary part of the complex number: ";
        cin >> a >> b;
    }
    void display() {
        cout << "real = " << a << " imaginary = " << b << endl;
    }
    //Binary Operator (+) overloading to add two complex numbers
    Complex operator+(Complex C) {
        Complex temp;
        temp.a = a + C.a;
        temp.b = b + C.b;
        return temp;
    }

    // Binary operator (-) overloading to subtract two complex numbers
    Complex operator-(Complex C) {
        Complex temp;
        temp.a = a - C.a;
        temp.b = b - C.b;
        return temp;
    }
    
    // Binary operator (*) overloading to multiply two comlex numbers
    Complex operator*(Complex C) {
        Complex temp;
        temp.a = a * C.a;
        temp.b = b * C.b;
        return temp;
    }

    // Operator (==) overloading to compare two complex numbers
    bool operator==(Complex C) {
        if((a == C.a) && (b == C.b)) return true;
        cout << "hey" << endl;
        return false;
    }
};