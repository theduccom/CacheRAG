#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;

int main(void){ 
  string s;
  while(getline(cin,s)){
    vector<int> l;
    s+= ",";
    int n = 0 , lon = 0;;
    for(int i = 0 ; i < s.size() ; i ++){
      //cout<<n<<" ";
      if(s[i] ==','){
	l.push_back(n);
	lon += n;
        n = 0;
      }else{
	n = n * 10 + s[i] - '0';
      }
    }
    lon = lon - l[l.size() - 2] - l[l.size()-1];
    double per = l[l.size() - 2] + l[l.size()-1];
    per = l[l.size() - 2 ] / per * lon;
    /*
    cout<<"lon"<<lon<<endl;
    cout<<"per"<<per<<endl;
    //*/
    int nn=0;
    for(int i = 0 ; i < l.size() ; i ++){
      nn += l[i];
      //cout<<nn<<endl;
      if(nn>=per){
	//cout<<"res"<<++i<<endl;
	cout<<++i<<endl;
	break;
      }
    }
    //*/
  }
}