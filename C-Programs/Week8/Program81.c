#include<stdio.h>

// FUNTION PROTOTYPE;

int ncr(int a, int b);
int fact(int c);

int main()
{
  int i, m, n, sum = 0;
  printf("input m and n \n");
  scanf("%d %d", &m, &n);
  
  for (i=1;i <= m;i+=2)
    sum = sum + ncr(n, i);

  printf("Result: %d\n", sum);
}

int ncr(int n, int r)
{
  return(fact(n) / fact(r) / fact(n-r));
}

int fact(int n)
{
  int temp = 1;
  for (int i = 1;i <= n;i++)
    temp = temp * i;
  return(temp);
}

   

