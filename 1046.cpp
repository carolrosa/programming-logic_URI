#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int inicio, fim, duracao;
    cin >> inicio >> fim;

    if (inicio < fim) {
        duracao = fim - inicio;
    } else {
        duracao = 24 - inicio + fim;
    }

        cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;


    return 0;
}
