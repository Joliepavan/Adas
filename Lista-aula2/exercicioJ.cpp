#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;  
    
    set<int> faltando; 
    
    for (int i = 1; i <= N; i++) {
        faltando.insert(i);
    }
    
    for (int i = 0; i < M; i++) {
        int num;
        cin >> num;
        faltando.erase(num);
    }
    
    cout << faltando.size() << endl;
    
    for (int num : faltando) {
        cout << num << " ";
    }
    cout << endl; 
    
    return 0;
}
