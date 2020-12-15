# include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define case_print  printf("Case %d: ",t+1)
    int main(){
        //freopen("output.txt", "w", stdout);
        int t1;
        cin >> t1;
        for(int t=0; t<t1; t++){
            ull n, k;
            cin >> n >> k;
            ull ans = 1;
            for(ull i=0; i<k; i++){
                ans = (ans*(n-i)*(n-i)/(i+1));
            }
            case_print;
            cout << ans << endl;
        }

    }