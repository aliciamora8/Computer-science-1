/*
 Ejercicio 8
*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
    float a1 , a2 , b1 , b2 , c1 , c2 , dAB , dBC , dAC;
    
cout << "Defina el punto A:\n" ;
cout << "El valor x es";
cin >> a1 ;
cout << "El valor y es";
cin >> a2 ;
cout << "Defina el punto B:\n"  ;
cout << "El valor x es";
cin >> b1 ;
cout << "El valor y es";
cin >> b2 ;
cout << "Defina el punto C:\n" ;
cout << "El valor x es";
cin >> c1 ;
cout << "El valor y es";
cin >> c2 ;

dAB = (abs(a1-b1)+abs(a2-b2))/2;
dBC = (abs(b1-c1)+abs(b2-c2))/2;
dAC = (abs(a1-c1)+abs(a2-c2))/2;

cout << "La suma de las distancias de A a B y de B a C es igual a " << dAB + dBC<< "\n";
cout << "La distancia de A a C es igual a " << dAC ;
  return 0;
}

