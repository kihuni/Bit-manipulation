//“Given a set of numbers where all elements occur even a number of times except one number, find the odd occurring number” This problem can be efficiently solved by just doing XOR of all numbers. 


#include <stdio.h>

int findOddNums(int arr[], int n)
{
  int res = 0, i;
  for(i = 0; i < n; i++)
    {
      res ^= arr[i];
      return res;
    }
}

int main(void) {

  int arr[] = { 12, 12, 14, 90, 14, 14, 14 };
  int n = sizeof(arr) / sizeof(arr[0]);
  
  printf("Print the odd ocuring number %d\n", findOddNums(arr , n) );
  return 0;
}