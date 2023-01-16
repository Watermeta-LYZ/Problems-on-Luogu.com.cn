/*********************************************************/
//@Author:					LYZ
//@Email:					L_Y_Z_ZMT@163.com
//@Date:					2023-01-09 13:02:45
//@Last Modified by:		
//@Last Modified time:		2023-01-09 13:04:29
//@Description: 
/*********************************************************/
//Problem [P5712 【深基3.例4】Apples]

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

	int i;
	cin >> i;
	if (i <= 1)
		cout << "Today, I ate " << i << " apple.";
	else
		cout << "Today, I ate " << i << " apples.";

    return 0;
}