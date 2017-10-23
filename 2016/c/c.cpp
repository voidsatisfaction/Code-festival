#include <cstdio>

typedef long long ll;

int N;
ll ans=1;

int main()
{
  scanf("%d", &N);
  ll t[N], a[N];
  for (int i = 0; i < N; i++)
    scanf("%lld", &t[i]);
  for (int i = 0; i < N; i++)
    scanf("%lld", &a[i]);

  for (int i = 1; i < N; i++)
  {
    if (t[i] != t[i-1] || a[i]){
      
    }
  }
}