/*Check whether a given String S is a palindrome using recursion. Return true or false.

Input Format :
String S

Output Format :
'true' or 'false'

Constraints :
0 <= |S| <= 1000

where |S| represents length of string S.

Sample Input 1 :
racecar

Sample Output 1:
true

Sample Input 2 :
ninja

Sample Output 2:
false*/

-----------------------------------------------------------------------------------------------------------------------------------------------------------
  
#include <cstring>
bool checkPalindrome(char input[])
{
    static int i = 0;
    int l = strlen(input);
    if (i == l)
        return true;
    if (input[i] == input[l - i - 1])
    {
        i++;
        checkPalindrome(input);
    }
    else
        return false;
}
