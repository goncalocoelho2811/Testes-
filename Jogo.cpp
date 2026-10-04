#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int numeroSecreto = rand() % 1000 + 1;
    int tentativa;
    int tentativas = 0;


    cout << "|==================================|\n";
    cout << "|==== Seja bem vindo ao ===========|\n";
    cout << "|==== meu primeiro jogo !! ========|\n";
    cout << "|==================================|\n";
    cout << "|=== Jogo do numero secreto =======|\n";
    cout << "|==================================|\n";
    cout << "|======== Vamos comecar ===========|\n";
    cout << "|==================================|\n";

    cout << "Estou a pensar num numero entre 1 e 1000!\n";


       do {
            cout << "\nEscreve a tua tentativa: ";
            cin >> tentativa;

        tentativas++;

        if (tentativa < numeroSecreto) {
            cout << "O numero e MAIOR!\n";
        }
        else if (tentativa > numeroSecreto) {
            cout << "O numero e MENOR!\n";
        }
        else {
            cout << "PARABENS! Acertaste!\n";
            cout << "Precisaste de " << tentativas << " tentativas.\n";
        }

    } while (tentativa != numeroSecreto);

    return 0;
}

