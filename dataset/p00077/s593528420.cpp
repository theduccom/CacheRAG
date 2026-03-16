#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>

typedef long long int ll;


using namespace std;

string s;

int main(){
	while(cin>>s){
		for(int i=0; i<s.size(); i++){
			if(s[i]=='@'){
				for(int j=0; j<(s[i+1]-'0'); j++){
					cout<<s[i+2];
				}
				i+=2;
			}else{
				cout<<s[i];
			}
		}
		cout<<endl;
	}
}