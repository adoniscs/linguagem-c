#include <stdio.h>

int main()
{
  double area, raio, PI = 3.14159;

  scanf("%lf", &raio);

  area = PI * (raio * raio);

  printf("A=%.4lf\n", area);

  return 0;
}