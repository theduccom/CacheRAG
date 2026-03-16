#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin >> n,n){
		int v[1000000];
		for(int i=0;i<1000000;i++) v[i]=1;
		v[0]=v[1]=0;
		for(int i=2;i*i<1000000;i++){
			if(v[i]){
				for(int j=i*2;j<1000000;j+=i){
					v[j]=0;
				}
			}
		}
		long s=0,i=0;
		while(n--){
			while(!v[i])i++;
			s+=i++;
		}
		cout << s << endl;
	}
}