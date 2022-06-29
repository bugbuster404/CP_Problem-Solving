#include<bits/stdc++.h>
 
using namespace std;
 
int t;
const int N=1005;
 
int main(){
	cin>>t;
	for (int i=1;i<=t;++i) {
		int n;
		cin>>n;
		int a[N];
		for (int i=1;i<=n;++i) {
			cin>>a[i];
		}
		cout<<a[n]<<endl;
	}
	return 0;
}