#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int tanka,ryou;
  int total=0,average=0;
  int count=0,ryoutotal=0;

  while( scanf("%d,%d",&tanka, &ryou) != EOF){
    total = total + tanka * ryou;
    count++;
    ryoutotal = ryoutotal + ryou;
  }

  average = (int) (ryoutotal/(double)count + 0.5);
  printf("%d\n%d\n", total, average);
}