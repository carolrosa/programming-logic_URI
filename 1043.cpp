#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    cout << fixed << setprecision (1);

    double A, B, C;
    cin >> A >> B >> C;

    if ( (A+B) > C and (A+C) > B and (B+C) > A ) {
        cout << "Perimetro = " << A + B + C << endl;
    } else {
        cout << "Area = " << ((A + B) * C) / 2 << endl;
        }

    return 0;
}
