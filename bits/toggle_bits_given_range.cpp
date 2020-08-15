#if 0

Toggle bits given range ->

Given a non-negative number N and two values L and R. The problem is to toggle the bits in the range L to R in the binary representation of N, i.e, to toggle bits from the rightmost Lth bit to the rightmost Rth bit. A toggle operation flips a bit 0 to 1 and a bit 1 to 0.

Input:
First line of input contains a single integer T which denotes the number of test cases. Then T test cases follows. First line of each test case contains three space separated integers N, L and R.

Output:
For each test case , print the number obtained by toggling bits from the rightmost Lth bit to the rightmost Rth bit in binary representation of N.

Constraints:
1<=T<=100
1<=N<=1000
1<=L<=R
L<=R<= Number of bits(N)

Example:
Input:
2
17 2 3
50 2 5
Output:
23
44

#endif

#include<iostream>
using namespace std;

int toggle_bits_in_range(unsigned int num, int lth, int rth)
{
	int left_factor = (1<<(rth))-1;
        int right_factor = (1<<(lth-1))-1;
        int toggle_operand = left_factor ^ right_factor;

        return num^toggle_operand;
}

int main()
{
	int num_of_tc,num,lth,rth;
	cin >> num_of_tc;
	while(num_of_tc--)
	{
		cin >> num >> lth >> rth;
		cout << toggle_bits_in_range(num,lth,rth) << endl;
	}
	return 0;
}
