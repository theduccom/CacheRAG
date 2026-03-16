#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
pair<string,int> d[101];
int ptop[101];
int p[101][101];
int main(){
	string a;
	int q,top;
	top=0;
	while(cin>>a>>q){
		bool news=true;
		for(int i=0;i<top;i++){
			if(d[i].first==a){
				p[i][ptop[i]]=q;
				ptop[i]++;
				news=false;
			}
		}
		if(news){
			d[top].first=a;
			d[top].second=top;
			ptop[top]=1;
			p[top][0]=q;
			top++;
		}
	}
	sort(d,d+top);
	for(int i=0;i<top;i++)sort(p[i],p[i]+ptop[i]);
	for(int i=0;i<top;i++){
		cout<<d[i].first<<endl;
		cout<<p[d[i].second][0];
		for(int j=1;j<ptop[d[i].second];j++){
			cout<<" "<<p[d[i].second][j];
		}
		cout<<endl;
	}
	return 0;
}