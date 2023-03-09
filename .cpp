//Thiago Hipoĺito Moreira - Lista 02 - Questão 07

#include <iostream>

using namespace std;

int main()
{
    int m[3][4], n, sumP=0, cont=0, i, j;
    float avg;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            cout << "Digite um valor: ";
            cin >> n;
            m[i][j] = n;
            if(n%2 == 0){
                sumP += n;
                cont++;
            }
        }
    }

    avg = sumP/cont;

    cout << "A média dos valores pares na matrix e de " << avg;

    return 0;
}
