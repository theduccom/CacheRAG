#include<iostream>
#include<algorithm>
using namespace std;


int calc(int w){
	int s=1150;
	w-=min(10,w);
	s += min(10,w)*125;
	w-=min(10,w);
	s += min(10,w)*140;
	w-=min(10,w);
	s += w*160;
	return s;
}

int main(){
	int w;
	while(cin>>w&&~w){
		cout<<4280-calc(w)<<endl;
	}
	return 0;
}