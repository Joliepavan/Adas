#include <bits/stdc++.h>

using namespace std;

int main (){
    int A;
    cin >> A;
    if (400%A == 0){
        int B;
        B=400/A;
        cout << B << "\n";
    } else {
        cout << "-1";
    }

    return 0;
}
