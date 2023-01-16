/*********************************************************/
//@Author:					LYZ
//@Email:					L_Y_Z_ZMT@163.com
//@Date:					2023-01-09 17:50:18
//@Last Modified by:		
//@Last Modified time:		2023-01-09 18:06:05
//@Description: 
/*********************************************************/
//Problem [P5717 【深基3.习8】三角形分类]

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
int v[3];

int main()
{
# ifdef _LYZ_LOCAL
    freopen("a.in", "r", stdin);
# endif
	ios::sync_with_stdio(false);

	cin >> v[0] >> v[1] >> v[2];
	sort(v, v + 3);
# define a v[0]
# define b v[1]
# define c v[2]
	if (a + b <= c)
	{
		cout << "Not triangle\n";
		return 0;
	}

	int sa2b2 = a * a + b * b;
	int sc2 = c * c;

	if (sa2b2 == sc2)
		cout << "Right triangle\n";
	else if (sa2b2 > sc2)
		cout << "Acute triangle\n";
	else if (sa2b2 < sc2)
		cout << "Obtuse triangle\n";
	if (a == b || b == c || c == a)
		cout << "Isosceles triangle\n";
	if (a == b && b == c)
		cout << "Equilateral triangle\n";

    return 0;
}