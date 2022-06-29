#include <bits/stdc++.h>
using namespace std;
int main(){
  int n; cin >> n;
  while(n){
    for (int i = 0; i < n; i++)
  {
    if(i%2==0){
        cout << "I hate ";
    }
    else {
        cout << "I love you";
    }
    if (i==n){
        cout << "it" << endl;
    }
    else{
        cout << "that"  << endl;
    }
    
    }
  
  }
}

 // Question: https://codeforces.com/problemset/problem/705/A
