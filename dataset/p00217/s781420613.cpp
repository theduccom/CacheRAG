#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
#include<cmath>
#include<cstring>
using namespace std;

typedef struct{
  int num;
  int first;
  int second;
}Walk;

int main(){
  int n,max=-1,add;
  Walk people[10005];

  while(1){
    scanf("%d",&n);
    if(n==0) break;

    for(int i=0;i<n;i++){
      scanf("%d %d %d",&people[i].num,&people[i].first,&people[i].second);
      if(max<people[i].first+people[i].second){
	max=people[i].first+people[i].second;
	add=i;
      }
    }
    printf("%d %d\n",people[add].num,max);
    add=0;
    max=-1;
  }

  return 0;
}

