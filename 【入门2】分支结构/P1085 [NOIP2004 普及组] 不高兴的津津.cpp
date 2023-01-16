/*********************************************************/
//@Author:					LYZ
//@Email:					L_Y_Z_ZMT@163.com
//@Date:					2023-01-09 16:53:33
//@Last Modified by:		
//@Last Modified time:		2023-01-09 17:49:29
//@Description: 
/*********************************************************/
//Problem [P1085 [NOIP2004 普及组] 不高兴的津津]

# include <iostream>

using namespace std;

int main()
{
	int day = 0;
	int maxx;
	for (int i = 0; i < 7; i++)
	{
		int ins, outs, sum;
		cin >> ins >> outs;
		if ((sum = ins + outs) > 8)
		{
			if (sum > maxx)
			{
				maxx = sum;
				day = i + 1;
			}
		}
	}
	cout << day << endl;
    return 0;
}