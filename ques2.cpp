// C++ program to overload unary operators that is increment and decrement.
#include <iostream>
using namespace std;
class Complex
{
private:
    int a;
    int b;

public:
    void input() {
        cin >> a >> b;
    }
    void display() {
        cout << "real = " << a << " img = " << b << endl;
    }

    // Operator (--) overloading to decrement the values
    void operator--() {
        a--;
        b--;
    }

    // Operator (++) overloading to increment the values
    void operator++() {
        a++;
        b++;
    }
    
};
int main() {
    Complex C;
    C.input();
    C.display();
    ++C; // Pre-Increment
    C.display();
    --C; // Pre-Decrement
    C.display();
    return 0;
}