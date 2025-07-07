#include <bits/stdc++.h>

using namespace std;

int main() {
    int S[8];
    for (int i = 0; i < 8; i++) {
        cin >> S[i];
    }

    bool cond = true;

    for (int i = 0; i < 8; i++) {
        if (S[i] < 100 || S[i] > 675) {
            cond = false;
            break;
        }

        if (S[i] % 25 != 0) {
            cond = false;
            break;
        }

        if (i > 0 && S[i] < S[i - 1]) {
            cond = false;
            break;
        }
    }

    cout << (cond ? "Yes" : "No") << endl;

    return 0;
}
