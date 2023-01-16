/*********************************************************/
//@File:               P1067 [NOIP2009 普及组] 多项式输出.cpp
//@Author:             LYZ
//@Email:              L_Y_Z_ZMT@163.com
//@Date:               2023-01-13, 星期五
//@Time:               18:00:40
/*********************************************************/
//Problem [P1067 [NOIP2009 普及组] 多项式输出]

//   C++ Headers
# include <iostream>
# include <string>
# include <queue>
# include <vector>
# include <map>
# include <set>
# include <algorithm>

//   C Headers
# include <cstdio>
# include <cstring>
# include <cctype>
# include <cstdlib>
# include <cmath>
# include <climits>

//   Useful marcos
# define MEM(a, val)    memset(a, val, sizeof a)

using namespace std;

int n;

int main()
{
# ifdef _LOCAL
    freopen("a.in", "r", stdin);
    puts("---------------------------LOCAL---------------------------");
# endif
    ios::sync_with_stdio(true);
    
    cin >> n;
    for (int i = n; i >= 0; i--)
    {
        int a;
        cin >> a;
        int aa = abs(a);

        if (a == 0)
            continue;
        if (i == n)
        {
            if (a > 0)
                cout << "";
            else
                cout << "-";
        }
        else
        {
            if (a > 0)
                cout << "+";
            else
                cout << "-";
        }

        if (aa == 1 && i != 0)
        {
            cout << "";
        }
        else
        {
            cout << aa;
        }

        if (i > 1)
        {
            cout << "x^" << i;
        }
        else if (i == 1)
        {
            cout << "x";
        }
        else if (i == 0)
        {
            cout << "";
        }
    }
    
    return 0;
}