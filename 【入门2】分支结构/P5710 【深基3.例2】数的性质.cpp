/*********************************************************/
//@Author:					LYZ
//@Email:					L_Y_Z_ZMT@163.com
//@Date:					2023-01-09 13:31:52
//@Last Modified by:		
//@Last Modified time:		2023-01-09 13:41:03
//@Description: 
/*********************************************************/
//Problem [P5710 【深基3.例2】数的性质]

# include <iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	bool attr1 = (x % 2 == 0),
		 attr2 = ((x > 4) && (x <= 12));
	cout << (attr1 && attr2) << " " << (attr1 || attr2) << " " << ((attr1 + attr2) == 1) << " " << (!(attr1) && !(attr2));
    return 0;
}