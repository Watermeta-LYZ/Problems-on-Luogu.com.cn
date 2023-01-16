/*********************************************************/
//@Author:					LYZ
//@Email:					L_Y_Z_ZMT@163.com
//@Date:					2023-01-09 18:53:18
//@Last Modified by:		
//@Last Modified time:		2023-01-09 19:03:23
//@Description: 
/*********************************************************/
//Problem [P4414 [COCI2006-2007#2] ABC]

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
int a[3];
char ca, cb, cc;
int main()
{
# ifdef _LYZ_LOCAL
    freopen("a.in", "r", stdin);
# endif
	ios::sync_with_stdio(false);

	cin >> a[0] >> a[1] >> a[2] >> ca >> cb >> cc;
	sort(a, a + 3);
	cout << a[ca - 'A'] << " " << a[cb- 'A'] << " " << a[cc - 'A'];

    return 0;
}