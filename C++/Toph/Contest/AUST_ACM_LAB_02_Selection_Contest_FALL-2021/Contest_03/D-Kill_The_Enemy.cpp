#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	ll t;

	cin >> t;

	while(t--)
	{
		ll m, n;

		cin >> n >> m;

		ll arr[m+1];

		for(ll i=0; i<m; i++)
		{
			cin >> arr[i];
		}

		sort(arr, arr+m);
		reverse(arr, arr+m);

		ll sum=0;

		ll minimum = min(n,m);

		for(ll i=0; i<minimum; i++)
		{
			sum = sum+arr[i];
		}

		cout << sum << endl;
	}

	return 0;
}