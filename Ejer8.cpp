#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int matriz[3][3];
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cout<<"Introduzca el valor ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
		}
	}
return 0;
}


