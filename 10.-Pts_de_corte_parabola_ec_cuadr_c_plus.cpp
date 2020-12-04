/*Este programa muestra las 2 soluciones para una ecuaci�n cuadr�tica de segundo grado,
 esta f�rmula muestra los puntos de corte de la par�bola con el eje de abscisas.*/
 
#include <iostream> //Librer�a est�ndar de entrada de datos
#include <locale.h> //Librer�a est�ndar de localizaci�n (regionalizaci�n)
#include <math.h> //Librer�a est�ndar de operaciones b�sicas de matem�ticas permite usar sqrt y pow.

using namespace std; //Acceso al espacio de nombres, permite usar cin y cout.

int main(){ //Inicio del programa.
	setlocale(LC_CTYPE, "Spanish"); //Llamamos la librer�a y le asignamos el valor: "Idioma espa�ol"
	
	/*Declaramos las variables iniciales y las dos variables que realizar�n las operaciones.
	estas 2 �ltimas se inician en cero*/
	float a,b,c, equis1 = 0, equis2 = 0; 
	
	cout<<"Para calcular los puntos de corte de la par�bola con el eje de abscisas"; //Imprimimos este mensaje en pantalla
	cout<<"\nIngresa el valor de a: "; //Solicitamos el valor de "a" con \n agregamos el salto de l�nea.
	cin>>a; //Almacenamos el valor de "a"
	cout<<"Ingresa el valor de b: "; //Solicitamos el valor de "b"
	cin>>b; //Almacenamos el valor de "b"
	cout<<"Ingresa el valor de c: "; //Solicitamos el valor de "c"
	cin>>c; //Almacenamos el valor de "c"
	cout<<"\nLos puntos de corte de la par�bola se encuentran es: ";
	cout<<"\nEl valor de x1 es: "<<endl;// "\n" = Salto de l�nea Imprimimos en pantalla este mensaje
	equis1 = ((-1*(b))+(sqrt(pow(b,2)-(4*a*c))))/(2*a); //Realizamos la operaci�n para x1
	cout.precision(3); //Damos una precisi�n de 1 entero y dos decimales a la salida de las variables de salida.
	cout<<"("; //Imprimimos el par�ntesis que abre
	cout<<equis1; //Imprimimos el valor de equis1
	cout<<",0)"; //Imprimimos el cero y el par�ntesis que cierra.
	cout<<"\nEl valor de x2 es: "<<endl;// "\n" = Salto de l�nea Imprimimos en pantalla este mensaje
	equis2 = ((-1*(b))-(sqrt(pow(b,2)-(4*a*c))))/(2*a); //Realizamos la operaci�n para x2
	cout<<"("; //Imprimimos el par�ntesis que abre
	cout<<equis2; //Imprimimos el valor de equis2
	cout<<",0)";//Imprimimos el cero y el par�ntesis que cierra.
	
	return 0;
}

/*Este programa fue escrito por Emilio Carca�o Bringas*/
