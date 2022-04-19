#include <bits/stdc++.h>
using namespace std;

int kadane(vector<int> arr)
{
    int n=arrr.size();
    int ans=0;
    int far=0;
    for(int i=0;i<n;i++)
    {
        far+=arr[i];
        if(far>ans)ans=far;
        if(far<0)far=0;
    }
    return ans;
}