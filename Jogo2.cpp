#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

 int main () {
     srand(time(0));
     string resposta,sim,nao;
     int numero1 = rand() % 50 + 1;
     int numero2 = rand() % 50 + 1;
     int operacao = rand() % 2;
     int respostaUtilizador;
     int resultado;




   cout << "============================================= \n";
   cout << "=== Seja bem vindo === Ao jogo matematico === \n";
   cout << "============================================= \n";

   cout << " Estas sao as intrucoes do jogo: \n";
   cout << " Eu vou te pedir numeros aleatorios e uma conta aleatoria \n";
   cout << " para fazer uma conta com varios niveis a cada 3 respostas \n";
   cout << " certa passa um nivel, mas a cada resposta errada volta \n";
   cout << " do inicio \n";
   cout << " Boa sorte e boa jogatina!! \n ";

   cout << " NIVEL 1: OPERACOES BASICAS(SOMAR E SUBTRAIR) \n";
   cout << " Tu sabes o que sao somas e subtracoes ?? ";
   cin  >> resposta;

    if (resposta == "sim") {
        cout << " Entao ja estas preparado !!" << endl;
    }
  else if (resposta == "nao") {
        cout << "                        \n";
        cout << " Entao vou te explicar! \n";
        cout << " Somar e quando fazes um numero mais o outro (EX: 1+2=3) \n";
        cout << " Subtrair e quando fazes um numero menos o ourto (Ex: 5-3=2) \n";
        cout << " Agora ja estas pronto !! \n " << endl;
    }

        for (int i = 1; i <= 3; i++) {

        // Escolher dois numeros novos
        numero1 = rand() % 50 + 1;
        numero2 = rand() % 50 + 1;

        // Escolher soma ou subtracao
        operacao = rand() % 2;

        // Fazer a conta
        if (operacao == 0) {
            resultado = numero1 + numero2;
            cout << numero1 << " + " << numero2 << " = ";
        }
        else {
            resultado = numero1 - numero2;
            cout << numero1 << " - " << numero2 << " = ";
        }

        // Resposta do jogador
        cin >> respostaUtilizador;

        // Verificar resposta
        if (respostaUtilizador == resultado) {
            cout << "Correto!!!" << endl;
        }
        else {
            cout << "Errado! O jogo acabou." << endl;
            return 0;
        }
    }

    cout << "=============================================" << endl;
    cout << "PARABENS!!! Acertaste as 3 contas!" << endl;
    cout << "Passaste de nivel!" << endl;
    cout << "=============================================" << endl;


    cout << "                                              \n" ;
    cout << "  NIVEL 2: Operacoes Mediaticas (Multiplicacao e Divisao) \n";
    cout << " Sabes o que sao multiplicacoes e divisoes ?? \n";
    cin  >> resposta;




    if (resposta == "sim" ) {
        cout << "Entao vamos comecar ja!! \n" << endl ;
    }
    else if (resposta == "nao") {
        cout << " Entao vou te eplicar o que e : \n";
        cout << " Multiplicacao e quando fazemos um numero vezes o outro(Ex: 5*2= 10) \n";
        cout << " Divisao e quando fazemos um numero a dividir por outro(Ex: 10/2= 5) \n";
        cout << " Agora ja estas preparado !! \n";
    }


    for (int i = 1; i <= 3; i++) {

    // Escolher aleatoriamente multiplicacao ou divisao
    operacao = rand() % 2;

    if (operacao == 0) {

        // MULTIPLICACAO
        numero1 = rand() % 20 + 1;
        numero2 = rand() % 20 + 1;

        resultado = numero1 * numero2;

        cout << numero1 << " * " << numero2 << " = ";
    }
    else {

        // DIVISAO
        numero2 = rand() % 10 + 1;

        int multiplicador = rand() % 10 + 1;

        numero1 = numero2 * multiplicador;

        resultado = numero1 / numero2;

        cout << numero1 << " / " << numero2 << " = ";
    }

    // Resposta do jogador
    cin >> respostaUtilizador;

    // Verificar resposta
    if (respostaUtilizador == resultado) {
            cout << "=============================================" << endl;
            cout << "PARABENS!!! Acertaste as 3 contas!" << endl;
            cout << "Passaste de nivel!" << endl;
            cout << "=============================================" << endl;
    }
    else {
        cout << "Errado! O jogo acabou." << endl;
        return 0;
    }
}

 return 0;
 }
