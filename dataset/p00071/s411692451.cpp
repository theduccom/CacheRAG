#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int w,h;
char a[100][100]={{0}};
void check(int h,int w);
int main(void){
	int n,x,y;
	cin>>n;
	for(int i=1;i<=n;i++){
        for(int j=0;j<8;j++){
            cin>>a[j];
        }
        cin>>w>>h;
        w--,h--;
        a[h][w]='0';
        check(h,w);
        cout<<"Data "<<i<<":"<<endl;
        for(int j=0;j<8;j++){
            cout<<a[j]<<endl;
        }
	}
	return 0;
}

void check(int h,int w){
    for(int i=w-3;i<=w+3;i++){

        if(i>-1&&i<8)if(a[h][i]=='1')a[h][i]='0',check(h,i);
    }
    for(int i=h-3;i<=h+3;i++){
        if(i>-1&&i<8)if(a[i][w]=='1')a[i][w]='0',check(i,w);
    }
    return;
}