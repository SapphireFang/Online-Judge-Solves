#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll coefficients(ll n, ll m) 
{
   ll C[m+1] = {0};
   
   C[0] = 1;

   for (ll i = 1; i <= n; i++) 
   {
    	for (ll j = min(i, m); j > 0; j--)
	  	{
		  	C[j] = C[j] + C[j-1];
	  	}    
   }
   return C[m];
}

int main()
{
	ll t,n;

	cin >> t;

	while(t!=0)
	{
		cin >> n;

		for(ll i=0; i<=n; i++)
		{
			ll result;

			result = coefficients(n, i);
			
			if(i==n)
			{
				cout << result;
			}
			else
			{
				cout << result << " ";
			}	
		}

		cout << endl;

		t--;
	}

	return 0;
}