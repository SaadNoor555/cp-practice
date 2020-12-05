#include<bits/stdc++.h>

using namespace std;

int calculate_sum(int x)
{
    int sum=0;
    while(x)   
    {
        sum=sum+(x%10);
        x=x/10;
    }
    return sum;
}


int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    long long x=1;
    vector<long long>vec;


    for(int s=1; s<=81; s++) 
    {
        x=b*pow(s,a)+c;
        if(calculate_sum(x)==s && x<1000000000) vec.push_back(x);
        
    }
    cout<<vec.size()<<"\n";

    for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";

    cout<< endl;
}