//Thiago Hipoĺito Moreira - Lista 02 - Questão 04

#include <iostream>

using namespace std;

bool is(int n){
    int aux, flag;
    aux = 0;
    for(int i = 2; i < n-1; i++){
        if(n%i == 0){
            aux++;
        }
    }

    if(aux == 0){
        return true;
    }else{
        return false;
    }
}

int main()
{
    int n;
    cout << "Digite um valor: ";
    cin >> n;
    if(is(n)){
        cout << "Esse valor é primo.";
    }else{
        cout << "Esse valor não é primo.";
    }

    return 0;
}
