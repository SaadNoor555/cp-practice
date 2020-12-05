#include<iostream>
#include<string.h>
#include<string>

using namespace std;

int main()
{
    string p;
    cin>> p;
    int l= p.length();
    long long  sum= 0;
    for(int i=0; i<l; i++)
    {
        sum*=16;
        switch (p[i])
        {
        case '>':
            sum+=8;
            break;

        case '<':
            sum+=9;
            break;
        
        case '+':
            sum+=10;
            break;

        case '-':
            sum+=11;
            break;

        case '.':
            sum+=12;
            break;

        case ',':
            sum+=13;
            break;

        case '[':
            sum+=14;
            break;

        case ']':
            sum+=15;
            break;
        
        default:
            break;
        }
        sum=sum%1000003;
    }
    cout<<sum<<"\n";
    
}