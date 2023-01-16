/*********************************************************/
//@File:               P1303 A×B Problem.cpp
//@Author:             LYZ
//@Email:              L_Y_Z_ZMT@163.com
//@Date:               2023-01-10, 星期二
//@Time:               19:19:31
/*********************************************************/
//Problem [P1303 A×B Problem]

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

class BigInt
{
protected:
    string _data;
public:
    BigInt()
    {
        this->_data = "";
    }
    BigInt(string num)
    {
        this->fromString(num);
    }
    bool check()
    {
        for (char i : this->_data)
        {
            if (!('0' <= i && i <= '9'))
            {
                return false;
            }
        }
        return true;
    }
    void pop0()
    {
        if (_data.length() == 1)
            return;
        int i;
        for (i = 0; i < _data.length(); i++)
        {
            if (_data[i] != '0')
                break;
        }
        _data = _data.substr(i, _data.length());
    }
    void fromString(string num)
    {
        _data = num;
        pop0();
        if (check())
            return;
        _data = "";
    }
    string toString()
    {
        return _data;
    }
    BigInt& operator=(const BigInt& b)
    {
        this->_data = b._data;
        return *this;
    }
    BigInt operator*(const BigInt& bx)
    {
        const BigInt& ax(*this);

        vector<int> a, b, result;
        int lena = ax._data.length(),
            lenb = bx._data.length();

        if ((lena == 1 && ax._data[0] == '0') || (lenb == 1 && bx._data[0] == '0'))
            return BigInt("0");

        for (int i = 0; i < lena; i++)
            a.push_back(ax._data[i] - '0');
        reverse(a.begin(), a.end());
        
        for (int i = 0; i < lenb; i++)
            b.push_back(bx._data[i] - '0');
        reverse(b.begin(), b.end());

        result.resize(lena + lenb);

        int carry;
        for (int i = 0; i < lena; i++)
        {
            carry = 0;
            for (int j = 0; j < lenb; j++)
            {
                result[i + j] += a[i] * b[j] + carry;
                carry = result[i + j] / 10;
                result[i + j] %= 10;
            }
            result[i + lenb] = carry;
        }
        reverse(result.begin(), result.end());
        string str;
        for (int i : result)
            str += i + '0';
        const BigInt& ret(str);
        return ret;
    }
    friend ostream& operator<<(ostream& out, const BigInt& a);
    friend istream& operator<<(istream& in,  const BigInt& a);
};

ostream& operator<<(ostream& out, const BigInt& a)
{
    out << a._data;
	return out;
}

istream& operator>>(istream& in, BigInt& a)
{
    string str;
    in >> str;
    a.fromString(str);
    return in;
}

int main()
{
# ifdef _LOCAL
    freopen("a.in", "r", stdin);
    puts("---------------------------LOCAL---------------------------");
# endif
    ios::sync_with_stdio(true);
    
    BigInt a, b;
    cin >> a >> b;
    cout << a * b;
    
    return 0;
}