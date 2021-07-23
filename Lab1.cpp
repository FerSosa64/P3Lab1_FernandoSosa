#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int menu();
void ejercicio1(int);
void ejercicio2(int);

int main(int argc, char** argv) {
	int opcion = 0;
	while((opcion = menu()) != 3){
		if(opcion == 1){
			int n = 0;
			while(n < 1){
				cout<<"Ingrese el valor de n: ";
				cin>>n;
			}
			ejercicio1(n);
			
		}else{
			if(opcion == 2){				
				int x = 0;
			while(x < 1){
				cout<<"Ingrese el valor de x: ";
				cin>>x;
			}
			ejercicio2(x);				
			}
		}
	}	
	return 0;
}

int menu(){
	
	int opcionMenu=0;
	cout<<"\nMenu:\n"
	<<"1) Ejercicio 1\n"
	<<"2) Ejercicio 2\n"
	<<"3) Salir" << endl;
	
	cout<<"Ingrese su opcion: "; cin>>opcionMenu;
	
	return opcionMenu;
}

void ejercicio1(int n){
	double resultado = 0;
	for (int i = 1;i<=n;i++){
		double numerador = 2.0 * i - 1.0;
		double denominador = i * (i + 1.0);
		resultado += numerador / denominador;
	}
	cout<< "S("<<n<<") = "<<resultado<<endl;
}

void ejercicio2(int x){
	double resultado = 1.0/(1.0 + exp(x));
	cout << "f("<<x<<") = "<<resultado;
}
