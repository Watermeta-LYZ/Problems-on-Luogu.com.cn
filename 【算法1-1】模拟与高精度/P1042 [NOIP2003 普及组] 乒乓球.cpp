/*********************************************************/
//@File:               P1042 [NOIP2003 普及组] 乒乓球.cpp
//@Author:             LYZ
//@Email:              L_Y_Z_ZMT@163.com
//@Date:               2023-01-10, 星期二
//@Time:               11:13:40
/*********************************************************/
//Problem [P1042 [NOIP2003 普及组] 乒乓球]

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

//   Useful marcos
# define MEM(a, val)    memset(a, val, sizeof a)

bool a[62500];

using namespace std;

int main()
{
# ifdef _LOCAL
    freopen("a.in", "r", stdin);
    puts("---------------------------LOCAL---------------------------");
# endif
    ios::sync_with_stdio(false);
    char chr;
    MEM(a, 0);
    int sz = 0;
    while (cin >> chr)
    {
        if (chr == 'E')
            break;
        if (chr == 'W' || chr == 'L')
        {
            a[sz] = chr == 'W';
            sz++;
        }
    }

    int win = 0, lose = 0;
    for (int i = 0; i < sz; i++)
    {
        if (a[i])
            win++;
        else
            lose++;
        if ((abs(win - lose) >= 2) && (win >= 11 || lose >= 11))
        {
            cout << win << ":" << lose << endl;
            win = lose = 0;
        }
    }
    cout << win << ":" << lose << endl << endl;

    win = lose = 0;
    for (int i = 0; i < sz; i++)
    {
        if (a[i])
            win++;
        else
            lose++;
        if ((abs(win - lose) >= 2) && (win >= 21 || lose >= 21))
        {
            cout << win << ":" << lose << endl;
            win = lose = 0;
        }
    }
    cout << win << ":" << lose;
    return 0;
}
