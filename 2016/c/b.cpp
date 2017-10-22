#include <cstdio>
#include <algorithm>

#define MAX_T 100

int K, T, a[MAX_T];

int main()
{
  scanf("%d %d", &K, &T);
  for (int i = 0; i < T; i++)
    scanf("%d", &a[i]);
  
  int aMax=0, aSecondMax=0;
  while (true){
    int aMaxIndex = 0;
    int aSecondMaxIndex = 0;
    for (int i = 0; i < T; i++)
    {
      if (a[i] > aMax){
        aMax = a[i];
        aMaxIndex = i;
      }
    }
    for (int i = 0; i < T; i++)
    {
      if (a[i] > aSecondMax && i != aMaxIndex){
        aSecondMax = a[i];
        aSecondMaxIndex = i;
      }
    }
    if (aSecondMax == 0){
      break;
    }
    a[aMaxIndex]--;
    a[aSecondMaxIndex]--;
    aMax = 0;
    aSecondMax = 0;
  }
  if (aMax == 0){
    aMax = 1;
  }
  printf("%d\n", aMax-1);
  return 0;
}