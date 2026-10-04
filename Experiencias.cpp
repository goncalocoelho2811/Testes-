

#include <iostream>

using namespace std;

int main(){
    string operacao;
    float n1,n2;
    float calculo;

     cout << "operaçoes possiveis:\n";
     cout << "somar\n";
     cout << "subtrair\n";
     cout << "multiplicar\n";
     cout << "dividir\n";

     cout << "Diga qual operacao quer efetuar: ";
     cin >> operacao;
     // cout << "Escolheste:  " << op;

     cout << "Diz o 1.num: ";
     cin >> n1;
     cout << "Diz 2.num ";
     cin >> n2;

     if (operacao == "somar") {
        cout << "Soma  = " << (n1 + n2);

     }else if (operacao == "subtrair") {
       cout << "Soma = " << (n1 + n2);

     }else if (operacao == "multiplicar") {
        cout << "Multiplicacao = " << (n1*n2);

     }else if (operacao == "dividir") {

       if(n2 == 0){
        cout << "Impossivel fazer este calculo ";
        } else {
             calculo = (n1) / (n2);
           cout << "Divisao = " << calculo;
        }
     }
}
