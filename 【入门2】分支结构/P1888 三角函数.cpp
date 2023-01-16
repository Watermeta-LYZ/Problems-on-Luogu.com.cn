/*********************************************************/
//@Author:					LYZ
//@Email:					L_Y_Z_ZMT@163.com
//@Date:					2023-01-09 18:35:09
//@Last Modified by:		
//@Last Modified time:		2023-01-09 18:43:16
//@Description: 
/*********************************************************/
//Problem [P1888 三角函数]

# include <iostream>
# include <cstdio>
# include <cstring>
# include <string>
# include <cctype>
# include <cstdlib>
# include <cmath>
# include <queue>
# include <vector>
# include <map>
# include <set>
# include <algorithm>
# include <functional>

# define rep(i, a, b)       for(int i = a; i <= b; i++)
# define REP(i, a, b)       for(int i = b; i >= a; i--)
# define repn(i, a, b)      for(int i = a; i < b; i++)
# define REPn(i, a, b)      for(int i = b; i > a; i--)
# define MEM(a, val)     	memset(a, val, sizeof a)

typedef long long   ll;
typedef __int128    i128;

using namespace std;
const int MAXN = 1000010;

int main()
{
# ifdef _LYZ_LOCAL
    freopen("a.in", "r", stdin);
# endif
	ios::sync_with_stdio(false);

	ll a, b, c, m, n;
	cin >> a >> b >> c;
	if (a > c && a > b)      m = a;
	else if (b > c && b > a) m = b;
	else if (c > a && c > b) m = c;

	if (a < c && a < b)      n = a;
	else if (b < c && b < a) n = b;
	else if (c < a && c < b) n = c;

	int x = __gcd(m, n);
	cout << n / x << "/" << m / x;

    return 0;
}