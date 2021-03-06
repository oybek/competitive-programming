
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

#define dp_SIZE 30001
#define a_SIZE 11

uint64 dp[dp_SIZE];
int a[] = { 5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000 };

int main() {
	dp[0] = 1;
	for (int j = 0; j < a_SIZE; ++j) {
		for (int i = a[j]; i < dp_SIZE; i += 5) {
			dp[i] += dp[i-a[j]];
		}
	}

	float n;
	while (1) {
		cin >> n;
		if (n == 0.0) break;
		cout
			<< fixed << setprecision(2)
			<< setw(6) << n
			<< setw(17) << dp[int(roundf(n*100))]
			<< endl;
	}

	return 0;
}

