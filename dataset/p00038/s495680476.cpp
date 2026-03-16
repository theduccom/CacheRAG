#include<iostream>
using namespace std;
int main(){
  int t[5];
  char c;
  while(cin>>t[0]>>c>>t[1]>>c>>t[2]>>c>>t[3]>>c>>t[4]){
    int same[14]={0};
    int a = 0;
    int b = 0;
    bool role = false;
    for(int i=0;i<5;i++) same[t[i]]++;
    for(int i=0;i<14;i++){
      if(same[i]>1&&a==0) a = same[i];
      else if(same[i]>1&&b==0) b = same[i];
    }
    for(int i=1;i<11;i++){
      int h = i+4;
      if(h==14) h = 1; 
      if(same[i]==1&&same[i+1]==1&&same[i+2]==1&&same[i+3]==1&&same[h]==1){ cout << "straight" << endl;
	role = true;}
    }
    if(!role){
      if(a==4) cout << "four card" << endl;
      else if(a==3&&b==2||a==2&&b==3) cout << "full house" << endl;
      else if(a==3) cout << "three card" << endl;
      else if(a==2&&b==2) cout << "two pair" << endl;
      else if(a==2) cout << "one pair" << endl;
      else cout << "null" << endl;
    }
  }
  return 0;
}