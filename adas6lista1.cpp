#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    int K, H, M;
    
    cin >> K;

    H=21; 

    if (K>=0 && K<10){
     M= K;
     cout << H << ":" << "0" << M;
    } else if (K>=10 && K<60){
     M= K;
     cout << H << ":" << M;
    } else if (K>=61 && K<=70){
     H=22;
     M= K-60;
     cout << H << ":" << "0" << M;
    } else {
     H=22;
     M= K-60;
     cout << H << ":" << M;
    }

    return 0;
}
