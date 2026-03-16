#include<bits/stdc++.h>
using namespace std;

string ans;
string s1,s2;

void Calc(int up,int indx1,int indx2){


  if(indx1==-1){
    if(up!=0){ans.insert(ans.begin(),(char)(up+(int)'0'));}
    return;
  }


  if(indx2>=0){
    int work = s1[indx1]-'0' + s2[indx2]-'0' + up;

    up = work/10;
    work = work%10;

    ans.insert(ans.begin(),(char)((int)'0'+work));
  }

  else{
    int work = s1[indx1]-'0' + up;

    up = work/10;
    work = work%10;

    ans.insert(ans.begin(),(char)((int)'0'+work));
  }


  Calc(up,indx1-1,indx2-1);
}

int main(){

  char head1,head2;
  string tmp;
  int size;
  int n;


  cin >> n;

  for(int i=0; i<n; i++){
    ans="";
    cin >> s1;
    cin >> s2;
    if(s1.size()<s2.size()){ tmp=s1;s1=s2;s2=tmp; }

    if(s1.size()>=81 || s2.size()>=81)
      cout<<"overflow"<<endl;
    else if((s1.size()>=80 || s2.size()>=80) && s1[0]-'0'+s2[0]-'0'>=10)
      cout<<"overflow"<<endl;
    else{
      Calc(0,s1.size()-1,s2.size()-1);
      cout << ans << endl;
    }
  }

  return 0;
}