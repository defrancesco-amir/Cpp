#include <iostream>
#include <time.h>
using namespace sint main() {
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

	//exchange sort
	for(int i=0; i<L; i++) {
		for(int j=i+1; j<L; j++) {
			if(v[j]<v[i]) {
				temp=v[i];
			    v[i]=v[j];
				v[j]=temp;
			}
		}
		cout<<"v = {";
			for(int i=0; i<L; i++) {
				cout<<v[i]<<", ";
			}
			cout<<"\b\b} "<<endl;
	}

	return 0;
}
