#include<bits/stdc++.h>
using namespace std;

void SumadeMatrices();

int main(){
	SumadeMatrices();
	system("pause");
	return 0;
}

void SumadeMatrices(){
	ofstream archivo;
	int f1,c1,f2,c2;
	int A[10][10];
	int B[10][10];
	int C[10][10];
	
	//MATRIZ A LLENE LOS DATOS
	cout<<"\tMATRIZ A...complete\n"<<endl;
	cout<<"Ingrese el numero de filas: ";cin>>f1;
	cout<<"Ingrese el numero de columnas: ";cin>>c1;
	
	for(int i=0;i<f1;i++){
		for(int j=0;j<c1;j++){
			cout<<"A["<<i<<"]["<<j<<"]: ";
			cin>>A[i][j];
		}
	}
	cout<<endl;
	
	//MATRIZ B LLENE LOS DATOS
	cout<<"\tMATRIZ B...complete\n"<<endl;
	cout<<"Ingrese el numero de filas: ";cin>>f2;
	cout<<"Ingrese el numero de columnas: ";cin>>c2;
	
	for(int m=0;m<f2;m++){
		for(int n=0;n<c2;n++){
			cout<<"B["<<m<<"]["<<n<<"]: ";
			cin>>B[m][n];
		}
	}
	
	
	archivo.open("SUMAMATRICES.txt",ios::out);
	if(archivo.fail()){
		cout<<"NO SE PUDO CREAR EL ARCHIVO";
		exit(1);
	}
	archivo<<"\n\tMATRIZ A\n"<<endl;
	for(int i=0;i<f1;i++){
		for(int j=0;j<c1;j++){
			archivo<<A[i][j]<<"\t";
		}
		archivo<<endl;
	}
	
	archivo<<endl;
	archivo<<"\n\tMATRIZ B\n"<<endl;
	for(int m=0;m<f2;m++){
		for(int n=0;n<c2;n++){
			archivo<<B[m][n]<<"\t";
		}
		archivo<<endl;
	}
	archivo<<endl;
	
	if((f1==f2)and(c1=c2)){
		archivo<<"\tSUMA DE MATRIZ A   +  MATRIZ B\n"<<endl;
		for(int x=0;x<f1;x++){
			for(int z=0;z<c1;z++){
				C[x][z]=A[x][z]+B[x][z];
			}
		}
		
		for(int x=0;x<f1;x++){
			for(int z=0;z<c1;z++){
				archivo<<C[x][z]<<"\t";
			}
			archivo<<endl;
		}
	}
	
	
	
	archivo.close();
}
