#include<bits/stdc++.h>
using namespace std;

int main()
{
    string dna;
    int max=0,count=0;

    getline(cin, dna);

    for(int i=0; i<dna.size(); i++)
    {
        if(dna[i] == dna[i+1])
        {
            count++;
            if(count>max)
            {
                max = count;
            }
        }
        else
        {
            count = 0;
        }
    }

    cout << max+1;

    return 0;
}