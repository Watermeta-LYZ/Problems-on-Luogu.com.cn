/*********************************************************/
//@Author:					LYZ
//@Email:					L_Y_Z_ZMT@163.com
//@Date:					2023-01-09 18:06:39
//@Last Modified by:		
//@Last Modified time:		2023-01-09 18:18:15
//@Description: 
/*********************************************************/
//Problem [P1422 小玉家的电费]

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

	double n, s;
	cin >> n;
# define p1 0.4463
# define p2 0.4663
# define p3 0.5663
	if (n <= 150)
		s = p1 * n;
	if (150 < n && n <= 400)
		s = p2 * (n - 150) + 150 * p1;
	if (n > 400)
		s = p3 * (n - 400) + 250 * p2 + 150 * p1;
	printf("%.1lf\n", s);

    return 0;
}