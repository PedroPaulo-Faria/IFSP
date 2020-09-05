#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

bool matrizesiguais;
	
void Verificar(int *mat1[9],int *mat2[9])
{
	int verificador=0;

	
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<3;j++)
		{
			if(mat1[i][j]==mat2[i][j]&& verificador==0)
			{				
				matrizesiguais=true;
				
			}
			else
			{
				matrizesiguais=false;
				verificador=1;							
			}			
			
		}		
		
		
	}
	
}

void Resultado(bool matriz)
{
	if(matriz==true)
	{
		cout<<endl;
		cout<<"matrizes iguais!!";
		cout<<endl;
	}
	else
	{
		cout<<endl;
		cout<<"matrizes diferentes!!";
		cout<<endl;
	}
}



int main(int argc, char** argv)
{
	int **mat1;
	int **mat2;
	
	mat1= new int*[3];
	for(int i=0;i<3;++i)
	{
		mat1[i]=new int[3];
	}
	
	mat2= new int*[3];
	for(int i=0;i<3;++i)
	{
		mat2[i]=new int[3];
	}
	
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<3;++j)
		{
			cout<<"Digite o " <<j+1<<" valor da "<<i+1<<" coluna da matriz 1: ";
			cin>>mat1[i][j];			
		}
		cout<<endl;
	}
	
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<3;++j)
		{
			cout<<"Digite o " <<j+1<<" valor da "<<i+1<<" coluna da matriz 2: ";
			cin>>mat2[i][j];			
		}
		cout<<endl;
	}

	cout<<endl;
	cout<<"matriz 1:"<<endl;
		
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<3;++j)
		{			
			cout<<mat1[i][j]<<"|";
		}
		cout<<endl;
	}
		
	cout<<endl;
	cout<<"matriz 2:"<<endl;
	
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<3;++j)
		{			
			cout<<mat2[i][j]<<"|";
		}
		cout<<endl;
	}
	
	Verificar(mat1,mat2);
	Resultado(matrizesiguais);	


	
	return 0;
}