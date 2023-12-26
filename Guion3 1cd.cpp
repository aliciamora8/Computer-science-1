#include <iostream>
#include <cmath>
using namespace std;

int main (){
	
	int ver_maximo[5]={4,3,9,3,9};
	int pos;
	int posicion;
	int max=0;
	for (pos=0; pos<5; pos++){
		if (ver_maximo[pos]>max){
			max=ver_maximo[pos];
			posicion=pos+1;
		}
	}
	cout << "El maximo es: " << max << " y se encuentra en la posición: " << posicion << endl;
	
}
