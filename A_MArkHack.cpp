// I can do it all day.
#include<bits/stdc++.h>
using namespace std;
#define ll long double
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; 
	cin >> t;
	while (t--) {
		ll l, r;
		cin >> l >> r;
        cout<< l<< " "<< (r+1)/2<< "\n";
		if (l < (r + 1) / 2) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}
}

		