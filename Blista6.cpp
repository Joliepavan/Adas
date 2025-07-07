#include <bits/stdc++.h>

using namespace std;
int main(){
    
    int testcases,x,n;
    cin >> testcases;
    
    int i= 0;

    vector<int>inicial;
    vector<int>inicio;
    vector<int>fim;

    for (int i=0; i<testcases; i++){
        cin >> n;
        
        int j= n-1;
        int k=0;
        
    for (int i=0; i<n; i++){
        cin >> x;
        inicial.push_back(x);
    }
        while (i<=j){
        if(k%2==0){
        inicio.push_back(inicial[i]);

        } else {
        fim.push_back(inicial[j]);
            
       }
       
    }
    k++;
}
    
    cout << inicio[0] << " " << fim[0] << endl;
    return 0;
}
