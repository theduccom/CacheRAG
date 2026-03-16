#include<iostream>
#include<algorithm>

using namespace std;

int a[5];

bool st(){
	int i=a[0];
	if((a[1]==i+1&&a[2]==i+2&&a[3]==i+3&&a[4]==i+4)||(i==1&&a[1]==10&&a[2]==11&&a[3]==12&&a[4]==13)){
		return 1;
	}
	return 0;
}

void f(int a,int b,int c){
	if(c)cout<<"four card\n";
	else if(a&&b)cout<<"full house\n";
	else if(b)cout<<"three card\n";
	else if(a==2)cout<<"two pair\n";
	else if(a)cout<<"one pair\n";
	else cout<<"null\n";
}

int main(){
	while(~scanf("%d,%d,%d,%d,%d",&a[0],&a[1],&a[2],&a[3],&a[4])){
		sort(a,a+5);
		if(st())cout<<"straight\n";
		else{
			int num[14],pair=0,three=0,four=0;
			for(int i=1;i<14;i++)num[i]=0;
			for(int i=0;i<5;i++)num[a[i]]++;
			for(int i=1;i<14;i++){
				if(num[i]==2)pair++;
				else if(num[i]==3)three++;
				else if(num[i]==4)four++;
			}
			f(pair,three,four);
		}
	}
}