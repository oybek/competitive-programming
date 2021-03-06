
/* Use <F5> to compile & run program
 * file.in will be redirected to stdin
 * in file.out you'll get program stdout
 */

#include <algorithm>
#include <bitset>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

#define inf 1000000001
#define sqr(x) ((x)*(x))
#define all(x) x.begin(), x.end()

typedef unsigned long long u64;
typedef long long i64;
typedef std::pair<int, int> pii;

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<pair<int, int> > a( n );
	for( pair<int, int>& x : a )
		cin >> x.first >> x.second;

	sort( all(a) );

	if( is_sorted( all(a), []( pii a, pii b ) { return a.second < b.second; } ) )
	{
		cout << "Poor Alex";
	}
	else
	{
		cout << "Happy Alex";
	}

	return 0;
}

