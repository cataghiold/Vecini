#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, v1[10000], k, mindif, rez, i, j;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>v1[i];

    cin>>k;
    for(i=k; i<n-k; i++)
    {
        mindif=INT_MAX;
        for(j=k; j>=1; j--)
        {
            if(abs(v1[i-j]-v1[i])<mindif)
            {
                mindif=abs(v1[i-j]-v1[i]);
                rez=v1[i-j];
            }
        }
        for(j=1; j<=k; j++)
        {
            if(abs(v1[i+j]-v1[i])<mindif)
            {
                mindif=abs(v1[i+j]-v1[i]);
                rez=v1[i+j];
            }
        }
        cout<<rez<<" ";
    }
    return 0;
}
