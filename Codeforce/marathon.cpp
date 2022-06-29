#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << (b > a) + (c > a) + (d > a) << endl;
    }
}


// Question : https://codeforces.com/contest/1692/problem/A