#include <iostream>

using namespace std;

int main()
{
    int v[25], aux;
    v[0] = aux = 1;
    v[1] = 2;
    for(int i = 2; i < 25; i++){
        v[i] = v[i-1]*aux;
        aux = v[i-1];
    }

    for(int i = 0; i < 25; i++){
        cout << v[i] << endl;
    }

    return 0;
}
