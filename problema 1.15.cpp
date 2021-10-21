#include <iostream>
#include <cmath>
using namespace std;
int main() {

     double x0=sqrt(2), y1=pow(2,(0.25)), pi0=2+x0, x1, x2, y2, pi1, pi2;
     cout << "Bienvenido a la calculadora de pi: " << endl;
     x1=(0.5)*(sqrt(x0)+(1/(sqrt(x0))));
     pi1=pi0*((x1+1)/(y1+1));
     x2=(0.5)*(sqrt(x1)+(1/(sqrt(x1))));
     y2=((y1)*sqrt(x1)+(1/sqrt(x1)))/(y1+1);
     pi2=pi1*((x2+1)/(y2+1));
     cout << "pi sub 0= " << pi0 << endl;
     cout << "pi sub 1= " << pi1 << endl;
     cout << "pi sub 2= " << pi2 << endl;
}