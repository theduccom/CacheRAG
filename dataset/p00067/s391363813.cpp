#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;



int main(){
	

	string str1,str;
	int I=0;int map[17][17]={};
	while(cin>>str){
		int K=0;
		for(int j=1;j<13;j++){
			if(str[j-1]-'0'==1){K++;map[1][j]=K;}
			else map[1][j]=0;
		}

	for(int i=2;i<=12;i++)
	{cin>>str;
	for(int j=1;j<13;j++)
		if(str[j-1]-'0'==1){K++;map[i][j]=K;}
		else map[i][j]=0;
	}

	

	for(int i=1;i<=12;i++)
	for(int j=1;j<=12;j++){
		if(map[i][j]>0){int q=map[i][j];
	if(map[i+1][j]<q&&map[i+1][j]>0)q=map[i+1][j];
	if(map[i-1][j]<q&&map[i-1][j]>0)q=map[i-1][j];
	if(map[i][j+1]<q&&map[i][j+1]>0)q=map[i][j+1];
	if(map[i][j-1]<q&&map[i][j-1]>0)q=map[i][j-1];
	int R[]={map[i][j],map[i+1][j],map[i-1][j],map[i][j+1],map[i][j-1]};
	for(int ii=1;ii<=12;ii++)
	for(int jj=1;jj<=12;jj++)
		for(int gg=0;gg<5;gg++)
			if(map[ii][jj]==R[gg]&&map[ii][jj]>0)map[ii][jj]=q;

	}
	}
	bool F[155]={};

	

for(int i=0;i<=12;i++)
	for(int j=0;j<=12;j++)
		if(map[i][j]>0)F[map[i][j]]=true;

int C=0;
for(int i=1;i<=150;i++)
	if(F[i]==true)C++;

cout<<C<<endl;
	}
	return 0;
}