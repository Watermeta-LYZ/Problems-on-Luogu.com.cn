/*********************************************************/
//@Author:					LYZ
//@Email:					L_Y_Z_ZMT@163.com
//@Date:					2023-01-09 12:51:26
//@Last Modified by:		
//@Last Modified time:		2023-01-09 13:01:51
//@Description: 
/*********************************************************/
//Problem [P5711 【深基3.例3】闰年判断]

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

int main()
{
# ifdef _LYZ_LOCAL
    freopen("a.in", "r", stdin);
# endif
	ios::sync_with_stdio(false);

	int year;
	cin >> year;
	if (year % 100 == 0)
		if (year % 400 == 0)
			goto YES;
		else
			goto NO;
	else if (year % 4 == 0)
		goto YES;
	else
		goto NO;
YES:
	cout << 1;
	return 0;
NO:
	cout << 0;
	return 0;

    return 0;
}