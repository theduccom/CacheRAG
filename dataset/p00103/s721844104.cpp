#include <iostream>
using namespace std;

#define reep(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,n) reep((i),0,(n));

int main(){
	int n;
	cin>>n;
	while(n){
		int out=0;
		int ans=0;
		int rui=0;
		while(out!=3){
			string s;
			cin>>s;
			if(s=="HIT"){
				if(rui==3){
					ans++;
				}
				else{
					rui++;
				}
			}
			else if(s=="OUT"){
				out++;
			}
			else{
				ans+=rui;
				ans++;
				rui=0;
			}
		}
		cout<<ans<<endl;
		n--;
	}
	return 0;
}