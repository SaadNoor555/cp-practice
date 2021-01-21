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

const ll N = 4e3 + 9;
const ll MOD = 1e9 + 7;


struct Point{
      ll x;
      ll y;
};
ll n, ans = 1e18;
Point P[ N ];
ll Cost[ N ];



ll area( Point p, Point q, Point r )
{
      return ( q.y - p.y ) * ( r.x - q.x ) - ( q.x - p.x ) * ( r.y - q.y );
      //return 1;
      //return ( point[ q ].second.second - point[ p ].second.second ) * ( point[ r ].second.first - point[ q ].second.first ) - ( point[ q ].second.first - point[ p ].second.first ) * ( point[ r ].second.second - point[ q ].second.second );
}

void solve( int t )
{
      scanf("%lld", &n);
      for ( int i = 0; i < n; ++i )  
            scanf("%lld %lld %lld",&P[i].x, &P[i].y, &Cost[i]);
    //   cin >> P[ i ].x >> P[ i ].y >> Cost[ i ];

      for ( int i = 0; i < n; ++i ) {
            for ( int j = i + 1; j < n; ++j ) {
                  ll tm = 0;
                  for ( int k = 0; k < n; ++k ) {
                        if ( i == k || j == k )   continue;
                        ll ar = area( P[ i ], P[ j ], P[ k ] );
                        //cout << ar << " ";
                        assert( ar != 0 );
                        if ( ar < 0 )  tm -= Cost[ k ];
                        else           tm += Cost[ k ];
                  }
                  //cout << "\n";
                  ans = min( ans, abs( tm ) );
            }
      }
      printf("%lld\n", ans);
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