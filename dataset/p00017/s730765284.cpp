#include<bits/stdc++.h>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	string s;
	while(getline(cin,s)){
		int size=s.size();
		for(int j=0;;j++){
			string ex=s;
			rep(i,size){
				if(isalpha(ex[i])){
					ex[i]=(char)(((int)ex[i]-'a'+j)%26+'a');
				}
			}
			int cnt=0;
			rep(i,size-2){
				if(ex[i]=='t' && ex[i+1]=='h' && ex[i+2]=='e'){
					cnt++;
					s=ex;
					break;
				}
			}
			rep(i,size-3){
				if(ex[i]=='t' && ex[i+1]=='h' && (ex[i+2]=='i' || ex[i+2]=='a') && (ex[i+3]=='s' || ex[i+3]=='t')){
					cnt++;
					s=ex;
					break;
				}
			}
			if(cnt>=1)break;
		}
		cout<<s<<endl;
	}
	return 0;
}