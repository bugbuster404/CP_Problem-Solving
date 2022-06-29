#include <bits/stdc++.h>
using namespace std;

void sol(){
    int n ; cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(int i = 0; i < (1<<(n)); i++) {
		int sum = 0;
		for(int j = n-1; j >= 0; j--) {
			int s = i & (1 << j);
			int e = v[n-j-1];
			if(s) {
				sum += v[n-j-1];
				sum = (sum>359 ? sum - 360 : sum);
			} else {
				sum -= v[n-j-1];
				sum = (sum<0 ? abs(sum) : sum);
			}
		}
		//cout << sum << endl;
		//cout << endl;
		//cout << bitset<3>(i) << endl;
		if(!sum) {cout << "YES" << endl; return;}
	}
 
	cout << "NO" << endl;
}
 
int main() {
	//stoi();
	sol();
    
    
}

