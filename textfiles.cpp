// Programa que lee un archivo CSV para texto.
// Creado por Cesar Aceros.
//Editado por Juan Sebastian Gomez Vera.
// Inspirado en: https://www.codespeedy.com/read-data-from-csv-file-in-cpp/
//


#include <iostream>
#include<fstream>
#include<string>
#include<stdio.h>
#include <sstream>
#include <ctype.h>

using namespace std;

void read() //declaramos una funcion de lectura.
{
	ifstream archivo;
	string linea; //declaramos una variable string donde almacenaremos linea por linea.
	
	
	// Open an existing file
	archivo.open("Book1.csv"); //abrimos le archivo a leer.
	
	while (std::getline (archivo, linea)) { //creamos un ciclo para la lectura linea por linea.
		std::istringstream l(linea); //indica esta lectura.
		std::string a; //declaramos una variable a, donde estará almacenada cada dato.
		while(std::getline(l, a, ',')) { //indicamos que de la variable linea se lea a, que está separada por comas.
 			stringstream mystream(a);
			int i;
			if(mystream >> i) {// comprobamos si es un entero, si lo es lo imprimimos.
				std::cout << "ENTERO: " << a << '\n'; //imprimimos cada dato por renglon.
			}
			else { // si no lo es, imprimimos una cadena de caracteres.
				std::cout << "CADENA DE CARACTERES: " << a << '\n'; //imprimimos cada dato por renglon.
			}
		}
	}
	archivo.close();//cerramos el archivo.
}
int main()
{
	read();//llamamos la función antes definida.
	return 0;
}
