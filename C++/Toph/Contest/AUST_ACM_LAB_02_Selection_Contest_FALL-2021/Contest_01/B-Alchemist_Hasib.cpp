#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	string arr;

	cin >> n;
	
	cin.ignore();
	getline(cin, arr);

	for(int i=0; i<arr.size(); i++)
	{
		if(arr[i] == 32)
		{
			continue;
		}

		else if(arr[i]-n < 97)
		{
			arr[i] = '{' - (97 - (arr[i] - n));
		}

		else
		{
			arr[i] = arr[i]-n;
		}
	}

	for(int i=0; i<arr.size(); i++)
	{
		cout << arr[i];
	}

	return 0;
}
