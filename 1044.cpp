#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    if (A > B) {
        swap (A,B);
    }
    if (B % A == 0) {
        cout << "Sao Multiplos" << endl;
    } else {
        cout << "Nao sao Multiplos" << endl;
        }

    return 0;
}
