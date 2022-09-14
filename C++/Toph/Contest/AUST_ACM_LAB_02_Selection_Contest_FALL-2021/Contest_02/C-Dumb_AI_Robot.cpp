#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	ll n, m, o, result=0;

	cin >> n >> m;

	for(ll i=1; i<=n; i++)
	{
		result = result + i;
	}

	for(ll i=0; i<m; i++)
	{
		cin >> o;
		result = result-o;
	}

	cout << result;

	return 0;
}