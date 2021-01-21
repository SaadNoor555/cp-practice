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

const ll N = 800 + 9;
const ll MOD = 1e9 + 7;

const ll MOD1 = 1e9 + 7;
const ll MOD2 = 1e7 + 9;
const ll POW1 = 313;
const ll POW2 = 373;

ll HashST[ N ][ 2 ];
ll POWER1[ N ], POWER2[ N ];


void HASH( string &str )
{
      HashST[ 0 ][ 0 ] = HashST[ 0 ][ 1 ] = 0;
      for ( ll i = 0; i < str.size(); ++i ) {
            HashST[ i + 1 ][ 0 ] = ( HashST[ i ][ 0 ] * POW1 + str[ i ] ) % MOD1;
            HashST[ i + 1 ][ 1 ] = ( HashST[ i ][ 1 ] * POW2 + str[ i ] ) % MOD2;
      }
}

// Dorkar hote pare
void init()
{
      POWER1[ 0 ] = POWER2[ 0 ] = 1;
      for ( ll i = 1; i < N; ++i ) {
            POWER1[ i ] = ( POWER1[ i - 1 ] * POW1 ) % MOD1;
            POWER2[ i ] = ( POWER2[ i - 1 ] * POW2 ) % MOD2;
      }
}

ll n, ans;
string st;
ll DP[ N ][ N ];
bool same[ N ][ N ];



bool mil( ll p, ll q, ll l )
{
      //cout << p << " " << q << " " << l << " ";
      ll Hp1 = HashST[ p + l ][ 0 ] - ( ( HashST[ p ][ 0 ] ) * POWER1[ l ] ) % MOD1;
      Hp1 = ( MOD1 + Hp1 ) % MOD1;
      ll Hp2 = HashST[ p + l ][ 1 ] - ( ( HashST[ p ][ 1 ] ) * POWER2[ l ] ) % MOD2;
      Hp2 = ( MOD2 + Hp2) % MOD2;

      ll Hq1 = HashST[ q + l ][ 0 ] - ( ( HashST[ q ][ 0 ] ) * POWER1[ l ] ) % MOD1;
      Hq1 = ( MOD1 + Hp1 ) % MOD1;
      ll Hq2 = HashST[ q + l ][ 1 ] - ( ( HashST[ q ][ 1 ] ) * POWER2[ l ] ) % MOD2;
      Hq2 = ( MOD2 + Hq2) % MOD2;

      //cout << ( Hp1 == Hq1 && Hp2 == Hq2 ) << "\n";

      return ( Hp1 == Hq1 ) && ( Hp2 == Hq2 );
}


int cnt = 0;
ll can( ll L, ll R )
{
      //cnt++;
      //cout << cnt << L << " " << R << " ";
      if ( same[ L ][ R ] )        return DP[ L ][ R ] = 1;
      if ( DP[ L ][ R ] != 1e10 )  return DP[ L ][ R ];

      ll len = R - L + 1;
      ll cost = len;
      for ( ll i = 2; i < len; ++i ) {
            bool ok = false;
            if ( len % i == 0 ) {
                  ok = true;
                  for ( ll j = L; j <= R; j += i )  ok &= mil( L, j, i );
            }
            if ( ok ) {
                  //cout << L << R << " sda" << i << " ";
                  cost = min( cost, can( L, L + i - 1 ) );
                  break;
            }
      }

      for ( ll i = L; i < R; ++i ) {
            cost = min( cost, can( L, i ) + can( i + 1, R ) );
      }

      DP[ L ][ R ] = cost;
}

void solve( int t )
{
      cin >> n >> st;

      for ( ll i = 0; i < n + 5; ++i ) {
            for ( ll j = 0; j < n + 5; ++j ) {
                        DP[ i ][ j ] = 1e10;
            }
      }

      for ( ll i = 0; i < n; ++i ) {
            for ( ll j = i; j < n; ++j ) {
                  if ( i == j )  same[ i ][ j ] = true;
                  else           same[ i ][ j ] = ( same[ i ][ j - 1 ] && ( st[ i ] == st[ j ] ) );
            }
      }

      HASH( st );

      ans = can( 0LL, n - 1 );

      cout << ans<< '\n';
}

int main()
{
      ios_base::sync_with_stdio( false );
      cin.tie( NULL );
      cout.tie( NULL );
      cout << setprecision( 12 );

      int t = 1;
      init();
      //cin >> t;

      for ( int i = 1; i <= t; ++i )   solve( i );

      return 0;
}