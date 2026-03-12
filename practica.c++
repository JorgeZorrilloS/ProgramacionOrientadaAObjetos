#include <iostream>
using namespace std;

class cuentaBancaria {
    float saldo;
};

class cuentaAhorro : public cuentaBancaria {
    float tasaInteres;
};

int main() {
    return 0;
}

