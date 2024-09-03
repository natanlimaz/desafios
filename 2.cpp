/*
2) Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cout << "Digite a palavra desejada: ";
    getline(cin, s);
    
    int cont = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'A' || s[i] == 'a') {
            cont++;
        }
    }
    
    cout << "A palavra digitada tem " << cont << " letras A/a" << endl;
    return 0;
}