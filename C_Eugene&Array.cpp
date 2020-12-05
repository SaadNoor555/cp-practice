#include <bits/stdc++.h> 

using namespace std;

int findSubarraySum(int arr[], int n, int sum) 
{ 
    unordered_map<int, int> prevSum; 
  
    int res = 0; 
  
    // Sum of elements so far. 
    int currsum = 0; 
  
    for (int i = 0; i < n; i++)
    { 

        currsum += arr[i]; 

        if (currsum == sum)  
            res++;         

        if (prevSum.find(currsum - sum) !=  prevSum.end())  
            res += (prevSum[currsum - sum]); 
          

        prevSum[currsum]++; 
    } 
  
    return res; 
} 

int main()
{
    int n, p= 0, x;
    cin>> n;
    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];
    

    for(int i=1; i<=n; i++)
    {
        for(int j=0; j+i<n; j++)
        {
            x=findSubarraySum(a+j, i, 0);
            if(!x) p++;
        }
        
    }

    int f= (n*(n+1))/2;
    cout<<f-p<<endl;

}