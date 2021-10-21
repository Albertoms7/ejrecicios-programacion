#include <iostream>
using namespace std;
int main() {

    	int tiempo,segundos,minutos,horas,dias;
    	cout << "introducca el número de segundos que desé: ";
    	cin >> tiempo;
    	dias= tiempo/86400;
    	horas= (tiempo%86400)/3600;
    	minutos= ((tiempo%86400)%3600)/60;
    	segundos= ((tiempo%86400)%3600)%60;
    	cout << "Este es tu tiempo en segundos, minutos, horas y días: " << dias << " dias, " << horas << " horas, " << minutos << " minutos, " << segundos << " segundos, " << endl;
}

