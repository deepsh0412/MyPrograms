#if 0

Set kth bit ->

Given a number N and a value K. From the right, set the Kth bit in the binary representation of N. The position of LSB(or last bit) is 0, second last bit is 1 and so on. Also, 0 <= K < X, where X is the number of bits in the binary representation of N.

Input:
First line of input contains a single integer T, which denotes the number of test cases. T test cases follows. First line of each testcase contains two space separated integers N and K.

Output:
For each test case, print the new number after setting the Kth bit of N.

Constraints:
1 <= T <= 100
1 <= N <= 1000

Example:
Input:
2
10 2
15 3

Output:
14
15

Explanation:
Testcase 1: Binary representation of the given number 10 is: 1 0 1 0, number of bits in the binary reprsentation is 4. Thus 2nd bit from right is 0. The number after changing this bit to 1 is: 14(1 1 1 0).

#endif

#include<iostream>
using namespace std;

int kth_set_bit(int num, int pos)
{
	return num | (1<<(pos));
}

int main()
{
	int num_of_tc,num,pos;
	cin >> num_of_tc;
	while(num_of_tc--)
	{
		cin >> num >> pos;
		cout << kth_set_bit(num,pos) << endl;
	}
	return 0;
}
