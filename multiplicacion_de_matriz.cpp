#include<bits/stdc++.h>
using namespace std;

void multiplicaciondeMatrices();

int main(){
	multiplicaciondeMatrices();
	system("pause");
	return 0;
}

void multiplicaciondeMatrices(){
	ofstream archivo;
	int f1,f2,c1,c2;
	int A[10][10],B[10][10];
	int C[10][10];
	
	//MATRIZ A...
	cout<<"MATRIZ A...\n"<<endl;
	cout<<"Ingrese el numero de filas: "; cin>>f1;
	cout<<"Ingrese el numero de columnas: "; cin>>c1;
	
	for(int i=0;i<f1;i++){
		for(int j=0;j<c1;j++){
			cout<<" A["<<i<<"]["<<j<<"]: ";
			cin>>A[i][j];
		}
	}
	cout<<endl;
	
	//MATRIZ B...
	cout<<"\nMATRIZ B...\n"<<endl;
	cout<<"Ingrese el numero de filas: "; cin>>f2;
	cout<<"Ingrese el numero de columnas: "; cin>>c2;
	
	for(int i=0;i<f2;i++){
		for(int j=0;j<c2;j++){
			cout<<" B["<<i<<"]["<<j<<"]: ";
			cin>>B[i][j];
		}
	}
	
	
	archivo.open("multiplicacionMatriz.txt",ios::out);
	
	if(c1==f2){
		
		archivo<<"MATRIZ A...\n"<<endl;
		for(int i=0;i<f1;i++){
			for(int j=0;j<c1;j++){
				archivo<<A[i][j]<<"\t";
			}
			archivo<<endl;
		}
		
		cout<<endl;
		
		archivo<<"\nMATRIZ B...\n"<<endl;
		for(int i=0;i<f2;i++){
			for(int j=0;j<c2;j++){
				archivo<<B[i][j]<<"\t";
			}
			archivo<<endl;
		}
		
		//MATRIZ C
		for(int i=0;i<f1;i++){
			for(int j=0;j<c2;j++){
				C[i][j]=0;
			}
		}
		
		for(int i=0;i<f1;i++){
			for(int j=0;j<c2;j++){
				for(int k=0;k<c1;k++){
					C[i][j]=C[i][j]+A[i][k]*B[k][j];
				}
			}
		}
		
		cout<<endl;
		
		//MOSTRANDO MATRIZ C
		archivo<<"\nMATRIZ C...\n"<<endl;
		for(int i=0;i<f1;i++){
			for(int j=0;j<c2;j++){
				archivo<<C[i][j]<<"\t";
			}
			archivo<<endl;
		}
		
		
	}else{
		archivo<<"\nNo se puede multiplicar estas matrices."<<endl;
	}
	archivo.close();
}