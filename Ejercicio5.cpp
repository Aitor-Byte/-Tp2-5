#include <iostream>
#include <vector>
#include <iomanip>   // fixed, setprecision
using namespace std;

int main() {
    // Inicialización del vector de precios
    vector<double> precios = {120.00, 45.50, 89.99, 200.00, 15.75};

    // Verificar si la lista está vacía antes de continuar
    if (precios.empty()) {
        cout << "La lista de precios está vacía." << endl;
        return 1;
    }

    // Bucle for clásico con .size() ? aplica 10% de descuento
    for (size_t i = 0; i < precios.size(); i++) {
        precios[i] *= 0.90;   // 90% del precio original
    }

    // Bucle for-each (C++11) ? imprime los precios con descuento
    cout << fixed << setprecision(2);
    cout << "Precios con 10% de descuento:" << endl;
    for (const double& p : precios) {
        cout << "  $" << p << endl;
    }

    return 0;
}
