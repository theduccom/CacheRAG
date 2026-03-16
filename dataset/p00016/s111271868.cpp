#include <iostream>
using namespace std;

long double abs(long double x)
{
  return (x < 0.0 ? -x : x);
}

long double sqrt(long double x)
{
  const long double EPS = 1e-8;
  long double x0 = x / 2.0, nx = 0.0;

  while (abs(nx - x0) > EPS){
    nx = x0;
    x0 = (x0 + x / x0) / 2.0;
  }

  return x0;
}

long double pi(int n = 1024)
{
  long double a = 1.0, b = 1.0 / sqrt(2.0), t = 1.0 / 4.0, p = 1;

  for (int i = 1; i < n; i++){
    long double na, nb, nt, np;
    na = (a + b) / 2.0;
    nb = sqrt(a * b);
    nt = t - p * (a - na) * (a - na);
    np = 2.0 * p;

    a = na;
    b = nb;
    t = nt;
    p = np;
  }

  return (a + b) * (a + b) / (4.0 * t);
}

long double fact(int n)
{
  long double ret = 1.0;
  for (int i = 1; i <= n; i++)
    ret *= (long double)i;
  return ret;
}

long double pow(long double x, int n)
{
  if (n == 0) return 1.0;
  long double a = pow(x, n / 2);
  if (n & 1){
    return a * a * x;
  } else {
    return a * a;
  }
}

long double sin(int x, int n = 1000)
{
  long double m_pi = pi();
  long double r = ((long double)x * m_pi) / 180.0;

  //printf("pi : %.15lf\n", (double)m_pi);
  long double ret = 0.0;
  for (int i = 0; i < n; i++){
    long double p = pow(r, 2 * i + 1);
    long double f = fact(2 * i + 1);

    //printf("pow : %lf\nfact : %lf\n", (double)p, (double)f);
    ret += ((long double)pow(r, 2 * i + 1) / (long double)fact(2 * i + 1)) * (i & 1 ? -1.0 : 1.0);
  }

  return ret;
}

long double cos(int x, int n = 1000)
{
  long double m_pi = pi();
  long double r = ((long double)x * m_pi) / 180.0;

  long double ret = 0.0;
  for (int i = 0; i< n; i++){
    ret += ((long double)pow(r, 2 * i) / (long double)fact(2 * i)) * (i & 1 ? -1.0 : 1.0);
  }

  return ret;
}

int main()
{
  long double x, y;
  int d, a;
  x = y = 0.0;

  int r = 90;
  while(true){
    int d, a;
    scanf("%d,%d", &d, &a);
    if (d == 0 && a == 0){
      break;
    }

    x += cos(r) * (double)d;
    y += sin(r) * (double)d;

    r -= a;
  }

  printf("%d\n%d\n", (int)x, (int)y);
}