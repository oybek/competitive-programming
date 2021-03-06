
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

using namespace std;

int main()
{
	int n;
	scanf( "%d", &n );

	i64 ans = 0;
	i64 t = 9;
	i64 dn = 1;
	while( n > t )
	{
		ans += t*dn;
		n -= t;
		t *= 10;
		++dn;
	}
	cout << ans + (n * dn)  << endl;

	return 0;
}

