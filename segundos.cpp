//Ejercicio 10

#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int a,b,c,d,e;
	
    
 cout << "Introduce una cantidad de segundos ";
 cin >> a;
 
 b=a/3600;
 c=a%3600;
 d=c/60;
 e=c%60;
 
 
 cout << "Eso equivale a " <<b<< "horas, " <<d<< "minutos y " <<e<< "segundos." ;

  return 0;
}
