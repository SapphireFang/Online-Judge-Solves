#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	string arr;

	while(cin >> arr)
	{
		ll countL=0, countU=0, countD=0, count=0;

		for(ll i=0; i<arr.size(); i++)
		{
			if(arr[i]>='a' && arr[i]<='z')
			{
				countL=1;
			}
			else if(arr[i]>='A' && arr[i]<='Z')
			{
				countU=1;
			}
			else if(arr[i]>='0' && arr[i]<='9')
			{
				countD=1;
			}

			if(countL==countU && countL==countD)
			{
				countL=0;
				countU=0;
				countD=0;
				count++;
			}
		}

		cout << count << endl;
	}

	return 0;
}