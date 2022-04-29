int findOddNums(int arr[], int n)
{
  int res = 0, i;
  for(i = 0; i < n; i++)
    {
      res ^= arr[i];
      return res;
    }
}