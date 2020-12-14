#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

template<typename T>
ll MaxSumSubArray(vector<T> ar, T n)
{
    T max_so_far=INT32_MIN, max_end_here= 0;
    for(int i=0; i<n; i++)
    {
        max_end_here= max_end_here+ar[i];
        max_so_far= max(max_so_far, max_end_here);
        max_end_here= max(0, max_end_here);
    }
    return max_so_far;
}



int main()
{
    int t=1, cs=0;
    cin>> t;
    while(t--)
    {
        cs++;
    }
}