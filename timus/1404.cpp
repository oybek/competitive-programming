
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

using namespace std;

string s;
int a[101];

int main() {
	cin >> s;
	for (int i = 0; i < s.size(); ++i)
		a[i] = s[i]-'a';

	if (a[0] < 5) a[0] += 26;
	for (int i = 0; i+1 < s.size(); ++i)
		while (a[i] > a[i+1])
			a[i+1] += 26;

	for (int i = s.size()-1; i > 0; --i)
		a[i] -= a[i-1];
	a[0] -= 5;

	for (int i = 0; i < s.size(); ++i)
		cout << char(a[i]%26+'a');
	cout << endl;

	return 0;
}

