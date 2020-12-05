#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        long long n, x, extra= 0, wel= 0;
        double av;
        cin>> n>> x;
        long long a[n];

        for(int i=0; i<n; i++)
        {
            cin>> a[i];
        }

        sort(a, a+n, greater<long long>());

        for(int i=0; i<n; i++)
        {
            if(a[i]>=x)
            {
                extra+=a[i];
                wel++;
            }
            else
            {
                extra+=a[i];
                av=extra/((wel+1)*1.0);
                if(av>=x)
                {
                    wel++;
                    continue;
                }
                break;
            }
            
        }

        cout<<wel<<endl;
    }
}