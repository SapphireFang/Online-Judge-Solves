#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	double a, x, area;

	cin >> a >> x;

	area = (((3*(sqrt(3)))/2)*a*a+a*a)*50;

	if(area>=x)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}

	return 0;
}