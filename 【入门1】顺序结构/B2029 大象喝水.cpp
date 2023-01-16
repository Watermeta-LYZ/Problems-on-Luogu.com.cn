/*********************************************************/
//@Author:					LYZ
//@Email:					L_Y_Z_ZMT@163.com
//@Date:					2022-12-05 19:01:47
//@Last Modified by:		
//@Last Modified time:		2022-12-05 19:17:57
//@Description: 
/*********************************************************/
//Problem [B2029 大象喝水]

# include <iostream>
# include <cmath>

using namespace std;

int main()
{
	double h, r, v;

	cin >> h >> r;
	h /= 10, r /= 10;
	v = 3 * r * r * h;

	cout << ceil(20 / v);

    return 0;
}