#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char ans[101];
char n1[101];
char n2[101];
int main(){
	int d;
	int h1,h2,limit;
	for(cin>>d;d>0;d--){
		for(int j=0;j<100;j++)ans[j]='0';
		scanf("%s",n1);
		scanf("%s",n2);
		h1=strlen(n1)-1;
		h2=strlen(n2)-1;
		limit=max(h1,h2);
		int i;
		bool flg=false;
		for( i=0;i<=limit;i++,h1--,h2--){
			flg=false;
			int n1_tmp = 0;
			int n2_tmp = 0;
			if(h1>=0){
				n1_tmp=n1[h1]-'0';
			}
			if(h2>=0){
				n2_tmp=n2[h2]-'0';
			}
			int sum = n1_tmp + n2_tmp;
			if(sum>=10){
				if(i==79){
					i++;
					flg=true;
					break;
				}
				ans[i+1]+=1;
				sum=sum%10;
				flg=true;
			}

			if(ans[i]-'0'+sum > 9){
				if(i==79){
					i++;
					flg=true;
					break;
				}
				ans[i]=ans[i]+(sum-10);
				ans[i+1]+=1;
				flg=true;
			}
			else ans[i]+=sum;
		}
		if(flg){
			i++;
		}
		ans[i]='\0';
		if(i>80)cout<<"overflow"<<endl;
		else{
			for(--i;i>=0;i--){
				if(i>=0)cout<<ans[i];
			}
			cout<<endl;
		}
//		cout<<"size:"<<strlen(ans)<<endl;
	}
	return 0;
}