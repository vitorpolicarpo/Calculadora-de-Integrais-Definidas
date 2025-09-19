#include <iostream>
#include <cmath>
using namespace std;

int main(){

double a, b; // a e b fazem parte dos intervalos
int n; // o número de divisões feitas

cout << "Digite o início do intervalo (a):";
cin >> a;
cout << "Digite o início do intervalo (b):";
cin >> b;
cout << "Digite o número de subdivisões (n):";
cin >> n; // quanto maior o n, mais próxima é a aproximação

double base = (b - a) / n; // com base no intervalo, achamos a base dos retângulos

double soma = 0.0;

//agora, faremos a soma de Riemann a partir do ponto médio, para facilitarmos os cálculos

for (int i = 0; i < n; i++){
    double p = a + (i + 0.5) * base; // achamos o ponto médio do intervalo a esquerda
    soma = soma + 1/p; // colocamos a função com o ponto médio: f(p)
}

double calculo_area = soma * base;

cout << "Resposta: ";
cout << calculo_area;

}
