/*Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".

Input format :
String S

Output format :
Modified string

Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.

Sample Input 1 :
hello

Sample Output 1:
hel*lo

Sample Input 2 :
aaaa

Sample Output 2 :
a*a*a*a*/

------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
#include <iostream>
#include "solution.h"
using namespace std;

void pairStar_Actual(char *temp, char *output, int count = 0) {
    //base case
    if(*temp == '\0'){
        return;
    }
    
    //nth step
    if(*temp == *(temp + 1)) {
        output[count++] = *temp;
        output[count++] = '*';
    } else { 
        output[count++] = *temp;
    }
    
    //hypothesis step
    pairStar_Actual(temp + 1, output, count);
}

void pairStar(char input[]) {
    // Write your code here
	char output[1000] = " ";
    
    pairStar_Actual(input, output);
    
    char *ptr = output;
    
    while(*ptr) {
        *input++ = *ptr++;
    }
    *input = '\0';
}

int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}
