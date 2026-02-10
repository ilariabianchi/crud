#include <iostream>
using namespace std;

//parametri: vettore, dimensione, elemento da cercare
void cerca(int v[], int d, int n){
	
	for(int i=0; i<d; i++){
		if(v[i]==n){
			cout<<"l'elemento si trova in posizione: "<<i<<endl;
		}
		else{
			cout<<"-1";
		}
	}
}


void inserisci(int v[], int &d){
	
}

void visualizza(int v[], int d){
	
	
}

void modifica(int v[], int d){
	
}

void cancella(int v[], int d){
	
}

int main(int argc, char** argv) {
	int v[10];
		int dim=0, n=0;
		int opzione;
	do{

		cout<<"1 - inserimento \n2 - visualizzazione \n3 - modifica \n4 - cancellazione \n5 - cerca\n";
		cout<<"inserisci l'opzione: ";
		cin>>opzione;
		
		switch(opzione){
			case 1: 
			//inserimento
			break;
			case 2:
			//visualizzazione
			break;
			case 3:
			//modifica
			break;
			case 4:
			//cencellazione
			break;
			case 5:
			//cerca
			break;
		}
	
	}while(opzione!=0);
}
