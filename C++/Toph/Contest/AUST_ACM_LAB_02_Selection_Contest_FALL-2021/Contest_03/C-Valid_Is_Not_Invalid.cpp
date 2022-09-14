#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	string arr;

	ll count1=0, count2=0, size;

	getline(cin, arr);

	size = arr.size();

	for(ll i=0; i<size; i++)
	{
		if(arr[i]=='(')
		{
			count1++;
		}
		else if(arr[i]==')')
		{
			count2++;
		}

		if(count2>count1)
		{
			cout << "No";
			return 0;
		}
	}

	if(arr[0]==')' || arr[size-1]=='(')
	{
		cout << "No";
	}
	else if(count1==count2)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}

	return 0;
}