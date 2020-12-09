#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

void solve() {
	string k;
	cin >> k;
	int n=(int)k.size();
	string s=k;
	for(int i=n/2; i<n; ++i)
		s[i]=s[n-i-1];
	if(s>k)
		cout << s;
	else {
		for(int i=(n-1)/2; i>=0; --i) {
			if(s[i]=='9')
				s[i]='0';
			else {
				s[i]+=1;	
				break;
			}
		}
		for(int i=n/2; i<n; ++i)
			s[i]=s[n-i-1];
		if(s[0]=='0')
			cout << '1' << s.substr(1) << '1';
		else
			cout << s;
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
