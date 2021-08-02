#include <iostream>

using namespace std;

// Vamos a validar si puedo votar 

int main(){
    int edad = 0;
    cout <<"Edad:" << endl;
    cin >> edad;

    if(edad >= 18 && edad <=90) {
        cout << "Puedes votar" << endl;
    }
     else {
         cout << "No puedes votar" << endl;
     }
}


