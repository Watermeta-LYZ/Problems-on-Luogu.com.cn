/*********************************************************/
//@Author:					LYZ
//@Email:					L_Y_Z_ZMT@163.com
//@Date:					2022-12-05 18:41:11
//@Last Modified by:		
//@Last Modified time:		2022-12-05 19:01:30
//@Description: 
/*********************************************************/
//Problem [P5707 【深基2.例12】上学迟到]

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

	double s, v, t;
	cin >> s >> v;
	t = ceil(s / v) + 10; // "之前"
	int h = (t / 60), m = (int(t) % 60);
	int HH = (h <= 8) ? (7 - h) : (24 + 7 - h),
		MM = (m == 0) ? (0) : (60 - m);
	printf("%02d:%02d", HH, MM);

    return 0;
}