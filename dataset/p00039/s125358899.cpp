#include<bits/stdc++.h>
using namespace std;

int main(){

  int tmpi[7] = {1, 5, 10, 50, 100, 500, 1000};
  int ans;
  string tmpc = "IVXLCDM";
  char s[111];

  while(scanf("%s", s) != EOF){

    ans = 0;

    for(int i = 0; i < strlen(s); i++){

      int n1 = tmpi[tmpc.find(s[i])], n2 = tmpi[tmpc.find(s[i+1])];
      if(i+1 >= strlen(s)) n2 = 0;

      if(n1 < n2){
	ans += (n2 - n1);
	i++;
      }
      else ans += n1;

    }

    cout << ans << endl;

  }
  
  return 0;

}