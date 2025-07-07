#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
    string S;

    cin >> S;

    vector<char>correto= {'h','i'};
    bool ordem = true;

    if(S.size() < correto.size() || S.size()%2 != 0){
        ordem = false;
    } else {
        for (int i=0; i<correto.size(); i++){
            if (S[i]!= correto[i]) {
                ordem = false;
                break;
            }
        }
    }

   if (ordem) {
    cout << "Yes" << endl;
   } else {
    cout << "No" << endl;
   }

  return 0;
}

