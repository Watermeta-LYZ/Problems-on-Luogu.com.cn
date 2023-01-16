/*********************************************************/
//@Author:					LYZ
//@Email:					L_Y_Z_ZMT@163.com
//@Date:					2023-01-09 18:19:13
//@Last Modified by:		
//@Last Modified time:		2023-01-09 18:30:49
//@Description: 
/*********************************************************/
//Problem [P1424 小鱼的航程(改进版)]

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

	int x, n, wke = 0;
	cin >> x >> n;
	x--;

	for (int i = 0; i < n; ++i)
	{
		int nx = (x + i) % 7;
		wke += ((nx == 6) || (nx == 5));
	}

	cout << (n - wke) * 250 << endl;

    return 0;
}