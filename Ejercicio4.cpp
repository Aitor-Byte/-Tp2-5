#include <iostream>
#include <vector>
#include <algorithm>   // sort, set_intersection
using namespace std;

int main() {
    // Inicialización de los dos vectores
    vector<int> v1 = {1, 3, 5, 7, 9, 11};
    vector<int> v2 = {2, 3, 5, 8, 9, 12};

    // Ordenar ambos vectores (requerido por set_intersection)
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    // Vector para almacenar la intersección
    vector<int> interseccion;

    // set_intersection escribe los elementos comunes en interseccion
    set_intersection(
        v1.begin(), v1.end(),
        v2.begin(), v2.end(),
        back_inserter(interseccion)
    );

    // Imprimir resultado
    cout << "Intersección: ";
    for (int x : interseccion)
        cout << x << " ";
    cout << endl;

    return 0;
}
