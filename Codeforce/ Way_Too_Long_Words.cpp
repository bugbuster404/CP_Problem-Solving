#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		char str[105];
		int len;
		cin >> str;
		
		len=strlen(str);
		if(len>10)
			printf("%c%d%c\n",str[0],len-2,str[len-1]);
		else
			printf("%s\n",str);
	}
	return 0;
}

//Question : https://codeforces.com/contest/71/problem/A