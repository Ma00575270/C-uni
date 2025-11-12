#include<iostream>
#include<string>
#include <typeinfo> 
#include <cmath>
#include <vector>


using namespace std;

void operaNumeros() {
	float num1;
	float num2;
	char action;
	bool tryAgain = true;

	while (tryAgain) {
		bool fail = false;

		cout << "Ingresa 2 numeros\n";
		cin >> num1;
		cin >> num2;
		if (cin.fail()) {
			fail = true;
			cin.clear();
			cin.ignore(1000, '\n');
		}


		cout << "Que quieres hacer con los numeros\n";
		cout << "Escribe la lentra en parentesis para seleccionar la opción\n";
		cout << "Suma(S),Resta(R){primero-segundo},Multiplicación(M)\n";
		cin >> action;
		action = toupper(action);
		//83=S, 82=R, 77=M
		if ((action == 83) or (action == 82) or (action == 77)) {

			tryAgain = false;
			
			if (fail == true) {
				tryAgain = true;	
				cout<< "Parece ser que no ingresaste un numero, vuelve a intentar\n";

			}

		}
		else {
			cout << "Parece ser que ingresaste una letra erronea, vuelve a intentar\n";

		}

	}
	if (action == 83) {
		cout << "Tu resultado de tu suma es " << (num1 + num2) << endl;
	}
	if (action == 82) {
		cout << "Tu resultado de tu restaes " << (num1 - num2) << endl;
	}
	if (action == 77) {
		cout << "Tu resultado de tu multiplicación es " << (num1 * num2) << endl;
	}

}
void numeroImpar() {

	float isOdd;
	bool repet=true;

	while (repet) {
		cout << "Ingresa un numero impar, no seras libre hasta que ingreses un numero impar\n";
		cin >> isOdd;
		if ((fmod(isOdd, 2) > 0)|| (fmod(isOdd, 2) < 0)) {
			repet = false;
		}
	}
	cout << "Eres libre\n";
}
void mediaAritmetica() {
	int numOfElements=0;
	float totalSum=0;
	float inUseNum;
	

	cout << "Vamos a sacar el promedio, primero indicame el numero de elementos a analizar\n";
	cin >> numOfElements;

	for (int i = 0;i < numOfElements;i++) {
		cout << "Ingres tu elemento " << i + 1 << endl;
		cin >> inUseNum;
		totalSum = totalSum + inUseNum;


	}
	cout << "El promedio de tus numeros es " << (totalSum / numOfElements);

	//num màgico 
	#include <iostream>
#include <cstdlib>   // Para rand() y srand()
#include <ctime>     // Para time()

using namespace std;

int main() {
    srand(time(0)); // Inicializa la semilla para generar números aleatorios

    int numeroMagico = rand() % 100 + 1; // Número aleatorio entre 1 y 100
    int numeroUsuario;
    int intentos = 0;

    cout << "adivina el número mágico entre 1 y 100" << endl;

    do {
        cout << "ingresa tu número: ";
        cin >> numeroUsuario;

        // Validar que esté dentro del rango
        if (numeroUsuario < 1 || numeroUsuario > 100) {
            cout << "Ingresa un número entre 1 y 100" << endl;
            continue;
        }

        intentos++;

        if (numeroUsuario < numeroMagico) {
            cout << "màs" << endl;
        } else if (numeroUsuario > numeroMagico) {
            cout << "menos" << endl;
        } else {
            cout << "Acertaste el valor del nùmero mágico " << numeroMagico
                 << " después de " << intentos << " intentos" << endl;
        }

    } while (numeroUsuario != numeroMagico);

    return 0;
} 
	
	

}

int main() {
	//operaNumeros();
	mediaAritmetica();


	




	return 0;
}

//conversionCelsiusFarenheit
#include <iostream>
#include <iomanip>  

using namespace std;

int main() {
    double celsiusIni, incre, fahren;
    int numConv;

    cout << "Conversión de grados Celsius a Fahrenheit" << endl;

    cout << "Ingresa el valor inicial en Celsius: ";
    cin >> celsiusIni;

    cout << "Ingresa el número de conversiones que se harán: ";
    cin >> numConv;

    cout << "Ingresa el incremento entre los valores Celsius: ";
    cin >> incre;

    cout << endl;
    cout << "FAHRENHEIT   CELSIUS" << endl;
    cout << fixed << setprecision(2);

    double celsius = celsiusIni;

    for (int i = 0; i < numConv; i++) {
        fahren = (9.0 / 5.0) * celsius + 32;
        cout << setw(10) << fahren << "   " << setw(7) << celsius << endl;
        celsius += incre; // ← aquí se corrigió el nombre de la variable
    }

    return 0;
}

//serieAritmetica
#include <iostream>
using namespace std;

int main() {

    int a = 1;    
    int d = 3;   
    int n = 25; 

    int termino; 
    int suma = 0; 

    cout << "serie aritmética con a = " << a << ", d = " << d << ", n = " << n << endl;
    
    for (int i = 1; i <= n; i++) {
        termino = a + (i - 1) * d; 
        cout << "tèrmino " << i << ": " << termino << endl;
        suma += termino; 

    cout << "valor total de la serie: " << suma << endl;

    return 0;
}

//mediasGeometricaArmonica
#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    double x;            
    double producto = 1;  
    double sumaReciprocos = 0;
    int n = 0;       

    cout << "Càlculo de medias geomètrica y armònica" << endl;
    cout << "Introduce números positivos (0 para terminar): " << endl;

    while (true) {
        cin >> x;
        if (x == 0) break;     
        if (x < 0) {
            cout << "nùmero inválido. introduce solo valores positivos" << endl;
            continue;
        }
        producto *= x;           
        sumaReciprocos += 1 / x;  
        n++;
    }

    if (n == 0) {
        cout << "no se ingresaron datos vàlidos" << endl;
        return 0;
    }

    double mediaGeometrica = pow(producto, 1.0 / n);
    double mediaArmonica = n / sumaReciprocos;

    cout << endl;
    cout << "resultados:" << endl;
    cout << "media geomètrica = " << mediaGeometrica << endl;
    cout << "media armònica   = " << mediaArmonica << endl;

    return 0;
}
