#include <iostream>
using namespace std;
class Time
{
private: 
    int Hours;
    int Minutes;
    int Seconds;

public:

    // Operator (==) overloading to compare between two times
    bool operator==(Time T) {
        if((Hours == T.Hours) && (Minutes == T.Minutes) && (Seconds == T.Seconds)) 
            return true;
        return false;
    }
    // Operator (>>) overloading to take input
    friend void operator>>(istream &, Time&);

    // Operator (<<) overloading to display the output
    friend void operator<<(ostream&, Time&);

};
void operator<<(ostream& c, Time &T) {
    cout << "Hours   : " << T.Hours << endl;
    cout << "Minutes : " << T.Minutes << endl;
    cout << "Seconds : " << T.Seconds << endl;
}
void operator>>(istream &c,Time &t)
{
    cout << "-----------------" << endl;
    cout << "Hours   : ";
    cin >> t.Hours;
    cout << "Minutes : ";
    cin >> t.Minutes;
    cout << "Seconds : ";
    cin >> t.Seconds;
}

int main() {
    char CIN[5], COUT[5];
    Time T1, T2;
    cout << "Enter First Time" << endl;
    cin >> T1 ; // Taking input in object T1

    cout << "First Time" << endl;
    cout << T1; // Display time T1

    cout << "Enter Second Time" << endl;
    cin >> T2; // Taking input in object T2

    cout << "Second Time" << endl;
    cout << T2; // Display time T2

    // Compare two times
    if(T1 == T2) {
        cout << "Times are same";
    } else {
        cout << "Times are different";
    }
    
    return 0;
}