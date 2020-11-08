#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n, k, l;
		cin >> n >> k >> l;
		vector<int> v;
		for(int i=0; i<l; ++i)
			for(int j=k; j>=1; --j)
				v.push_back(j);
		if(k==1&&n>1) {
			cout << -1;
		} else if((int)v.size()<n)
			cout << -1;
		else
			for(int i=0; i<n; ++i)
				cout << v[i] << " ";
		cout << "\n";
	}
}
