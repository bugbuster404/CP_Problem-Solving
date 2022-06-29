#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int n,z;
        cin >> n >> z;
        int ans = 0;
        while(n--){
            int num; cin >> num;
            ans = max(ans, z | num);
        }
        cout << ans << endl;
    }
    return 0;
}

// Question: https://codeforces.com/contest/1696/problem/A