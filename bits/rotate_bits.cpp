#if 0

Given an integer N and an integer D, you are required to write a program to rotate the binary representation of the integer N by D digits to the left as well as right and print the results in decimal values after each of the rotation.
Note: Integer N is stored using 16 bits. i.e. 12 will be stored as 0000.....001100.

Input:
First line of input contains a single integer T which denotes the number of test cases. Each test case contains two space separated integers N and D where N denotes the number to be rotated and D denotes the number of digits by which the number is required to be rotated.

Output:
For each testcase, in a new line, print the value of number N after rotating it to left by D digits in one line, and second line prints the value of number N after rotating it to the right by D digits.

Constraints:
1 <= T <= 100
1 <= N <  216
1 <= D <= 105

Example:
Input:
2
229 3
28 2
Output:
1832
40988
112
7

#endif

#include<iostream>
using namespace std;
#define INT_BITS 16

void left_rotation(unsigned int num, unsigned int bits_to_rotate)
{
        int left_shift_val = ((num << bits_to_rotate)|(num >> (INT_BITS - bits_to_rotate)));
        left_shift_val &= ((1 << (INT_BITS)) - 1);
        cout << left_shift_val << endl;
}

void right_rotation(unsigned int num, unsigned int bits_to_rotate)
{
        int right_shift_val = (num >> bits_to_rotate)|(num << (INT_BITS - bits_to_rotate));
        right_shift_val &= ((1 << (INT_BITS)) - 1);
        cout << right_shift_val << endl;
}

int main()
{
        int num_of_tc,num,bits_to_rotate;
        cin >> num_of_tc;
        while(num_of_tc--)
        {
                cin >> num >> bits_to_rotate;
                left_rotation(num, bits_to_rotate%INT_BITS);
                right_rotation(num, bits_to_rotate%INT_BITS);
        }   
        return 0;
}
