#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int X;
    cin >> X; 

    long long int fatorial= 1;
    int N=1;

    while (fatorial<X) {
        N++;
        fatorial*=N;
    }

    cout << N << "\n";
    return 0;
}
