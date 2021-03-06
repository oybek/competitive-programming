
/*
ID: aybek.h2
PROG: humble
LANG: C++11
*/

#define PROB_NAME "humble"

#include <set>
#include <cmath>
#include <queue>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cassert>
#include <cstdlib>
#include <utility>
#include <climits>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

typedef long long i64;
typedef int i32;

#define N_MAX 100001
#define K_MAX 101

i32 K, N, p[ K_MAX ], k[ K_MAX ];
i64 humble[ N_MAX ];
i32 humble_sz = 0;

void find_next()
{
	i64 winner = INT_MAX;

	for( i32 i = 0; i < K; ++i )
		winner = min( winner, humble[ k[ i ] ] * p[ i ] );

	for( i32 i = 0; i < K; ++i )
	{
		if( humble[ k[ i ] ] * p[ i ] == winner )
			++k[ i ];
	}

	humble[ humble_sz++ ] = winner;
}

i32 main()
{
#ifndef LOCAL
	freopen( PROB_NAME".in", "rt", stdin );
	freopen( PROB_NAME".out", "wt", stdout );
#endif

	// reading input
	cin >> K >> N;
	for( i32 i = 0; i < K; ++i )
		cin >> p[ i ];

	sort( p, p+K );

	humble[ humble_sz++ ] = 1;

	while( N-- )
		find_next();

	cout << humble[ humble_sz-1 ] << endl;

	return 0;
}

