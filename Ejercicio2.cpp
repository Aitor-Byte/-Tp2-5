#include<iostream>
#include<vector>
#include<algorithm> // Necesario para std::find o std::count

using namespace std;

int main() {
    vector<int> ferral; 
    vector<int> joseo;
    int manuel;

    cout << "Ingrese numeros (0 para terminar):" << endl;

    for(;;) {
         
		cin >> manuel;
        
        if (manuel == 0) break;

     
        if (count(ferral.begin(), ferral.end(), manuel) > 0) {
            
            
            if (count(joseo.begin(), joseo.end(), manuel) == 0) {
                joseo.push_back(manuel);
            }
        }

        
        ferral.push_back(manuel);
    }

   
    cout << "Lista Completa" << endl;
    for(int x : ferral) { cout << x << " "; }

    cout << "\n\nValores Duplicados" << endl;
    if(joseo.empty()) {
        cout << "No hubo duplicados.";
    } else {
        for(int x : joseo) { cout << x << " "; }
    }

    cout << endl;
    return 0;
}
