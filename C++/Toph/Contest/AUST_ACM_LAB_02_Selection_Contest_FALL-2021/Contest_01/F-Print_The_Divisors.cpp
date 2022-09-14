#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	vector<long long int> divisor;

	cin >> n;

	for(long long int i=1; i<=sqrt(n); i++)
	{
		if(n%i == 0)
		{
			divisor.push_back(i);
			if(i != n/i)
			{
				divisor.push_back(n/i);
			}	
		}
	}

	sort(divisor.begin(), divisor.end());

	long long size = divisor.size();

	for(long long i=0; i<size; i++)
	{
		if(i<size-1)
		{
			cout << divisor.at(i) << " ";
		}

		else
		{
			cout << divisor.at(i) << endl;
		}
	}

	return 0;
}