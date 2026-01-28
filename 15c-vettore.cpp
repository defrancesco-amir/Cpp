#include <iostream>
using namespace std;

int main(){
    int n, media, somma=0;
    
    do{
        cout << "Inserisci una dimensione dell'array valida: ";
        cin >> n;
    } while (n<2);
    
    int v[n];
    
    for(int i=0; i<n; i++){
        cout << "Valore "<<i<<": ";
        cin >> v[i];
    }
    
    int min=v[0], max=v[0];
    
    for(int i=0; i<n; i++){
        if(v[i]<min)
            min=v[i];
    }

    for(int i=0; i<n; i++){
        if(v[i]>max)
            max=v[i];
    }
    
    for(int i=0; i<n; i++)
        somma=+v[i];
        
    media=somma/(float)n;
    
    cout << "Il valore massimo è "<< max << endl;
    cout << "Il valore minimo è "<< min << endl;
    cout << "La media è "<< media << endl;
    
    return 0;
}