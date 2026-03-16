#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(void){
    for(;;){
	int n;
	cin>>n;
	if(n==0)break;
	int a[1010],b[1010],c[1010];
	char d[1010];

	for(int i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i];

	}
	for(int i=0;i<n;i++){
        if(a[i]==100||b[i]==100||c[i]==100){
            d[i]='A';
        }
        else if((a[i]+b[i])/2>=90)d[i]='A';


        else if((a[i]+b[i]+c[i])/3>=80)d[i]='A';

        else if((a[i]+b[i]+c[i])/3>=70)d[i]='B';

        else if((a[i]+b[i]+c[i])/3>=50&&a[i]>=80)d[i]='B';

        else if((a[i]+b[i]+c[i])/3>=50&&b[i]>=80)d[i]='B';

        else d[i]='C';

	}
	for(int i=0;i<n;i++){
        cout<<d[i]<<endl;
	}

    }
	return 0;
}