/*
 ALLAH is Almighty....
*/
#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define pi                                acos( -1.0 )
#define rep( i, a, n )                    for ( ll i = a; i < n; i++ )
#define per( i, a, n )                    for ( ll i = n - 1; i >= a; i-- )
#define ll                                long long
#define all( x )                          ( x ).begin(), ( x ).end()

typedef tree < ll, null_type, less < ll >, rb_tree_tag, tree_order_statistics_node_update > ordered_set;

const ll N = 25;
const ll MOD = 1e9 + 7;


int n, G;
int Arr[ N ];
vector < pair < int, int > > info[ N ];


void solve( int t )
{
      cin >> n >> G;

      for ( int i = 0; i < n; ++i )    cin >> Arr[ i ];

      int lm = 1 << n;
      int MIN = n;
      int tot = accumulate( Arr, Arr + n, 0 );

      for ( int i = 1; i < lm; ++i ) {
            int num = i;
            int cnt = 0;
            int sum = 0;
            for ( int j = 0; j < N; ++j ) {
                  if ( num & ( 1 << j ) ) {
                        cnt++;
                        sum += Arr[ j ];
                  }
            }
            int res = ( sum * 100 ) / tot;
            if ( res >= G )
                  info[ cnt ].push_back( { num, res } );
      }

      for ( int i = 1; i <= n; ++i ) {
            if ( info[ i ].size() ) {
                  sort( all( info[ i ] ) );
                  cout << i << " " << info[ i ].size() << "\n";
                  for ( int j = 0; j < info[ i ].size(); ++j ) {
                        cout << info[ i ][ j ].second << " ";
                        for ( int k = 0; k < N; ++k ) {
                              if ( info[ i ][ j ].first & ( 1 << k ) )  cout << k + 1 << " ";
                        }
                        cout << "\n";
                  }

                  return;
            }
      }
}

int main()
{
      ios_base::sync_with_stdio( false );
      cin.tie( NULL );
      cout.tie( NULL );
      cout << setprecision( 12 );

      int t = 1;
      //cin >> t;

      for ( int i = 1; i <= t; ++i )   solve( i );

      return 0;
}