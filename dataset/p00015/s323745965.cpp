#include<iostream>
#include<string>
#define max(a,b) a>b?a:b
using namespace std;
int che(char a){
	char i;
	int j=0;
	for(i='0';i<='9';i++){
		if(a==i){
			return j;
		}
		j++;
	}
	return 0;
}
char cha(int a){
	char i;
	int j=0;
	for(i='0';i<='9';i++){
		if(j==a){
			return i;
		}
		j++;
	}
}
int main(){
	string a,b;
	int c=0;
	int i,j,k,m,n;
	int x,y;
	char d[200];
	cin>>n;
	for(k=0;k<n;k++){
		cin>>a>>b;
		x=a.size();
		y=b.size();
		m=max(x,y);
		for(i=1;i<=m;i++){
			j=che(a[x-i])+che(b[y-i])+c;
			if(j>=10){
				c=1;
				j-=10;
			}else{
				c=0;
			}
			d[i]=cha(j);
		}
		if(c==1){
			d[i]=cha(1);
			c=0;
			i++;
		}
		if(i>81){
			cout<<"overflow"<<endl;
			continue;
		}
		for(j=i-1;j>0;j--){
			cout<<d[j];
		}
		cout<<endl;
	}
	return 0;
}