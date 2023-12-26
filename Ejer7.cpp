#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n, colum, fila, min, max, fila_encontrado, colum_encontrado, fila_encontrad, colum_encontrad;
	
	cout << "Introduce el numero de ciudades: ";
	cin >> n;
	 
	int D[n][n]; 
	
	for (fila=1; fila<=n; fila++){
	
	for (colum=fila; colum<n; colum++){
		cout << "Introduce la distancia desde " << fila << " hasta " << colum+1 << endl;
		cin >> D[fila][colum];
	
	}
}
	//D[fila][fila]=0;
	//D[colum][colum]=0;
	D[fila][colum]=D[colum][fila];	
	
//	for (fila=1; fila<=n; fila++){
//		for (colum=fila; colum<n; colum++){
//			cout << D[fila][colum] << "     ";
//		}
//		cout<<endl;
//}

// ¿Cuáles son las ciudades más cercanas?
	
	min=D[1][2];
	for (fila=1; fila<=n; fila++){
	
	for (colum=fila; colum<n; colum++){
		if (D[fila][colum]<min){
			min=D[fila][colum];
			fila_encontrado=fila;
			colum_encontrado=colum ;
		}
		
	}
}
//cout << "Mínimo= " << min<<endl; 
cout << "Las ciudades mas cercanas son " << fila_encontrado << " y " << colum_encontrado+1<<endl;


// ¿Cuáles son las ciudades más lejanas?

max=D[1][2];
	for (fila=1; fila<=n; fila++){
	
	for (colum=fila; colum<n; colum++){
		if (D[fila][colum]>max){
			max=D[fila][colum];
			fila_encontrad=fila;
			colum_encontrad=colum ;
		}
		
	}
}
//cout << "Máximo= " << max<<endl; 
cout << "Las ciudades mas lejanas son " << fila_encontrad << " y " << colum_encontrad+1<<endl;


//¿Cuál es la longitud promedio de las carreteras?

	double suma, media, veces;
	suma=0;
	veces=0;
	for (fila=1; fila<=n; fila++){
	
		for (colum=fila; colum<n; colum++){
		
			suma=suma+D[fila][colum];
			veces++;
		}
	}
	//cout << "Suma= " << suma;
media=suma/veces;
cout << "La longitud promedio de las carreteras es: " << media <<endl;



//¿Cuál es la ciudad mejor conectada?

	if (fila=!colum){
		
	}
	

return 0;
}


