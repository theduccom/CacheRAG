//National Budget
#include<bits/stdc++.h>
using namespace std;

char n1[100], n2[100], ans[100];

void reverse(char n[100], int l, int r){
  if(l>=r)return;
  swap(n[l], n[r]);
  reverse(n, l+1, r-1);
}

void sum(int n, int m){
  int x1=(n>=strlen(n1) ? 0 : n1[n]-'0');
  int x2=(n>=strlen(n2) ? 0 : n2[n]-'0');
  int tmp=x1+x2+m;
  if(n==100 || (n>=strlen(n1) && n>=strlen(n2) && m==0))return;
  ans[n]=tmp%10+'0';
  sum(n+1, tmp/10);
}

int main(){
  int n;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    fill(ans, ans+99, '\0');
    scanf("%s", n1); scanf("%s", n2);
    reverse(n1, 0, strlen(n1)-1);
    reverse(n2, 0, strlen(n2)-1);
    sum(0, 0);
    if(strlen(ans)>80) printf("overflow\n");
    else{
      reverse(ans, 0, strlen(ans)-1);
      printf("%s\n", ans);
    }
  }

  return 0;
}