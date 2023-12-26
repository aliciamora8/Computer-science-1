#include <iostream>
#include <cmath>
using namespace std;

int main (){
int tam, vec, k;
int vector[100];
cout << "Introduce el tamaño del vector (<100): ";
cin >> tam;

for (vec=0;vec<tam;vec++){
cout << "Introduce un valor del vector (pos=" << vec << "):";
cin >> vector[vec];
}

cout << "V["<<tam<<"]={";
for (vec=0;vec<tam-1;vec++){
  cout << vector[vec]<<",";
}
cout << vector[tam-1] << "}";

//segunda parte
cout<< "Introduce un valor k";
cin<< k;

}	
