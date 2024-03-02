
#include <iostream>
using namespace std;
int main() {

    for (int i = 30; ; i += 3) {
        if (i % 2 != 0) {

            cout << "Uno de los primeros numeros impares despues del 30 es: " << i << endl;
            break;
        }
    }

    return 0;
}
