/*********************************************************/
//@File:               P1065 [NOIP2006 提高组] 作业调度方案.cpp
//@Author:             LYZ
//@Email:              L_Y_Z_ZMT@163.com
//@Date:               2023-01-13, 星期五
//@Time:               23:12:19
/*********************************************************/
//Problem [P1065 [NOIP2006 提高组] 作业调度方案]

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

const int MAXM = 24, MAXN = 24;
int steps[MAXN * MAXM], progs[MAXN];  // prog: Progress
int id[MAXN][MAXM], t[MAXN][MAXM];

int main()
{
# ifdef _LOCAL
    freopen("a.in", "r", stdin);
    puts("---------------------------LOCAL---------------------------");
# endif
    ios::sync_with_stdio(false);
    
    int m, n;
    int totalTime = 0;
    MEM(progs, 0);

    cin >> m >> n;
    for (int i = 0; i < n * m; i++)
        cin >> steps[i];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> id[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> t[i][j];
    
    for (int i = 0; i < n * m; i++)
    {
        progs[steps[i]]++;
        
        int step = steps[i], prog = progs[step];
        
    }

    cout << totalTime << endl;

    return 0;
}