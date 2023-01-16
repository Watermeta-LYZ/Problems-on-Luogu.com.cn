/*********************************************************/
//@Author:					LYZ
//@Email:					L_Y_Z_ZMT@163.com
//@Date:					2023-01-09 16:44:27
//@Last Modified by:		
//@Last Modified time:		2023-01-09 16:52:55
//@Description: 
/*********************************************************/
//Problem [P5716 【深基3.例9】月份天数]

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

bool is_leap(int n)
{
	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
}

int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main()
{
# ifdef _LYZ_LOCAL
    freopen("a.in", "r", stdin);
# endif
	ios::sync_with_stdio(false);

	int y, m;
	cin >> y >> m;
	if (m == 2 && is_leap(y))
	{
		cout << 29 << endl;
		return 0;
	}

	cout << days[m - 1];

    return 0;
}