/*Sort an array A using Quick Sort.
Change in the input array itself. So no need to return or print anything.


Input format :
Line 1 : Integer n i.e. Array size
Line 2 : Array elements (separated by space)

Output format :
Array elements in increasing order (separated by space)

Constraints :
1 <= n <= 10^3

Sample Input 1 :
6 
2 6 8 5 4 3

Sample Output 1 :
2 3 4 5 6 8

Sample Input 2 :
5
1 5 2 7 3

Sample Output 2 :
1 2 3 5 7 */

------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
#include<iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *arr, int start, int end) {
    int pivot = arr[end];
    int j = start;
    int i = start - 1;
    
    while(j < end) {
        if(arr[j] < pivot) {
            i++;
            swap(&arr[j],&arr[i]);
            
        }
        j++;
    }
    swap(&arr[i + 1], &arr[j]);
    
    return i + 1;
    
}

void quickSort(int input[], int start, int end) {
    // base case 
	if(start >= end) {
        return;
    }
    int pivot = partition(input, start, end);
    
    quickSort(input, start, pivot - 1);
    quickSort(input, pivot + 1, end);
}

void quickSort(int input[], int size) {
  
    quickSort(input, 0, size - 1);

}


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}


