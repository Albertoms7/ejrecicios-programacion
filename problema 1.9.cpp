#include <iostream>
#include <cmath>
using namespace std;
int main() {

      

        double a,b,c,x1,x2;

        cout << "Ingrese los valores de su ecuación: ";

        cin >> a >> b >> c;

        x1= ( -b + sqrt((b*b) -4*a*c))/(2*a);

        x2= ( -b - sqrt((b*b) -4*a*c))/(2*a);

        cout << "Los dos posibles valores de su ecuación son: " << x1 << " y " << x2 << endl;

}