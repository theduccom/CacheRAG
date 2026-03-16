#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	char t[100][100];
	char temp;
	int H,W,i,j,loopch;
	
	while(scanf("%d %d",&H,&W)){
		if(H==0&&W==0)
		break;
		string s;
		cin.ignore();
		for(i=0;i<H;i++){
			getline(cin,s);
			for(j=0;j<W;j++){
				t[i][j] = s[j];
			}
		}
		i=0;
		j=0;
		loopch=0;
		while(t[i][j]!='.'){
			if(t[i][j]=='>'){
				t[i][j]='*';
				j++;
			}
			else if(t[i][j]=='<'){
				t[i][j]='*';
				j--;
			}
			else if(t[i][j]=='^'){
				t[i][j]='*';
				i--;
			}
			else if(t[i][j]=='v'){
				t[i][j]='*';
				i++;
			}
			else if(t[i][j]=='*'){
				loopch=1;
				break;
			}
		}
		if(loopch!=1)
		printf("%d %d\n",j,i);
		else
		printf("LOOP\n");
	}
}