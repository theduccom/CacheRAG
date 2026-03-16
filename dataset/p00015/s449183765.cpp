#include <iostream>
#include <cstring>
using namespace std;

char ary[2][60][110],cpy[110],cpx[110];
int main(){
	int N;
	cin>>N;
	for(int i=1;i<=N;i++){
		cin>>ary[0][i]>>ary[1][i];
	}
	int len,men,nowl,nowm,up,res;
	for(int i=1;i<=N;i++){
		if(strlen(ary[0][i])<strlen(ary[1][i])){
			strcpy(cpy,ary[1][i]);
			strcpy(cpx,ary[0][i]);
		}
		else{
			strcpy(cpy,ary[0][i]);
			strcpy(cpx,ary[1][i]);
		}
		len=strlen(cpy);nowl=len-1;
		men=strlen(cpx);nowm=men-1;
		up=res=0;
		for(int j=0;j<len;j++){
			if(nowm>=0)up+=(int)(cpy[nowl]-'0')+(int)(cpx[nowm]-'0');
			else up+=(int)(cpy[nowl]-'0');
			cpy[nowl]=(char)('0'+up%10);
			up/=10;nowl--;nowm--;
		}
		if(up+len>80) cout<<"overflow"<<endl;
		else if(!up)cout<<cpy<<endl;
		else cout<<"1"<<cpy<<endl;
	}
	return 0;
}