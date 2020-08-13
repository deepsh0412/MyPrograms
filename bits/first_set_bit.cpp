#if 0
Find first set bit ->

Given an integer an N. The task is to print the position of first set bit found from right side in the binary representation of the number.

Input:
The first line of the input contains an integer T, denoting the number of test cases. Then T test cases follow. The only line of the each test case contains an integer N.

Output:
For each test case print in a single line an integer denoting the position of the first set bit found form right side of the binary representation of the number. If there is no set bit print "0".

Constraints:
1 <= T <= 200
0 <= N <= 106

Example:
Input:
2
18
12

Output:
2
3

Explanation:
Testcase 1: Binary representation of the 18 is 010010, the first set bit from the right side is at position 2.
#endif


//Algorithm using 2's compliment of the number
#include<iostream>
#include<cmath>
using namespace std;

int first_set_bit(unsigned int test_number)
{
	if(test_number == 0)
		return 0;
	unsigned int pos = test_number & -test_number;
        return log2(pos)+1;
}

int main()
{
	int num_of_tc, test_number;
	cin >> num_of_tc;

	while(num_of_tc--)
	{
		cin >> test_number;
		cout << first_set_bit(test_number) << endl;
	}
	return 0;
}
