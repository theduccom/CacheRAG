#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int>P;

#define INF 2<<29
#define F first
#define S second

int main(){
  int a[3];
  int temp=0;
  scanf("%d %d %d",&a[0],&a[1],&a[2]);
  
  if(a[0]&&a[1]&&!a[2]||!a[0]&&!a[1]&&a[2]) printf("Open\n");
  else printf("Close\n");
  
  return (0);
}

