// Programa que lee un archivo CSV para texto
// Creado por Cesar Aceros
//Editado por Juan Sebastian Gomez Vera
// Inspirado en: https://www.codespeedy.com/read-data-from-csv-file-in-cpp/
//


#include <iostream>
#include<fstream>
#include<string>
#include<stdio.h>
#include <sstream>


using namespace std;

void read()
{
	ifstream archivo;
	string linea;
	
	
	// Open an existing file
	archivo.open("Book1.csv");
	
	while (std::getline (archivo, linea)) {
		std::istringstream l(linea); 
		std::string a; 

		while(std::getline(l, a, ',')) { 
 			std::cout << a << '\n'; 
		} 
		
		
	}
	archivo.close();
}
int main()
{
	read();
	return 0;
}
