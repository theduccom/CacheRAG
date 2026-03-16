#include <cstdio>
#include <cstring>
#include <algorithm>

const int MAX_SIZE = 128;


using namespace std;

class Z
{
private:
  int size;
  char d[MAX_SIZE];
public:
  Z(char *s)
  {
    size = strlen(s);
    for(int i=0;i<MAX_SIZE - size;i++)
      d[i] = 0;
    for(int i=0,j=MAX_SIZE - size;j < MAX_SIZE; i++, j++)
      d[j] = s[i];
  }

  void add(Z r)
  {
    int tmp = max(this->size, r.size);
    int updigit = 0;
    for(int i=MAX_SIZE-1;i>=0;i--){
      int a = 0, b = 0;
      if(this->d[i] == 0 && r.d[i] == 0){
	if(updigit){
	  this->d[i] = '1';
	  tmp++;
	}
	goto end;
      }else{
	if(this->d[i])
	  a = this->d[i] - '0';
	if(r.d[i])
	  b = r.d[i] - '0';
	int n = a + b + updigit;
	updigit = n / 10;
	this->d[i] = (n % 10)+'0';
      }
    }
  end:
    this->size = tmp;
    return;
  }

  void print()
  {
    if(this->size > 80){
      puts("overflow");
      return;
    }
    for(int i=MAX_SIZE - this->size;i<MAX_SIZE;i++)
	putchar(d[i]);
    puts("");
  }

  int sz()
  {
    return this->size;
  }
};

int main()
{
  int x;
  scanf("%d", &x);
  char s1[1000], s2[1000];  
  for(int i=0;i<x;i++){
    scanf("%s %s",s1, s2);
    if(strlen(s1) > 80 || strlen(s2) > 80){
      puts("overflow");
      continue;
    }
    Z z1(s1);
    Z z2(s2);
    z1.add(z2);
    z1.print();
  }
  return 0;
}