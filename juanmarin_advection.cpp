#include <iostream>
#include <ctime>
using namespace std;

//vector
double* vector = NULL;
vector = new double[700];

//matriz
double **Y = new double*[4000];
//variables
int C =1 ; 
double deltat = 0.001; 
int itera = 700; 
double deltax = 0.01; 

//funcion que resurlve la ecuacion. 
//declaracion
double Y_adelante(double Y, double deltat, double deltax, int i, int j); 
//despejando el t+1 y funcion que lo ejecuta para un tiempo. 
void Y_adelante(double Y, double deltat, double deltax, int i , int j){
	Y[i][j+1] = Y[i][j] - deltat*C*((Y[i-1][j] - Y[i][j])/deltax);
	

}

int main(){
int i; 
int j; 
//condicion inicial. 
for(i = 0 ; i< 4000 ; i++){
	
		if(i>-0.5 && i< 0.5){
			Y[i][0]= 0.5;

}
		else(){
			Y[i][0] = 0; 

}
}


//recorrido en el tiempo para la funcion
for(j=1; j<itera ; j++){

	for(j=1; j<itera ; j++){
		Y_adelante(Y,deltat,deltax, i, j); 
		

}
cout << Y_adelante << " " << endl;
}









return 0 ; 
}
