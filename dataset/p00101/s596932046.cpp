#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,i;
  scanf("%d ",&n);
  while(n--){
    string s;
    for(getline(cin,s),i=0;i<s.size();i++){
      if(s[i]=='H')if(s[i+1]=='o')if(s[i+2]=='s')
        if(s[i+3]=='h')if(s[i+4]=='i')if(s[i+5]=='n')
          if(s[i+6]=='o')s[i+6]='a';
    }
    cout<<s<<endl;
  }
}