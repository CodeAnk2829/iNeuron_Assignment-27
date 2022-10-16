/* Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings. */
#include <iostream>
#include <string.h>
using namespace std;
class CString
{
private:
    char s[100];

public:
    void input() {
        cout << "Enter a string\n";
        cin.getline(s, 100);
    }
    void display() {
        cout << s << endl;
    }
    
    // Operator (+) overloading to concatenate two strings
    CString operator+(CString S) {
        CString temp;
        strcpy(temp.s, s);
        strcat(temp.s, S.s);
        return temp;
    }

    // Operator (==) overloading to compare two strings whether they are equal or not
    bool operator==(CString S) {
        if(strcmp(s, S.s) == 0){
            return true;
        }
        return false;
    }
};
int main() {
    CString s1, s2, s3;
    s1.input();
    s2.input();

    // Concatenate two strings
    s3 = s1 + s2;
    s3.display();
    
    // Compare two strings
    if(s1 == s2) {
        cout << "Strings are same";
    } else {
        cout << "Strings are different";
    }
    return 0;
}