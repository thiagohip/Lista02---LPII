//Thiago Hipólito Moreira - Lista 02 - Exercício 01

#include <iostream>

using namespace std;

int main()
{
    int v[15], maior, menor, soma, media, i, n;

    for(int i = 0; i < 15; i++){
        cout << "Digite um número: ";
        cin >> n;
        v[i] = n;
        if(i == 0){
            maior = menor = soma = n;
        }else{
            if(n > maior){
                maior = n;
            }else if(n < menor){
                menor = n;
            }
            soma += n;
        }
    }

    media = soma/15;
    cout << "O maior valor da listagem foi " << maior << endl;
    cout << "O menor valor da listagem foi " << menor << endl;
    cout << media << " foi a media dos valores listados";

    return 0;
}
