#include<bits/stdc++.h>
using namespace std;

void RestadeMatrices();

int main(){
	RestadeMatrices();
	system("pause");
	return 0;
}

void RestadeMatrices(){
	ofstream archivo;
	int f1,f2,c1,c2;
	int A[10][10];
	int B[10][10];
	int C[10][10];
	
	//COMPLETE LOS DATOS DE LA MATRIZ A
	cout<<"\tMATRIZ A...complete\n"<<endl;
	cout<<"Ingrese el numero de filas: ";cin>>f1;
	cout<<"Ingrese el numero de columnas: ";cin>>c1;
	
	for(int i=0;i<f1;i++){
		for(int j=0;j<c1;j++){
			cout<<"A["<<i<<"]["<<j<<"]:";
			cin>>A[i][j];
		}
	}
	
	//COMPLETE LOS DATOS DE LA MATRIZ B
	cout<<"\tMATRIZ B...complete\n"<<endl;
	cout<<"Ingrese el numero de filas: ";cin>>f2;
	cout<<"Ingrese el numero de columnas: ";cin>>c2;
	
	for(int m=0;m<f2;m++){
		for(int n=0;n<c2;n++){
			cout<<"B["<<m<<"]["<<n<<"]:";
			cin>>B[m][n];
		}
	}
	
	archivo.open("DIFERENCIAMATRICES.txt",ios::out);
	
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
	
	if((f1==f2)and(c1==c2)){
		archivo<<"\n\tRESTA DE LA MATRIZ A - LA MATRIZ B\n"<<endl;
		for(int i=0;i<f1;i++){
			for(int j=0;j<c1;j++){
				C[i][j]=A[i][j]-B[i][j];
			}
		}
		
		for(int i=0;i<f1;i++){
			for(int j=0;j<c1;j++){
				archivo<<C[i][j]<<"\t";
			}
			archivo<<endl;
		}
	}

	
	archivo.close();
}