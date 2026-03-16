#include <cstdio>
#include <cctype>

using namespace std;

char s[111];
int cur,len;

int shiki();

int kazu()
{
  if( s[cur] == '(' ) {
    cur += 1;
    int s = shiki();
    cur += 1;
    return s;
  } else {
    int a = s[cur]-'0';
    cur += 1;
    while( isdigit(s[cur]) ) {
      a *= 10;
      a += s[cur]-'0';
      cur += 1;
    }
    return a;
  }
}          

int kou()
{
  int a = kazu();
  while( s[cur] == '*' || s[cur] == '/' ) {
    char o = s[cur]; cur += 1;
    int b = kazu();
    o=='*'?(a*=b):(a/=b);
  }
  return a;
}

int shiki()
{
  int a = kou();
  while( s[cur] == '+' || s[cur] == '-' ) {
    char o = s[cur]; cur += 1;
    int b = kou();
    if( o == '+' ) a += b;
    else a -= b;
  }
  return a;
}

int parse()
{
  len = 0;
  while( s[len] ) len++;
  len--;
  cur = 0;
  return shiki();
}

int main(void)
{
  int n; scanf("%d",&n);
  while( n-- ) {
    scanf("%s",s);
    printf("%d\n",parse());
  }
  return 0;
}