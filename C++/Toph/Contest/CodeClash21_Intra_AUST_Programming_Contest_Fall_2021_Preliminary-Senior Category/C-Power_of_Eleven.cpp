#include<bits/stdc++.h>
using namespace std;

int main()
{
    double test, hero, vill, hex;
    double area;

    cin >> test;

    for(int i=1; i<=test; i++)
    {
        cin >> hero >> vill >> hex;

        area = (3*(sqrt (3))*hex*hex)/2;

        if(hero>area && hero>vill)
        {
            cout << "Case #" << i << ": Eleven" << endl;
        }

        else
        {
            cout << "Case #" << i << ": Demogorgon" << endl;
        }

    }

    return 0;
}