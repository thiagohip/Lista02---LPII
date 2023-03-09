//Thiago Hipoĺito Moreira - Lista 02 - Questão 07

#include <iostream>

using namespace std;

void ns(int n){
    if(n == 0){
        cout << n << endl;
        return;
    }else{
        ns(n - 1);
        cout << n << endl;
    }
}

int main()
{
    int n;
    cout << "Digite um valor: ";
    cin >> n;
    ns(n);

    return 0;
}
