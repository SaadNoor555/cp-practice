#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin>> n;
    vector<int> tab(n+2, 1);
    for(int i=2; i*i<=n+1; i++)
    {
        if(tab[i]==1)
            for(int j= i*i; j<=n+1; j+=i)
                tab[j]= 2;
    }
    if(n<3) cout<< "1\n";
    else cout<<"2\n";

    for(int i=2; i<=n+1; i++)
        cout<< tab[i]<< " ";

    cout<<"\n";
}