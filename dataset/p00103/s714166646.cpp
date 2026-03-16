#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  while(n--){
    int out=0, base = 0, score = 0;

    while(out<3){
      string s;
      cin >> s;
      if(s == "OUT"){
	out++;
      }else if(s == "HIT"){
	base++;
	if(base == 4){
	  base--;
	  score++;
	}
      }else{
	score += base + 1;
	base = 0;
      }
    }

    cout << score << endl;
  }
}