#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n,q;

    cin >> n >> q;
    
    vector<long long int>v(n+1);
    vector<long long int>pref(n+1);

    for (int i=1;i<=n; i++){
        cin >> v[i];
    }
    
    pref[0] =0;

    for (int i=1; i<=n;i++){
        pref[i]=pref[i-1]+v[i];
    }

    for (int i=0; i<q; i++){
        long long int a,b;
        cin >> a >> b;
        cout << pref[b] - pref[a-1] << "\n";
    }

}
