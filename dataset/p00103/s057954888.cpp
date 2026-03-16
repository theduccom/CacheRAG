#include<iostream>
#include<string>
using namespace std;

int main(){
  int n;
  string s;
  cin >> n;
  for(int i=0; i<n; i++){
    int point=0, out_count=0;
    int r[3];
    for(int i=0; i<3; i++) r[i] = 0;
    while(out_count != 3){
      cin >> s;
      if(s == "HOMERUN"){
	point++;
	for(int i=0; i<3; i++){
	  if(r[i] != 0){
	    point++;
	    r[i] = 0;
	  }
	}
      }
      if(s == "HIT"){
	r[0]++;
	if(r[0] > 1 && r[0] != 0){
	  r[0]--;
	  r[1]++;
	}
	if(r[1] > 1 && r[1] != 0){
	  r[1]--;
	  r[2]++;
	}
	if(r[2] > 1 && r[2] != 0){
	  r[2]--;
	  point++;
	}
      }
      if(s == "OUT") out_count++;
    }
    cout << point << endl;
  }
}