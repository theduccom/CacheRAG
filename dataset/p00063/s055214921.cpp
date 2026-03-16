#include<cstdio>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){

	string s;
        int cnt=0;
	while(cin>>s){
                if (cin.eof()) break;
                string temp;
		for(int i=s.size()-1;i>=0;i--){
  		    temp.push_back(s[i]);
	        }
                string s1=temp;
                if(s==s1) cnt++;
	}
        cout<< cnt << endl;
}