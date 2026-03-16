#include<iostream>
using namespace std;

int main(){
  int n;
  int point=0;
  int out_count=0;
  int runner=0;
  cin>>n;
  string event;
  for(int i=0;i<n;i++){
    out_count=0;
    point=0;
    runner=0;
    while(out_count<3){
      cin>>event;
      if(event=="HIT"){
	runner++;
	if(runner>3){
	  point++;
	  runner--;
	}
      }else if(event=="OUT"){
	out_count++;
      }else{
	point+=runner+1;
	runner=0;
      }
    }
    cout << point << endl;
  }
  return 0;
}