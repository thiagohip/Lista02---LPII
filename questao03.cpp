#include <iostream>

using namespace std;

bool is(int n){
    if(n % 2 == 0){
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
        cout << "Esse valor é par.";
    }else{
        cout << "Esse valor é impar.";
    }

    return 0;
}
