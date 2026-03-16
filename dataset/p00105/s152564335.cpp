#include<bits/stdc++.h>
using namespace std;

int main(){
  string str;
  string s[102];
  int n;
  map<string,vector<int> > word;
  int i=0;
  
  while(cin>>str>>n){
    if(!word.count(str)){
      word[str].push_back(n);
      s[i]=str;
      i++;
    }
    else word[str].push_back(n);
  }
  
  
  for(int cnt=0;cnt<i;cnt++)sort(word[s[cnt]].begin() , word[s[cnt]].end());
  
  for(int cnt=0;cnt<i;cnt++){
    for(int j=0;j<i-1;j++){
      if(s[j]>s[j+1])swap(s[j],s[j+1]);
    }
  }

  for(int cnt=0;cnt<i;cnt++){
    cout<<s[cnt]<<endl;
    for(int j=0;j<word[s[cnt]].size();j++){
      if(j)cout<<" ";
      cout<<word[s[cnt]][j];
    }
    cout<<endl;
  }

  return(0);
}