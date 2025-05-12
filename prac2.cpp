#include <iostream>

using namespace std;

int main(void){
    int N, suma = 0;

    cout << "Ingrese un numero: ";
    cin >> N;

    for (int i = 0; i <= N; i++)
    {
        suma = suma + i;
    }

    cout << suma;

    return 0;
}