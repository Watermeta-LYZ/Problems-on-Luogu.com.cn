/*********************************************************/
//@Author:					LYZ
//@Email:					L_Y_Z_ZMT@163.com
//@Date:					2023-01-09 19:04:17
//@Last Modified by:		
//@Last Modified time:		2023-01-09 19:37:24
//@Description: 
/*********************************************************/
//Problem [P1055 [NOIP2008 普及组] ISBN 号码]

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

	string str;
	int s = 0;
	int ix = 1;
	cin >> str;
	for (int i = 0; i < 12; ++i)
		if (str[i] != '-')
			s += (str[i] - '0') * (ix++);
	if (s % 11 == ((str[12] != 'X')?(str[12] - '0'):(10)))
		cout << "Right";
	else
	{
		for (int i = 0; i < 12; ++i)
		{
			cout << str[i];
		}
		int x = s % 11;
		if (x == 10)
			cout << "X";
		else
			cout << x;
	}

    return 0;
}