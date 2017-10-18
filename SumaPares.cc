// Programa que suma los números pares entre el uno y el Veinte
// Autor: Faustino Moisés Amador García
// Creado el 18 de Octubre de 2017
# include <iostream> 				//Librerias que se utilizan
using namespace std;

int main ()					//Comenzamos el cuerpo del programa
{
	int sum=0;				//Definimos variables
	int count=1;
	while (count<=20 ) {			//Estructura de while
		if((count%2)==0){
	        	sum = sum + count;
		}  
		count++;
	}
	cout<<"suma "<<sum<<endl;
	return 0;
}
