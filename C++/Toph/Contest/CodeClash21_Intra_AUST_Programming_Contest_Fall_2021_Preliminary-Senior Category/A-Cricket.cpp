#include <bits/stdc++.h>
using namespace std;

#define mx INT_MAX
#define mn INT_MIN
#define v vector<int>

int main()
{
    int n, c=0; 
    string s;

    cin>>n;
    cin>>s;

    if(n>=1 && n<=100)
    {
        for(int i=0; i<n ;i++)
        {
            if(s[i]=='L')
            {
                c++;
            }   
        }

        if(c<6) 
        {
            cout<<0;
        }
        else 
        {
            cout<<c/6;
        }
    }
    
    return 0;
}