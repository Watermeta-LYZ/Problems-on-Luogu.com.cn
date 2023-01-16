/*********************************************************/
//@Author:					LYZ
//@Email:					L_Y_Z_ZMT@163.com
//@Date:					2023-01-09 13:41:51
//@Last Modified by:		
//@Last Modified time:		2023-01-09 13:46:58
//@Description: 
/*********************************************************/
//Problem [P5714 【深基3.例7】肥胖问题]

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

	double m, h;
	cin >> m >> h;
	double bmi = m / (h * h);
	if (bmi < 18.5)
		cout << "Underweight";
	else if (18.5 <= bmi && bmi < 24)
		cout << "Normal";
	else if (bmi >= 24)
	{
		cout << bmi << endl;
		cout << "Overweight";
	}

    return 0;
}