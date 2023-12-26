#include <iostream>
#include <cmath>
using namespace std;

int main (){
	
	int ver_media[5]={4,3,9,3,6};
	int pos;
	int suma=0;
	int media;
	for (pos=0; pos<5; pos++){
		suma=suma+ver_media[pos];
	}
	media=suma/pos;
	cout << "La media de los valores es: " << media << endl;
	
}
