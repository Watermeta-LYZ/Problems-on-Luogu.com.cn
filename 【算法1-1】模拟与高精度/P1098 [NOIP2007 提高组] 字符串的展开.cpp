/*********************************************************/
//@File:               P1098 [NOIP2007 提高组] 字符串的展开.cpp
//@Author:             LYZ
//@Email:              L_Y_Z_ZMT@163.com
//@Date:               2023-01-13, 星期五
//@Time:               20:06:47
/*********************************************************/
//Problem [P1098 [NOIP2007 提高组] 字符串的展开]

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

bool check(char c1, char c2)
{
    return ((c1 < c2) && ((isdigit(c1) && isdigit(c2) || (isalpha(c1) && isalpha(c2)))));
}

string unfold(char c1, char c2, int p1, int p2, int p3)
{
    string ret("");
    for (char i = c1 + 1; i < c2; i++)
    {
        switch (p1)
        {
        case 1:
            for (int j = 0; j < p2; j++)
                ret += tolower(i);
            break;
        
        case 2:
            for (int j = 0; j < p2; j++)
                ret += toupper(i);
            break;

        case 3:
            for (int j = 0; j < p2; j++)
                ret += '*';
            break;

        default:
            break;
        }
    }
    if (p3 - 1)
    {
        reverse(ret.begin(), ret.end());
    }
    return ret;
}

int main()
{
# ifdef _LOCAL
    freopen("a.in", "r", stdin);
    puts("---------------------------LOCAL---------------------------");
# endif
    ios::sync_with_stdio(true);
    
    string str, res;
    int p1, p2, p3;
    cin >> p1 >> p2 >> p3;
    cin >> str;
    res += str[0];
    for (int i = 1; i < str.length() - 1; i++) // 排除第一位和最后一位
    {
        if (str[i] == '-' && check(str[i - 1], str[i + 1]))
            res += unfold(str[i - 1], str[i + 1], p1, p2, p3);
        else
            res += str[i];
    }
    res += str[str.length() - 1];
    cout << res;
    return 0;
}