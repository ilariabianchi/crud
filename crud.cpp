#include <iostream>
using namespace std;

//parametri: vettore, dimensione, elemento da cercare
int cerca(int v[], int d, int n){
	
	for(int i=0; i<d; i++){
		//se trova l'elemento restituisce la posizione
		if(v[i]==n){
			return i;
		}
	}
	//altrimenti restituisce -1
	return -1;
}

void aggiungi(int v[], int &d){
	cout<<"inserisci il valore da aggiungere: ";
	//inserisce nell'array il valore inserito e ne aumenta la dimesnione
	cin>>v[d];	
	d++;	
}

void visualizza(int v[], int d){
	if(d==0){
		//se la dimensione è zero non restituisce nessun valore
        cout<<"array vuoto"<<endl;
    }
    else{
    	//visualizza tutto l'array
    	for(int i = 0; i<d; i++){
        cout<<v[i]<<" ";
    	}	
	}
    cout<<endl;
}

void modifica(int v[], int d){
	//inserisco il valore da modificare
	int valore;
	cout<<"inserisci il valore da modificare: ";
	cin>>valore;
	
	//cerco la posizione di quel valore
	int posizione=cerca(v,d,valore);
	if(posizione==-1){
    	cout<<"valore non trovato"<<endl;
    } 
	else{
		//se lo trovo inserisco la modifica
        cout<<"inserisci il valore modificato: ";
        cin>>v[posizione];
    }
}


void cancella(int v[], int &d){
	//inserisco il valore da cancellare
	int valore;
	cout<<"inserisci il valore da cancellare: ";
	cin>>valore;
	
	int posizione=cerca(v, d ,valore);
	if(posizione==-1){
    	cout<<"valore non trovato"<<endl;
    } 
	else{
		//se lo trovo parto dalla posizione e sposto tutti i valori di una posizione diminuendo la dimensione dell'array
        for(int i=posizione; i<d-1; i++) {
            v[i]=v[i+1];
        }
        d--;
    }
}


int main(int argc, char** argv) {
	int v[]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	//trovo la dimensione
	int d=sizeof(v)/sizeof(v[0]), n=0;
	int opzione;
	do{
		cout<<"1 - inserimento \n2 - visualizzazione \n3 - modifica \n4 - cancellazione \n5 - cerca\n";
		cout<<"\ninserisci l'opzione: ";
		cin>>opzione;
		
		switch(opzione){
			case 1: {
				//inserimento
				cout<<endl;
				aggiungi(v, d);
				cout<<endl;
			}
			break;
			
			case 2:{
				//visualizzazione
				cout<<endl<<"array: ";
				visualizza(v, d);
				cout<<endl;	
			}
			break;
			
			case 3:{
				//modifica
				cout<<endl;
				modifica(v, d);
				cout<<endl;
			}
			break;
			
			case 4:{
				//cancellazione
				cout<<endl;
				cancella(v, d);	
				cout<<endl;
			}
			break;
			
			case 5:{
				//cerca
				cout<<endl<<"che numero vuoi cercare? ";
				cin>>n;
				int ricerca=cerca(v, d, n);
				cout<<"l'elemento si trova in posizione "<<ricerca<<endl<<endl;
				
			}
			break;
		}
	
	}while(opzione!=0);
}
