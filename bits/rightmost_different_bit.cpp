#if 0
Rightmost different bit ->

Given two numbers M and N. The task is to find the position of rightmost different bit in binary representation of numbers.

Input:
The input line contains T, denoting the number of testcases. Each testcase follows. First line of each testcase contains two space separated integers M and N.

Output:
For each testcase in new line, print the position of rightmost different bit in binary representation of numbers. If both M and N are same then print -1 in this case.

Constraints:
1 <= T <= 100
1 <= M <= 103
1 <= N <= 103

Example:
Input:
2
11 9
52 4

Output:
2
5

Explanation:
Tescase 1: Binary representaion of the given numbers are: 1011 and 1001, 2nd bit from right is different.

#endif

#include<iostream>
#include<cmath>
using namespace std;

int rightmost_separate_bit(unsigned int first_number, unsigned int second_number)
{
	if(first_number == second_number)
		return -1;

	unsigned int xor_number = first_number ^ second_number;
	int pos = xor_number & -xor_number;
	return log2(pos)+1;
}

int main()
{
	int num_of_tc,first_number,second_number;
	cin >> num_of_tc;
	while(num_of_tc--)
	{
		cin >> first_number >> second_number;
		cout << rightmost_separate_bit(first_number, second_number) << endl;
	}
	return 0;
}
