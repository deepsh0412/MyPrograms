#if 0

Bit difference (number of bits need to change number from A to B) ->

You are given two numbers A and B. Write a program to count number of bits needed to be flipped to convert A to B.

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. The first line of each test case is A and B separated by a space.

Output:
For each testcase, in a new line, print the number of bits needed to be flipped.

Constraints:
1 ≤ T ≤ 100
1 ≤ A, B ≤ 103

Example:
Input:
1
10 20
Output:
4

Explanation:
Testcase1:
A  = 01010
B  = 10100
Number of bits need to flipped = 4

#endif

#include<iostream>
using namespace std;

int count_set_bits(int xor_of_num)
{
	int count = 0;
	while(xor_of_num)
	{
		count++;
		xor_of_num &= (xor_of_num-1);
	}
	return count;
}

int bit_difference(int num1, int num2)
{
	int xor_of_num = num1 ^ num2;
	return count_set_bits(xor_of_num);
}

int main()
{
	int num_of_tc,num1,num2;
	cin >> num_of_tc;
	while(num_of_tc--)
	{
		cin >> num1 >> num2;
		cout << bit_difference(num1,num2) << endl;
	}
	return 0;
}
