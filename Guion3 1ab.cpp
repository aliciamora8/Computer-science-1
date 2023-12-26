#include <iostream>
#include <cmath>
using namespace std;

int main (){
	
	int ver_minimo[5]={4,3,9,3,8};
	int pos;
	int posicion;
	int min=ver_minimo[0];
	for (pos=0; pos<5; pos++){
		if (ver_minimo[pos]<min){
			min=ver_minimo[pos];
			posicion=pos+1;
		}
	}
	cout << "El minímo es: " << min << " y se encuentra en la posición: " << posicion << endl;
	
}
