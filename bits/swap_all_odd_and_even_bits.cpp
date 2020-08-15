#if 0

Swap odd and even bits of number ->

Given an unsigned integer N. The task is to swap all odd bits with even bits. For example, if the given number is 23 (00010111), it should be converted to 43(00101011). Here, every even position bit is swapped with adjacent bit on right side(even position bits are highlighted in binary representation of 23), and every odd position bit is swapped with adjacent on left side.

Input:
The first line of input contains T, denoting the number of testcases. Each testcase contains single line.

Output:
For each testcase in new line, print the converted number.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 100

Example:
Input:
2
23
2

Output:
43
1

Explanation:
Testcase 1: BInary representation of the given number; 00010111 after swapping 00101011.

#endif

#include<iostream>
using namespace std;

unsigned int swapped_bits(int num)
{
	unsigned int even_bits = x & 0xAAAAAAAA;
	unsigned int odd_bits = x & 0x55555555;

	return (even_bits>>1)|(odd_bits<<1);
}

int main()
{
	int num_of_tc,num;
	cin >> num_of_tc;
	while(num_of_tc--)
	{
		cin >> num;
		cout << swapped_bits(num) << endl;
	}
	return 0;
}
