//Thiago Hipoĺito Moreira - Lista 02 - Questão 04

#include <iostream>

using namespace std;

int main()
{
    srand(time(unsigned(NULL)));
    int lenv, n, flag;
    cout << "Digite o tamanho do vetor: ";
    cin >> lenv;
    int v[lenv];
    flag = 0;

    for(int i = 0; i < lenv; i++){
        v[i] = rand() % 101;
    }

    cout << "Digite o valor a ser encontrado no vetor de 0 a 100: ";
    cin >> n;

    for(int i = 0; i < lenv; i++){
        if(v[i] == n){
            cout << "O valor foi encontrado na posição " << i;
            flag++;
        }
    }

    if(flag == 0){
        cout << "O valor não foi encontrado no vetor";
    }

    return 0;
}
