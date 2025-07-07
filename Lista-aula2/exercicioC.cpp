#include <bits/stdc++.h>
#include <string>

using namespace std;

int main (){
 int J;
 string S, resultado;

 cin >> J;
 
 for(int i=0; i<J; i++){
 string p;
 cin >> S;
  for (int i=0; i<S.size()-2;i++){
    p.push_back(S[i]);
  }
  p.push_back('i');
  cout << p << "\n";
 }


    return 0;
}
