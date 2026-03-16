#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#define shosu(x) fixed<<setprecision(x)
using namespace std;
typedef pair<int,int> P;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,P> pip;
const int inf=(1<<31)-1;

string str;

int main(){
	while(cin>>str){
		for(int i=0;i<str.size();i++){
			if(str[i]=='@'){
				i++;
				for(int j=0;j<str[i]-'0';j++) cout<<str[i+1];
				i++;
				continue;
			}
			cout<<str[i];
		}
		cout<<endl;
	}
}