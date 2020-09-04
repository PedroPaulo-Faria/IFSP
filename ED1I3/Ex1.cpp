#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

double media;
double soma=0;
double contador=0;
	
void populaArray(int v[])
{

	for(int i=0; i<10; ++i)
	{
		cout<<"Digite o "<<i+1<<" valor:";
		cin>>v[i];				
	}

	
}

void Media(int v[])
{	
		
	for(int i=0;i<10;++i)
	{
		soma=soma+v[i];		
		contador++;
	}
	media=soma/contador;
	cout<<endl;
	cout<<"soma = "<< soma<<endl;	
	cout<<setprecision(2);	
	cout<<"media = "<<soma<<"/"<<contador<<"="<<media<<endl;
}

void numsMaior(int v[])
{
	double maiorNum=0;
	for(int i=0;i<10;++i)
	{
		if(v[i]>media)
		{
			maiorNum++;
		}
	}
	cout<<"numeros maiores que a media: "<<maiorNum <<endl;
}

int main(int argc, char** argv)
{
	int *v1;
	v1 = new int[10];
	
   populaArray(v1);
   Media(v1);
   numsMaior(v1);     
	
	return 0;
}