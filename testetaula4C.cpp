#include<bits/stdc++.h>

using namespace std;

int main(){
    int grupos,limite;
    int qtnd=1;
    int sobra;
    queue<int>fila;

    cin >> grupos >> limite;

    for (int i=0; i<grupos;i++){
    
    int a, sobra;
    cin >> a;
    fila.push(a);
    }
    
    sobra= limite- fila.front();

    for (int i=0; i<limite;i++){
    
    fila.pop();
    if(sobra<fila.front()){
        fila.pop();
        qtnd++;
    } else {
        sobra-=fila.front();
        fila.pop();
    }
    }

    cout<<qtnd<< endl;

    return 0;

}
