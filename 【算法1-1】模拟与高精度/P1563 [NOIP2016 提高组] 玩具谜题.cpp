/*********************************************************/
//@File:               P1563 [NOIP2016 提高组] 玩具谜题.cpp
//@Author:             LYZ
//@Email:              L_Y_Z_ZMT@163.com
//@Date:               2023-01-10, 星期二
//@Time:               14:12:41
/*********************************************************/
//Problem [P1563 [NOIP2016 提高组] 玩具谜题]

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

# define FACE_IN        0
# define FACE_OUT       1
# define LEFT           0
# define RIGHT          1

# define NEXT           0
# define LAST           1

using namespace std;

const int MAXN = 100010, MAXM = 100010;
int DIR_LIST[2][2];
int n, m;

struct VILLAIN
{
    bool dir;
    string job;
} villains[MAXN];

struct INSTRUCTION
{
    bool dir;
    int step;
};

int next_one(int idx, INSTRUCTION inst)
{
    bool direct = DIR_LIST[villains[idx].dir][inst.dir];
    if (direct == NEXT)
    {
        idx = (idx + n + inst.step) % n;
    }
    else
    {
        idx = (idx + n - inst.step) % n;
    }
    return idx;
}

int main()
{
# ifdef _LOCAL
    freopen("a.in", "r", stdin);
    puts("---------------------------LOCAL---------------------------");
# endif
    ios::sync_with_stdio(true);

    DIR_LIST[FACE_IN][LEFT]   = LAST;
    DIR_LIST[FACE_OUT][LEFT]  = NEXT;
    DIR_LIST[FACE_IN][RIGHT]  = NEXT;
    DIR_LIST[FACE_OUT][RIGHT] = LAST;

    //  定义指令执行完成后小人的位置
    int idx = 0;

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> villains[i].dir >> villains[i].job;
    for (int i = 0; i < m; i++)
    {
        INSTRUCTION inst;
        cin >> inst.dir >> inst.step;
        idx = next_one(idx, inst);
    }
    cout << villains[idx].job << endl;

    return 0;
}