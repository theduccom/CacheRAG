#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  int a,b,c,tyou=0,hishi=0;
	while(scanf("%d,%d,%d",&a,&b,&c)!=EOF){
		if(a*a+b*b==c*c)tyou++;
		else if(a==b)hishi++;
	}
	cout << tyou << '\n' << hishi << endl;
  return 0;
}