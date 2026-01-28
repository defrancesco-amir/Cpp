#include <iostream>
using namespace std;

int main(){
    int dim, val;                                
    cout << "Inserisci la dimensione dell'array: ";
    cin >> dim;
    int a[dim];
    
    for(int i=0; i<dim; i++){
        cout << "Inserisci il valore "<<i<<" dell'array: ";
        cin >> a[i];
    }
    
    
    
    cout << endl << "Inserisci il valore da cercare: ";
    cin >> val;
    for(int i=0; i<dim; i++){
        if(a[i]==val){
            cout << "Il valore è nell'indice "<<i<<" dell'array."; //correggere anche per casi multipli
            return 0;
        }
    }
    cout << "Il valore non è stato trovato.";
    return 0;
}
