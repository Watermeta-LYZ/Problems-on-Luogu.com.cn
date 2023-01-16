/*********************************************************/
//@File:               P1518 [USACO2.4]两只塔姆沃斯牛 The Tamworth Two.cpp
//@Author:             LYZ
//@Email:              L_Y_Z_ZMT@163.com
//@Date:               2023-01-13, 星期五
//@Time:               12:09:34
/*********************************************************/
//Problem [P1518 [USACO2.4]两只塔姆沃斯牛 The Tamworth Two]

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

# define UP         0
# define RIGHT      1
# define DOWN       2
# define LEFT       3

using namespace std;

const int N = 10;

enum Map_t
{
    Space,
    Obstacles,
};

Map_t a[N + 1][N + 1];
int fx, fy, ff; // Farmer x, Farmer y, Farmer facing
int cx, cy, cf; // Cow    x, Cow    y, Cow    facing
int t = 0;

bool is_met()
{
    return (fx == cx) && (fy == cy);
}

Map_t facing(int x, int y, int f)
{
    switch (f)
    {
    case LEFT:
        if (y - 1 < 0)
            return Obstacles;
        return a[x][y - 1];
        break;
    
    case RIGHT:
        if (y + 1 >= N)
            return Obstacles;
        return a[x][y + 1];
        break;

    case UP:
        if (x - 1 < 0)
            return Obstacles;
        return a[x - 1][y];
        break;

    case DOWN:
        if (x + 1 >= N)
            return Obstacles;
        return a[x + 1][y];
        break;
    
    default:
        break;
    }
    return Obstacles;
}

void move(int &x, int &y, int f)
{
    switch (f)
    {
    case LEFT:
        y -= 1;
        break;
    case RIGHT:
        y += 1;
        break;
    case UP:
        x -= 1;
        break;
    case DOWN:
        x += 1;
        break;
    default:
        break;
    }
}

# ifdef _LOCAL
int _debug_print()
{
    system("cls");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            switch (a[i][j])
            {
            case Map_t::Space:
                if (fx == i && fy == j)
                    cout << 'F';
                else if (cx == i && cy == j)
                    cout << 'C';
                else
                    cout << '.';
                    break;
            case Map_t::Obstacles:
                cout << '*';
                break;
            default:
                break;
            }
        }
        cout << endl;
    }
    return 0;
}
# endif

int main()
{
# ifdef _LOCAL
    freopen("a.in", "r", stdin);
    puts("---------------------------LOCAL---------------------------");
# endif
    ios::sync_with_stdio(false);
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            char x;
            cin >> x;
            switch (x)
            {
            case '.':
                a[i][j] = Map_t::Space;
                break;
            case '*':
                a[i][j] = Map_t::Obstacles;
                break;
            case 'F':
                a[i][j] = Map_t::Space;
                fx = i, fy = j, ff = UP;
                break;
            case 'C':
                a[i][j] = Map_t::Space;
                cx = i, cy = j, ff = UP;
                break;
            default:
                break;
            }
        }
    }

    while((!is_met()))
    {
        if (t == 200000)
        {
            cout << 0;
            return 0;
        }
        //  Move farmer
        if (facing(fx, fy, ff) == Map_t::Obstacles)
            ff = (ff + 1) % 4;
        else
            move(fx, fy, ff);
        //  Move cow
        if (facing(cx, cy, cf) == Map_t::Obstacles)
            cf = (cf + 1) % 4;
        else   
            move(cx, cy, cf);
# ifdef _LOCAL
        _debug_print();
# endif
        // Counting time
        t++;
    }

    cout << t;
    
    return 0;
}