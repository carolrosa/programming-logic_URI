#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int i, n;
    cin >> n;
    for (i=1; i<=n; i++){
        if (i%2 == 0) {
        cout << i << "^2 = " << i * i << endl;
        }
    }
    return 0;
}
