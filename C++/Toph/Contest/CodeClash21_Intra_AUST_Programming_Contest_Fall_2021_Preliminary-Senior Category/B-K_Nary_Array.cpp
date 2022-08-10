#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define mx INT_MAX
#define mn INT_MIN
#define v vector<int>

int main()
{
   ll n, k; 
   
   cin >> n >> k;

   ll a[n];

   for(int i=0; i<n; i++)
   {
       cin>>a[i];
   }

   ll s=0, c=0;

    for(ll j=0; j<n; j++)
    { 
        s=0;

        for(ll i=j; i<n; i++)
        {
            s+=a[i];

            if(s%k == 0) 
            {
                c++;
            }
        }
    } 
    
    cout << c;
}