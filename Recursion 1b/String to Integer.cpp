/*Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.

Input format :
Numeric string S (string, Eg. "1234")

Output format :
Corresponding integer N (int, Eg. 1234)

Constraints :
0 <= |S| <= 9
where |S| represents length of string S.

Sample Input 1 :
00001231

Sample Output 1 :
1231

Sample Input 2 :
12567

Sample Output 2 :
12567*/

-------------------------------------------------------------------------------------------------------------------------------------------------------------
  
#include <iostream>
#include "solution.h"
using namespace std;

void stringToNumber_Actual(char temp[], int &n) {
    if(*temp == '\0') {
        return;
    }
    
    n = (n * 10) + (*temp - '0') ;
    
    //hyothesis step
    stringToNumber_Actual(temp + 1, n);
     
}

int stringToNumber(char temp[]) {
    int answer = 0;
    
    stringToNumber_Actual(temp, answer);
    return answer;
}

int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
