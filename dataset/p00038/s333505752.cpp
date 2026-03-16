#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string m[7]={"null","one pair","two pair","three card","straight","full house","four card"};
int c[5],ans;
bool s1(){
	bool ok=false;
	for(int i=0;i<4;i++){
		if(c[i]==c[i+1])ok=true;
	}
	return ok;
}
bool s2(){
	bool ok=false;
	if(c[1]==c[2]&&c[3]==c[4])ok=true;
	if(c[0]==c[1]&&c[3]==c[4])ok=true;
	if(c[0]==c[1]&&c[2]==c[3])ok=true;
	return ok;
}
bool s3(){
	bool ok=false;
	for(int i=0;i<3;i++){
		if(c[i]==c[i+1]&&c[i]==c[i+2])ok=true;
	}
	return ok;
}
bool s4(){
	bool ok=true;
	for(int i=0;i<4;i++){
		if(c[i]+1!=c[i+1])ok=false;
	}
	int d[5]={1,10,11,12,13};
	bool A=true;
	for(int i=0;i<5;i++){
		if(c[i]!=d[i])A=false;
	}
	if(A)ok=true;
	return ok;
}
bool s5(){
	bool ok=true;
	if(c[0]!=c[1]||c[3]!=c[4])ok=false;
	if(c[1]!=c[2]&&c[3]!=c[2])ok=false;
	return ok;
}
bool s6(){
	bool ok=false;
	if(c[0]==c[1]&&c[0]==c[2]&&c[0]==c[3])ok=true;
	if(c[4]==c[1]&&c[4]==c[2]&&c[4]==c[3])ok=true;
	return ok;
}
int main(){
	char z;
	while(cin>>c[0]){
		for(int i=1;i<5;i++)cin>>z>>c[i];
		ans=0;
		sort(c,c+5);
		if(s1())ans=1;
		if(s2())ans=2;
		if(s3())ans=3;
		if(s4())ans=4;
		if(s5())ans=5;
		if(s6())ans=6;
		cout<<m[ans]<<endl;
	}
	return 0;
}