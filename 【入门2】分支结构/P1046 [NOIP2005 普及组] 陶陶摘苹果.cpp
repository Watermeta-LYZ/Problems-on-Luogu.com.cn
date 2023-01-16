/*********************************************************/
//@Author:					LYZ
//@Email:					L_Y_Z_ZMT@163.com
//@Date:					2023-01-09 18:44:20
//@Last Modified by:		
//@Last Modified time:		2023-01-09 18:50:57
//@Description: 
/*********************************************************/
//Problem [P1046 [NOIP2005 普及组] 陶陶摘苹果]

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
// typedef __int128    i128;

using namespace std;
int a[10], mx, s;

int main()
{
# ifdef _LYZ_LOCAL
    freopen("a.in", "r", stdin);
# endif
	ios::sync_with_stdio(false);

	repn (i, 0, 10)
		cin >> a[i];
	cin >> mx;
	repn (i, 0, 10)
		s += ((mx + 30) >= a[i]);
	cout << s;

    return 0;
}