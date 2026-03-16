#include<iostream>
#include<cstdio>
using namespace std;

void swap(int &a, int &b)
{
	int tmp(a);
	a = b;
	b = tmp;
}

int main(){
  char m,n;
  int ball[3]={1,0,0};
  while(scanf("%c,%c",&m,&n) != EOF)
    swap(ball[m-'A'],ball[n-'A']);
  for(int i=0; i<3; i++){
    if(ball[i] == 1)
      m = i+'A';
  }
  cout << m << endl;
}