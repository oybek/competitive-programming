
#include <set>
#include <map>
#include <list>
#include <stack>
#include <queue>
#include <cmath>
#include <bitset>
#include <cstdio>
#include <string>
#include <vector>
#include <cassert>
#include <cstring>
#include <climits>
#include <iomanip>
#include <iostream>
#include <algorithm>

#define INF INT_MAX-1
#define SQR(x) ((x)*(x))

typedef unsigned long long uint64;
typedef long long int64;

using namespace std;

#define PI 3.1415926535

int main() {
	long double V, a, K;
	cin >> V >> a >> K;
	cout << fixed << setprecision(2) << roundl(V*V*K*sin(a*PI/90)/(K-1)*10)/100 << endl;

	return 0;
}

