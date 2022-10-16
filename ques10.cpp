// Addition of Matrices
#include <iostream>
using namespace std;
class Matrix
{
private: 
    int a[3][3];

public:
    friend istream& operator>>(istream &, Matrix &);
    friend ostream& operator<<(ostream &, Matrix);
    Matrix operator+(Matrix M) {
        Matrix temp;
        for(int i = 0; i < 3; ++i) {
            for(int j = 0; j < 3; ++j) {
                temp.a[i][j] = a[i][j] + M.a[i][j];
            }
        }
        return temp;
    }
};
istream& operator>>(istream &i, Matrix &M) {
    cout << "Enter Matrix Elements (3 x 3" << endl;
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cin >> M.a[i][j];
        }
    } 
    return i;
}
ostream& operator<<(ostream &o, Matrix M) {
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cout << M.a[i][j] << "\t";
        }
        cout << endl;
    }
}
int main() {
    Matrix m1, m2;
    cin >> m1 >> m2;
    cout << "First Matrix: " << endl;
    cout << m1 << endl;
    cout << "Second Matrix: " << endl;
    cout << m2 << endl;
    Matrix m3;
    m3 = m1 + m2;
    cout << "Addition of Matrices: " << endl;
    cout << m3 << endl;
    return 0;
}