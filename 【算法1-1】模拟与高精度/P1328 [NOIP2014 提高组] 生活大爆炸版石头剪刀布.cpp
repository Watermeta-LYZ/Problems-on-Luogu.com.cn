/*********************************************************/
//@File:               P1328 [NOIP2014 提高组] 生活大爆炸版石头剪刀布.cpp
//@Author:             LYZ
//@Email:              L_Y_Z_ZMT@163.com
//@Date:               2023-01-13, 星期五
//@Time:               08:21:05
/*********************************************************/
//Problem [P1328 [NOIP2014 提高组] 生活大爆炸版石头剪刀布]

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

# define Scissor 0
# define Stone   1
# define Cloth   2
# define Lizard  3
# define Spoke   4

# define WIN    1
# define DRAW   0
# define LOSE  -1

using namespace std;

const int MAXN = 204;
int a[MAXN], b[MAXN];

int score[5][5];

void init()
{
    score[Scissor][Scissor] = DRAW;
    score[Scissor][Stone]   = LOSE;
    score[Scissor][Cloth]   = WIN;
    score[Scissor][Lizard]  = WIN;
    score[Scissor][Spoke]   = LOSE;

    score[Stone][Scissor]   = WIN;
    score[Stone][Stone]     = DRAW;
    score[Stone][Cloth]     = LOSE;
    score[Stone][Lizard]    = WIN;
    score[Stone][Spoke]     = LOSE;

    score[Cloth][Scissor]   = LOSE;
    score[Cloth][Stone]     = WIN;
    score[Cloth][Cloth]     = DRAW;
    score[Cloth][Lizard]    = LOSE;
    score[Cloth][Spoke]     = WIN;

    score[Lizard][Scissor]  = LOSE;
    score[Lizard][Stone]    = LOSE;
    score[Lizard][Cloth]    = WIN;
    score[Lizard][Lizard]   = DRAW;
    score[Lizard][Spoke]    = WIN;

    score[Spoke][Scissor]   = WIN;
    score[Spoke][Stone]     = WIN;
    score[Spoke][Cloth]     = LOSE;
    score[Spoke][Lizard]    = LOSE;
    score[Spoke][Spoke]     = DRAW;
}

int main()
{
# ifdef _LOCAL
    freopen("a.in", "r", stdin);
    puts("---------------------------LOCAL---------------------------");
# endif
    ios::sync_with_stdio(true);
    
    int n, na, nb, sa = 0, sb = 0;
    init();
    cin >> n >> na >> nb;
    for (int i = 0; i < na; i++)
        cin >> a[i];
    for (int i = 0; i < nb; i++)
        cin >> b[i];
    
    for (int i = 0, ia = 0, ib = 0; i < n; i++, ia++, ib++)
    {
        if (ia >= na)
            ia = 0;
        if (ib >= nb)
            ib = 0;
        int s = score[a[ia]][b[ib]];
        if (s == WIN)
            sa++;
        if (s == LOSE)
            sb++;
        // 后边平局可以不写的
    }
    cout << sa << " " << sb;

    return 0;
}