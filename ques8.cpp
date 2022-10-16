#include <iostream>
using namespace std;
class Matrix
{
private:
    int a[3][3];

public:
    friend void operator>>(istream &, Matrix &);
    friend Matrix operator<<(ostream &, Matrix );

    // Unary operator (-) to negate the matrix
    Matrix operator-() {
        Matrix temp;
        for(int i = 0; i < 3; ++i) {
            for(int j = 0; j < 3; ++j) {
                temp.a[i][j] = -a[i][j];
            }
        }
        return temp;
    }
};
void operator>>(istream &i, Matrix &M) {
    cout << "Enter Matrix Elements (3 x 3)" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> M.a[i][j];
        }
    }
}
Matrix operator<<(ostream &o, Matrix M) {
    cout << "Matrix is: " << endl;
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cout << M.a[i][j] << "\t";
        }
        cout << endl;
    }
    return M;
}
int main() {
    Matrix M;
    cin >> M;
    cout << M;
    cout << -M;
    return 0;
}