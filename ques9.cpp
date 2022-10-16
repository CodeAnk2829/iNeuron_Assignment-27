#include <iostream>
#include <string.h>
using namespace std;
class mystring 
{
private:
    char str[100];

public:
    friend void operator>>(istream &, mystring &);
    friend mystring& operator<<(ostream &, mystring &);

    void operator!() {
        
        int size = strlen(str);
        for(int i = 0; i < size; ++i) {
            if(str[i] >= 'a' && str[i] <= 'z') {
                str[i] -= 32;
            } else if(str[i] >='A' && str[i] <= 'Z') {
                str[i] += 32;
            }
        }
    }
};
void operator>>(istream &i, mystring &s) {
    cin.getline(s.str, 100);
}
mystring& operator<<(ostream &o, mystring &s) {
    cout << s.str << endl;
}
int main() {
    mystring m;
    cin >> m;
    cout << m;
    !m;
    cout << m;
    return 0;
}