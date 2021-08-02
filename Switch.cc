#include <iostream>

using namespace std;
//Programa call center 
int main(){
    int option;
    cout << "Ingrese el numero del 1 al 5: "<< endl;
    cin >> option;
    switch(option) {
        case  1: 
            cout << "Seleccionaste la opción 1"<< endl;
            break;
        case 2: 
            cout << "Seleccionaste la opcion 2"<< endl;
            break;
        case 3: 
            cout << "Seleccionaste la opcion 3"<< endl;
            break;
        default:
            cout << "Esto no existe"<< endl;
            break;
    }
}