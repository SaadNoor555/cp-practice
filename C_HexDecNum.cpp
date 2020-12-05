#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    unsigned long long n= 0, in;
    cin>> s;
    int l= s.length(), base= 1;
    bool ao= false;
    for(int i=0; i<l; i++)
    {
        if(ao) s[i]= '1';
        else if(s[i]>'1') ao=true, s[i]='1';
        // cout<<s[i];
    }
    // cout<<"\n";

    for(int i=l-1; i>=0; i--)
    {
        n+=((s[i]-'0')*base);
        base*=2;
    }
    cout<<n<< "\n";
}