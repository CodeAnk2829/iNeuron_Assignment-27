#include <iostream>
using namespace std;
class Fraction
{
private:
    long numerator;
    long denominator;

public:
    Fraction(long n = 0, long d = 0) {
        numerator = n;
        denominator = d;
    }

    friend void operator>>(istream &, Fraction &);
    friend void operator<<(ostream &, Fraction &);
    
    void display() {
        cout << numerator << "/" << denominator << endl;
    }

    // Pre-Increment opertor
    Fraction operator++() {
        Fraction temp;
        temp.numerator = ++numerator;
        temp.denominator = ++denominator;
        return temp;
    }

    // Post-Increment operator
    Fraction operator++(int i) {
        Fraction temp;
        temp.numerator = numerator++;
        temp.denominator = denominator++;
        return temp;
    }
};
void operator>>(istream &c, Fraction &f) {
    cout << "Numerator   : ";
    cin >> f.numerator;
    cout << "Denominator : ";
    cin >> f.denominator;
}
void operator<<(ostream &c, Fraction &f) {
    cout << f.numerator << "/" << f.denominator << endl;
}

int main() {
    Fraction f1, f2;
    cout << "f1    : " << f1;
    cout << endl;
    cout << "Enter 1st Fraction Value" << endl;
    cin >> f1;
    f1++;
    cout << "f1++  : " << f1;
    ++f1;
    cout << "++f1  : " << f1;
    cout << endl;
    cout << "Enter 2nd Fraction Value" << endl;
    cin >> f2;
    cout << f2;

    f2 = ++f1;
    cout << "f2 = ++f1" << endl;
    cout << "f2   : " << f2;
    cout << "f1   : " << f1;
    f2 = f1++;
    cout << endl << "f2 = f1++" << endl;
    cout << "f1   : " << f1;
    cout << "f2   : " << f2;
    return 0;
}