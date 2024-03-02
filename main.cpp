
#include <iostream>
using namespace std;
int main() {
    cout << "Bienvenido al ciclo que sume los numeros impares en una variable A y los numeros pares en una variable B, en un rango de 0 a 50" << endl;
    int num1;
    cout << "Ingrese un numero limite: ";
    cin >> num1;

    int Impar = 0;
    int Par = 0;

    for (int i = 1; i <= num1; ++i) {
        if (i % 2 == 0) {

            Par += i;
        } else {

            Impar += i;
        }
    }

    cout << "La suma de los numeros impares hasta " << num1 << " es: " << Impar << endl;
    cout << "La suma de los numeros pares hasta " << num1 << " es: " << Par << endl;

    return 0;
}
