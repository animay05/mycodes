#include <stdio.h>

int maxSubarraySum(int *arr, int n, int k)
{
  if(k>n){ return -1;} // IMPOSSIBLE SITUATION
  int maxSum = 0;
  for(int i=0; i<k; i++)
    maxSum += arr[i];
  int start = 0;
  int end = k-1;
  int currentSum = maxSum;
  while(end<n) // MOVING THE WINDOW BY ONE POSITION
  {
    currentSum -= arr[start];
    start++;
    end++;
    currentSum += arr[end];
    if(currentSum > maxSum)
      maxSum = currentSum;
  }
  return maxSum;
}
