#include <iostream>
#include <string>
#include <valarray>
using namespace std;

int main(void){
	int n;
	cin>>n;
	while(n--){
		string s;
		valarray<int> h(3);
		int o=0;
		int sc=0;
		h=0;
		while(o!=3){
			cin>>s;
			if(s[0]=='O')o++;
			else if(s[1]=='I'){
				sc+=h[2];
				h=h.shift(-1);
				h[0]=1;
			}else{
				sc+=1+h.sum();
				h=0;
			}
		}
		cout<<sc<<endl;
	}
	return 0;
}