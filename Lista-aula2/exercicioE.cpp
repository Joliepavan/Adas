#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N; 

    int exp = 1;

    for (int i = 1; i <= N; i++) {
        exp *= 2;
    }

    cout << exp << "\n";
    return 0;
}
