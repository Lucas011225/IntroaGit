#include <iostream>

using namespace std;

class clasecita{
	public: 
	
	int operator-(int a, int b){
		return a-b;
	}	
	double operator-(double a, double b){
		return a-b;
	}
};


int main(){

	int ent1=5;
	int ent2=8;
	double doble1=2.5;
	double doble2= 5.9;
	
	int valore;
	double valord;

	clasecita nuevoValor;
	
	valore= nuevoValor.operator-(ent1, ent2);
	cout<< "Valor entero:"<<valore;
	
	valord= nuevoValor.operator-(doble1, doble2);
	cout<< "Valor double:"<<valord;


return 0;
}
