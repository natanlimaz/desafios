/*
1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

IMPORTANTE: Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;

*/

#include <bits/stdc++.h>

using namespace std;

bool pertenceFibonacci(int num) {
    if(num == 0 || num == 1) {
        return true;
    }
    
    int a = 0;
    int b = 1;
    int c = a + b;
    
    while(c < num) {
        a = b;
        b = c;
        c = a + b;
    }
    
    return (c == num);
}

int main() {
    int num;
    cout << "Digite um número: ";
    cin >> num;
    
    if(pertenceFibonacci(num)) {
        cout << num << "-> Pertence a sequencia de Fibonacci." << endl;
    }
    else {
        cout << num << "-> Nao pertence a sequencia de Fibonacci." << endl;
    }

    return 0;
}