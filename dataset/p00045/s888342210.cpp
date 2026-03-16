#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
	char s;
	int cnt=0,n,m,ave;
	int sum=0,k=0;
	while(cin>>n>>s>>m){
		cnt++;
		k+=m;
		sum+=n*m;
	}
	if((k*10/cnt)%10>=5)ave=k/cnt+1;
	else ave=k/cnt;
	cout<<sum<<endl<<ave<<endl;
}