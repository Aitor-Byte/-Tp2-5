#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	
	vector <int> manu{1, 3, 5, 7};
	vector <int> ferral{1, 2, 4, 6};
	vector <int> fusion;
	int i=0;
	int j=0;
	while (i < manu.size() && j < ferral.size()) {
        if (manu[i] < ferral[j]) {
            fusion.push_back(manu[i]);
            i++;
        } else {
            fusion.push_back(ferral[j]);
            j++;
        }
    }
    while (i < manu.size()) {
        fusion.push_back(manu[i]);
        i++;
    }	
    while (j < ferral.size()) {
        fusion.push_back(ferral[j]);
        j++;
    }
    
    cout << "Vector fusionado: ";
    for (int x : fusion) {
        cout << x << " ";
    }
    cout << endl;
    
    
    
    return 0;
	}
	

