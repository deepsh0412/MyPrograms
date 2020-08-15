#if 0

Check if number is power of 2 ->

Given a positive integer N. The task is to check if N is a power of 2. That is N is 2x for some x.

Input:
The first line contains T denoting the number of test cases. Each test case contains a single positive integer N.

Output:
Print "YES" if it is a power of 2 else "NO" (Without the double quotes).

Constraints:
1 <= T <= 100
0 <= N <= 1018

Example:
Input :
2
1
98

Output :
YES
NO

Explanation:
Testcase 1:  1 is equal to 2 raised to 0 (20 == 1).

#endif

#include<iostream>
using namespace std;

string is_power_of_two(long long int num)
{
        if(!num)
            return "NO";
        return (num & (num -1))?"NO":"YES";
}

int main()
{
        int num_of_tc;
        long long int num;
        cin >> num_of_tc;
        while(num_of_tc--)
        {
                cin >> num;
                cout << is_power_of_two(num) << endl;
        }
        return 0;
}
