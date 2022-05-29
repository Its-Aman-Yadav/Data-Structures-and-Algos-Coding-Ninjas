/*Given a string, compute recursively a new string where all 'x' chars have been removed.

Input format :
String S

Output format :
Modified String

Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string S. 

Sample Input 1 :
xaxb

Sample Output 1:
ab

Sample Input 2 :
abc

Sample Output 2:
abc

Sample Input 3 :
xx

Sample Output 3:

*/

---------------------------------------------------------------------------------------------------------------------------------------------------------------
  
#include <iostream>
#include "solution.h"
using namespace std;

void removeX_Actual(char temp[], char output[],int size,int count = 0) {
    if(!size) {
       return; 
    }
    
    if(*temp != 'x'){
        output[count++] = *temp;
    }
    
    removeX_Actual(temp + 1, output, size - 1, count);
        
}

void removeX(char input[]) {
	char output[1000] = " ";
    
    char *ptr = input;
    int size = 0;
    while(*ptr){
        size++;
        ptr++;
    }
    
    removeX_Actual(input, output, size);
    
    for(int i = 0; input[i] != '\0'; i++) {
        input[i] = '\0';
    }
    
    for(int i = 0; output[i] != '\0'; i++){
    	input[i] = output[i];
    }
}

int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
