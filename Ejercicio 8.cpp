//Ejercicio 8


#include <iostream>
#include <cmath>
using namespace std;

int main () {
    float a1 , a2 , b1 , b2 , c1 , c2 , dAB , dBC , dAC;
 // Definimos los puntos A, B, C.  
cout << "Para definir el punto A:\n" ;
cout << "El valor x es";
cin >> a1 ;
cout << "El valor y es";
cin >> a2 ;
cout << "Para definir el punto B:\n"  ;
cout << "El valor x es";
cin >> b1 ;
cout << "El valor y es";
cin >> b2 ;
cout << "Para definir el punto C:\n" ;
cout << "El valor x es";
cin >> c1 ;
cout << "El valor y es";
cin >> c2 ;
//Calculamos las distancias
dAB = (abs(a1-b1)+abs(a2-b2))/2;
dBC = (abs(b1-c1)+abs(b2-c2))/2;
dAC = (abs(a1-c1)+abs(a2-c2))/2;
//Mostramos los resultados
cout << "La suma de las distancias de A a B y de B a C es:" << dAB + dBC<< "\n";
cout << "La distancia de A a C es: " << dAC ;
  return 0;
}
