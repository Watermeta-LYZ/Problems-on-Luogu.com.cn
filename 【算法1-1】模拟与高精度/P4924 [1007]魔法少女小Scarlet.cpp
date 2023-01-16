/*********************************************************/
//@File:               P4924 [1007]魔法少女小Scarlet.cpp
//@Author:             LYZ
//@Email:              L_Y_Z_ZMT@163.com
//@Date:               2023-01-12, 星期四
//@Time:               10:20:58
/*********************************************************/
//Problem [P4924 [1007]魔法少女小Scarlet]

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

const int MAXN = 504, MAXM = 504;
unsigned int a[MAXN][MAXN], t[MAXN][MAXN];

void init(int n)
{
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++, k++)
        {
            a[i][j] = k;
        }
    }
}

void transform(int x, int y, int r, int z)
{
    MEM(t, 0);
    int dx = x - r - 1, dy = y - r - 1;
    int width = 2 * r + 1, dw = 2 * r;
    for (int i = dx; i < dx + width; i++)
    {
        for (int j = dy; j < dy + width; j++)
        {
            t[i - dx][j - dy] = a[i][j];
        }
    }
    if (!z) // 顺时针旋转
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < width; j++)
            {
                swap(t[i][j], t[dw - i][j]);
            }
        }
        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < i; j++)
            {
                swap(t[i][j], t[j][i]);
            }
        }
    }
    else    // 逆时针旋转
    {
        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < i; j++)
            {
                swap(t[i][j], t[j][i]);
            }
        }
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < width; j++)
            {
                swap(t[i][j], t[dw - i][j]);
            }
        }
    }
    for (int i = dx; i < dx + width; i++)
    {
        for (int j = dy; j < dy + width; j++)
        {
            a[i][j] = t[i - dx][j - dy];
        }
    }
}

void print(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
# ifdef _LOCAL
    freopen("a.in", "r", stdin);
    puts("---------------------------LOCAL---------------------------");
# endif
    ios::sync_with_stdio(false);
    
    int n, m;
    cin >> n >> m;
    init(n);
    /*cout << "Transform [0] :\n";
    print(n);
    cout << endl;*/
    for (int i = 0; i < m; i++)
    {
        int x, y, r, z;
        cin >> x >> y >> r >> z;
        transform(x, y, r, z);
        /*cout << "Transform [" << i + 1 << "] :\n";
        print(n);
        cout << endl;*/
    }
    print(n);
    
    return 0;
}