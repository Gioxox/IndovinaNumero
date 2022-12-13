#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
#define MAX_TENTA 10

int main() {
    int n, prova, conta = 0;
    cout << "\n[ GAME ] Indovina il numero" << endl;
    srand(time(NULL));
    n = (rand() % 100) + 1;

    do {
        cout << "Inserisci un numero: ";
        cin >> prova;
        conta++;
        if (prova < n)
            cout << "[ Numero troppo piccolo ]" << endl;
        if (prova > n)
            cout << "[ Numero troppo grande ]" << endl;

    } while ((n != prova) && (conta != MAX_TENTA));
    if (n == prova) {
        cout << endl << "Complimenti! Hai indovinato." << endl;
        cout << " in " << conta << " tentativi!" << endl;
    } else {
        cout << "Peccato! Hai perso." << endl;
        cout << conta << " tentativi" << endl;
        cout << "il numero era " << n << endl;
    }
}