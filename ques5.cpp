// Program to negate the numbers using (-) unary operator overloading
#include <iostream>
using namespace std;
class Numbers
{
private:
    int x, y, z;

public: 
    void input() {
        cin >> x >> y >> z;
    }
    void display() {
        cout << x << " " << y << " " << z << endl;
    }

    // Unary operator (-) overloading to negate the given numbers
    Numbers operator-() {
        Numbers temp;
        temp.x = -x;
        temp.y = -y;
        temp.z = -z;  
        return temp;
    }
};
int main() {
    Numbers N1;
    N1.input();

    // Negate the numbers of the given object
    N1 = -N1;
    
    N1.display();
    return 0;
}