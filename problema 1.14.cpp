#include <iostream>
#include <cmath>
using namespace std;
int main() {

        double x1,x2,x3,m,d;
        cout << "Introduzca tres valores para calcular la media y la desviación: ";
        cin >> x1 >> x2 >> x3;
        m= (x1+x2+x3)/3;
        d= sqrt((pow((x1-m),2)+pow((x2-m),2)+pow((x3-m),2))/3);
        cout << "Media: " << m << " Desviación: " << d << endl;
}
