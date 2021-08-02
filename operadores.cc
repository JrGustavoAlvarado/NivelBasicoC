#include <iostream>

using namespace std;
/* En este programa hacemos operaciones basicas*/
int main(){
const int a = 45;
const int b = 30;
const int NUMBERS[] = {25, 40, 8};

const int sum = a + b;
const int res = a - b; 
const int div = a / b; 
const bool mayo = a > b;

cout << sum << endl;
cout << res << endl;
cout << div << endl;
cout << mayo << endl;
cout << sizeof(NUMBERS) << endl; 
}