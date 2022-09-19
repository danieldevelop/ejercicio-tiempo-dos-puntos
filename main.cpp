#include <iostream>
#include <stdexcept>
#include <conio.h>

using namespace std;

int main() 
{
	int kilometros;
	int velocidad;
	int tiempo;
	
	try {
		cout << "Ingrese los km hacia el punto del destino: " << endl;
		cin >> kilometros;
		
		cout << "Ahora digite la velocidad que recorrera para llegar a su destino: " << endl;
		cin >> velocidad;
		
		if (kilometros == 0 && velocidad == 0) {
			cout << "ESTIMADO EL VALOR QUE INGRESE DEBE SE MAYOR A 0" << endl;
		} else { 
			tiempo = (kilometros / velocidad);
			cout << "El tiempo de demora a su punto de destino es: " << tiempo << " hora." << endl;
		}
		
	} catch (const char * ex) {
		cout << "Error " << ex << endl;
	}
	
	getche();
	return 0;
}
