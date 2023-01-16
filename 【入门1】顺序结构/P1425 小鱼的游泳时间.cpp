/*********************************************************/
//@Author:					LYZ
//@Email:					L_Y_Z_ZMT@163.com
//@Date:					2022-12-05 19:18:33
//@Last Modified by:		
//@Last Modified time:		2022-12-05 19:26:43
//@Description: 
/*********************************************************/
//Problem [P1425 小鱼的游泳时间]

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

	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int s = a * 60 + b;
	int e = c * 60 + d;
	int t = e - s;
	cout << t / 60 << " " << t % 60;

    return 0;
}