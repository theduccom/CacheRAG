#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int h,w;
string ss[100];
bool x[100][100];
int ans1=0,ans2=0;
bool ans=true;
bool f(){
	while(true){
		if(ss[ans1][ans2]=='.')return true;
		else if(!x[ans1][ans2])return false;
		else if(ss[ans1][ans2]=='>'){
			x[ans1][ans2]=false;
			ans2++;
			f();
		}
		else if(ss[ans1][ans2]=='<'){
			x[ans1][ans2]=false;
			ans2--;
			f();
		}
		else if(ss[ans1][ans2]=='v'){
			x[ans1][ans2]=false;
			ans1++;
			f();
		}
		else{
			x[ans1][ans2]=false;
			ans1--;
			f();
		}
	}
}
int main()
{
	while(true){
		scanf("%d%d",&h,&w);
		if(h==0&&w==0)return 0;
		for(int i=0;i<h;i++)cin >> ss[i];
		for(int i=0;i<h;i++)for(int j=0;j<w;j++)x[i][j]=true;
		ans1=0,ans2=0;
		ans=true;

		if(f()){
		    cout << ans2 << " " << ans1 << "\n";
		}
		else cout << "LOOP" << "\n";
	}
	return 0;
}