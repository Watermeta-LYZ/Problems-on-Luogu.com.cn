/*********************************************************/
//@File:               T23713 [愚人节题目2]数据结构大毒瘤.cpp
//@Author:             LYZ
//@Email:              L_Y_Z_ZMT@163.com
//@Date:               2023-01-13, 星期五
//@Time:               21:26:44
/*********************************************************/
//Problem [T23713 [愚人节题目2]数据结构大毒瘤]

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

const int MAXN = 100000;
long long s[MAXN];

void w0(int a, int b, int c)
{
    for (int i = a + 1; i <= b; i++)
        cout << s[i] << " ";
}

void w1(int a, int b, int c)
{
    reverse(s + a + 1, s + b);
}

void w2(int a, int b, int c)
{
    for (int i = a + 1; i <= b; i++)
        s[i] += c;
}

void w3(int a, int b, int c)
{
    for (int i = a + 1; i <= b; i++)
        s[i] *= c;
}

void w4(int a, int b, int c)
{
    for (int i = a + 1; i <= b; i++)
        s[i] = sqrt(s[i]);
}

void w5(int a, int b, int c)
{
    for (int i = a + 1; i <= b; i++)
        s[i] += (i - a + 1) * c;
}

void w6(int a, int b, int c)
{
    int w = b - a;
    for (int i = a + 1; i <= b; i++)
        swap(s[i], s[i + w]);
}

void (*wf[7])(int, int, int) = { w0, w1, w2, w3, w4, w5, w6 };

int main()
{
# ifdef _LOCAL
    freopen("a.in", "r", stdin);
    puts("---------------------------LOCAL---------------------------");
# endif
    ios::sync_with_stdio(true);
    
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    
    for (int i = 0; i < m; i++)
    {
        int w, a, b, c;
        cin >> w >> a >> b >> c;
        wf[w](a, b, c);
        /*switch (w)
        {
        case 0: w0(a, b);       break;
        case 1: w1(a, b);       break;
        case 2: w2(a, b, c);    break;
        case 3: w3(a, b, c);    break;
        case 4: w4(a, b);       break;
        case 5: w5(a, b, c);    break;
        case 6: w6(a, b, c);    break; 
        default:
            break;
        }*/
    }
    
    return 0;
}