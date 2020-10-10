 #include <iostream>
using  namespace std;

#define MAX 30

struct Pilha {
	int qtde;
	int nos[MAX];
};

Pilha* init() {
	Pilha *p = new Pilha;
	p->qtde = 0;
	return p;
}

int isEmpty(Pilha *p) {
	return (p->qtde == 0);
}

int count(Pilha *p) {
	return p->qtde;
}

int push(Pilha *p, int v) {
	int podeEmpilhar = (p->qtde < MAX);
	if (podeEmpilhar) {
		p->nos[p->qtde] = v;
		p->qtde++;
	}
	return podeEmpilhar;
}

int pop(Pilha *p) {
	int ret;
	int podeDesempilhar = (p->qtde > 0);
	if (podeDesempilhar) {
		ret = p->nos[p->qtde - 1];
		p->qtde--;
	}
	else
	{
		ret = -1;
	}
	return ret;
}

void print(Pilha *p) {
	for(int i = p->qtde-1; i >= 0; --i) {
		cout << p->nos[i] << endl;
	} 
	cout << "------------------" << endl;
}

void freePilha(Pilha *p)
{
	free(p);
}

int main(int argc, char** argv)
{
	Pilha *par;
	Pilha *impar;
	int num;
	int ant;
	int cont=0;
	int cont2=0;
	
	par= init();
	impar=init();
	
	while(cont<MAX)
	{
		ant=num;
		cout<<"Digite "<<(cont2=cont+1)<<"o numero: ";
		cin>>num;
		cout<<endl;
		if(cont>0){
			while(ant>=num)
			{
			cout<<"Digite um numero maior: ";
			cin>>num;
			cout<<endl;
			}			
		 }	
		 		 
		 if(num%2==0){
			 push(par,num);
		 }
		 else{
			 push(impar,num);
		 }	 
		
		cont++;
		
	}
	cout<<endl;	

				
		if(impar->qtde==0){
			
			while(par->qtde!=0)
			{
				cout<<pop(par)<<endl;
			}
		}
		else if(par->qtde==0)
		{
			while(impar!=0)
			{
				cout<<pop(impar)<<endl;
			}
		}
		else
		{				
		
			while(par!=0 || impar!=0)
			{			
				
				
				if(par->nos[par->qtde] > impar->nos[impar->qtde]){
								
					cout<<pop(par)<<endl;
				}
				else if(par->nos[par->qtde] <impar->nos[impar->qtde])
				{
					cout<<pop(impar)<<endl;
				}				
				
			}
		}
	
	
	
	return 0;
}