#include <iostream>
using namespace std;
int main() {

       double primera_nota,segunda_nota,tercera_nota,res;
       cout << "introducca sus tres notas de la asignatura de programación (teoría, practicas y problemas en ese orden): ";
       cin >> primera_nota >> segunda_nota >> tercera_nota;
       res = ((primera_nota*70)/100)+((segunda_nota*20)/100)+((tercera_nota*10)/100);
       cout << "Esta es tu nota en programación: " << res << endl;
}