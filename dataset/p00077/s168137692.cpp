#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<utility>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<map>
#include<queue>
#include<set>

using namespace std;
typedef pair<int,int> PII;
typedef long long ll;

int main(){
  string line,ans;
	while(cin>>line){
		while(true){
			int f = line.find("@");
			if(f == -1){
				ans = ans + line;
				break;
			}
			else{
				ans = ans + line.substr(0,f);
				for(int i=0;i < (int)(line[f+1]-'0');i++){
					ans = ans + line[f+2];
				}
				line = line.substr(f+3);
			}
		}
		cout<<ans<<endl;
		line = "";
		ans = "";
	}
  return 0;
}