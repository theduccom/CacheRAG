#include<bits/stdc++.h>
using namespace std;
typedef long long int lld;

int main(){
  int num[5];
  while(scanf("%d,%d,%d,%d,%d",&num[0],&num[1],&num[2],&num[3],&num[4])!=EOF){
    sort(num,num+5);
    bool three = false;
    int pair = 0;
    for(int i=0;i<4;i++){
      if(num[i] == num[i+1]){
	pair++;
      }
      if(i < 3 && num[i] == num[i+1] && num[i] == num[i+2]){
	three = true;
      }
    }
    if((num[0] == num[1] && num[1] == num[2] && num[2] == num[3]) ||
       (num[1] == num[2] && num[2] == num[3] && num[3] == num[4])){
      cout << "four card" << endl;
    }
    else if(three && pair == 3){
      cout << "full house" << endl;
    }
    else if(num[0] == num[1]-1 && num[0] == num[2]-2 &&
	    num[0] == num[3]-3 && num[0] == num[4]-4){
      cout << "straight" << endl;
    }
    else if(num[0] == 1 && num[1] == 10 && num[2] == 11 &&
	    num[3] == 12 && num[4] == 13){
      cout << "straight" << endl;
    }
    else {
      if(three) cout << "three card" << endl;
      else if(pair == 2) cout << "two pair" << endl;
      else if(pair == 1) cout << "one pair" << endl;
      else cout << "null" << endl;
    }
  }
}