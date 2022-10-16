/* C++ program to add two complex numbers using operator overloaded by a
friend function. */
#include <iostream>
using namespace std;
class Complex
{
private:
    int a;
    int b;

public:
    // Friend operator overloading to add two complex numbers
    friend Complex operator+(Complex, Complex);

    void input() {
        cin >> a >> b;
    }
    void display() {
        cout << "real = " << a << " img = " << b << endl;
    }
};
Complex operator+(Complex X, Complex Y) {
    Complex temp;
    temp.a = X.a + Y.a;
    temp.b = X.b + Y.b;
    return temp;
}
int main() {
    Complex C1, C2, C3;
    C1.input();
    C2.input();
    C3 = C1 + C2; // Calculating sum of two complex class numbers
    C1.display();
    C2.display();
    cout << "Sum of the given complex numbers:" << endl;
    C3.display();
    return 0;
}