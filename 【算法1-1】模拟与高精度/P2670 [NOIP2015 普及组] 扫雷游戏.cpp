/*********************************************************/
//@File:               P2670 [NOIP2015 普及组] 扫雷游戏.cpp
//@Author:             LYZ
//@Email:              L_Y_Z_ZMT@163.com
//@Date:               2023-01-10, 星期二
//@Time:               13:36:05
/*********************************************************/
//Problem [P2670 [NOIP2015 普及组] 扫雷游戏]

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

using namespace std;

int m, n;
bool blocks[104][104];
int res[104][104];
const int offsets[8][2] = 
    { {+1, 0}, {+1, +1}, {0, +1}, {-1, +1},
      {-1, 0}, {-1, -1}, {0, -1}, {+1, -1} };

int main()
{
# ifdef _LOCAL
    freopen("a.in", "r", stdin);
    puts("---------------------------LOCAL---------------------------");
# endif
    ios::sync_with_stdio(true);
    
    MEM(blocks, 0);
    cin >> n >> m;
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 1; j <= m; j++)
        {
            char ch;
            cin >> ch;
            blocks[i][j] = (ch == '*');
        }
    }

    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 1; j <= m; j++)
        {
            if(blocks[i][j])
            {
                res[i][j] = -1;
                continue;
            }
            int s = 0;
            for (size_t k = 0; k < 8; k++)
            {
                int ox = i + offsets[k][0], oy = j + offsets[k][1];
                s += blocks[ox][oy];
            }
            res[i][j] = s;
        }
    }

    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 1; j <= m; j++)
        {
            if (res[i][j] == -1)
            {
                cout << "*";
                continue;
            }
            
            cout << res[i][j];
        }
        cout << endl;
    }
    
    
    return 0;
}