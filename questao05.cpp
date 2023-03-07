//Thiago Hipoĺito Moreira - Lista 02 - Questão 05

#include <iostream>

using namespace std;

bool divs(){
    int n;
    system("clear");
    cout << "Digite o valor: ";
    cin >> n;
    for(int i = 1; i < n; i++){
        if(n%i==0){
            cout << i << endl;
        }
    }
}

int main()
{
    int i, n, op;
    system("clear");
    bool tru;
    tru = true;

    while(tru){
        cout << "[1]Informar o valor de X." << endl;
        cout << "[2]Sair do programa." << endl;
        cin >> op;
        if(op == 1){
            divs();
        }else if(op == 2){
            break;
        }
    }

    return 0;
}
