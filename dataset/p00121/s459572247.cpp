#include<bits/stdc++.h>
using namespace std;
 
signed main(){
    map<string,int>a;
    queue<string>b;
    b.push("01234567");
    while(b.size()){
	string c=b.front();
	string e=c;
	b.pop();
	int d;
	for(d=0;d<8;d++){
	    if(c[d]=='0')break;
	    }
	if(d<4){
	    swap(c[d],c[d+4]);
	    if((a[c]==0&&c!="01234567")||a[e]+1<a[c]){
		a[c]=a[e]+1;
		b.push(c);
		}
	    swap(c[d],c[d+4]);
	    }
	    else{
		swap(c[d],c[d-4]);
	    if((a[c]==0&&c!="01234567")||a[e]+1<a[c]){
		a[c]=a[e]+1;
		b.push(c);
		}
	    swap(c[d],c[d-4]);}
	if(d%4){
	   swap(c[d],c[d-1]);
	    if((a[c]==0&&c!="01234567")||a[e]+1<a[c]){
		a[c]=a[e]+1;
		b.push(c);
		}
	    swap(c[d],c[d-1]);
	    }
	    if(d%4!=3){
		swap(c[d],c[d+1]);
	    if((a[c]==0&&c!="01234567")||a[e]+1<a[c]){
		a[c]=a[e]+1;
		b.push(c);
		}
	    swap(c[d],c[d+1]);
	}
}
int x[8];
while(cin>>x[0]){
    for(int y=1;y<8;y++)cin>>x[y];
    string z="        ";
    for(int k=0;k<8;k++)z[k]=x[k]+48;
    cout<<a[z]<<endl;
    }
}