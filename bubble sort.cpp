#include <iostream>
#include <time.h>
using namespace std;

int main() {
	int temp, L;
	cout<<"Inserire la lunghezza dell'array: ";
	cin>>L;
	int v[L];

	//creazione vettore casuale
	srand(time(0));
	for(int i=0; i<L; i++) {
		v[i]=rand()%L;
	}

	//stampa vettore
	cout<<"v = {";
	for(int i=0; i<L; i++) {
		cout<<v[i]<<", ";
	}
	cout<<"\b\b} "<<endl<<endl;

	//bubble sort
	for(int i=0; i<L; i++) {
		for(int j=0; j<(L-i-1); j++) {
			if(v[j]>v[j+1]) {
				temp=v[j];
				v[j]=v[j+1];
				v[j+1]=temp;
				cout<<"v = {";
				for(int i=0; i<L; i++) {
					cout<<v[i]<<", ";
				}
				cout<<"\b\b} "<<endl;
			}
		}
	}

	return 0;
}
