#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  vector<int> c(5);
  while(scanf("%d,%d,%d,%d,%d",&c[0],&c[1],&c[2],&c[3],&c[4]) != EOF){
    int ans = 0;
    sort(c.begin(),c.end());
    for(int i=0; i<5; i++){
      if(i<2){
	if(c[i] == c[i+1] && c[i+1] == c[i+2] && c[i+2] == c[i+3]){
	  ans+=6;
	  i+=3;
	}
      }
      if(i<3){
	if(c[i] == c[i+1] && c[i+1] == c[i+2]){
	  ans+=3;
	  i+=2;
	}
      }
      if(i<4){
	if(c[i] == c[i+1]){
	  ans+=2;
	  i++;
	}
      }
    }
    if(ans == 6) cout <<"four card"<<endl;
    else if(ans == 5) cout <<"full house"<<endl;
    else if(ans == 4) cout <<"two pair"<<endl;
    else if(ans == 3) cout <<"three card"<<endl;
    else if(ans == 2) cout <<"one pair"<<endl;
    else if(c[0]+1 == c[1] && c[1]+1 == c[2] && c[2]+1 == c[3] && c[3]+1 == c[4]) cout <<"straight"<<endl;
    else if(c[0] == 1 && c[1] == 10 && c[2] == 11 && c[3] == 12 && c[4] == 13) cout <<"straight"<<endl;
    else cout <<"null"<<endl;
  }
  return 0;
}