#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	int l,num;
	while((cin>>a)!=0){
		num=0;
		l=a.size();
		for(int i=0;i<l;i++){
			if(a[i]=='M'){
				num=num+1000;
				if(i!=0){
					if(a[i-1]=='C')num=num-200;
				}
			}
			if(a[i]=='D'){
				num=num+500;
				if(i!=0){
					if(a[i-1]=='C')num=num-200;
				}
			}
			if(a[i]=='C'){
				num=num+100;
				if(i!=0){
					if(a[i-1]=='X')num=num-20;
				}
			}
			if(a[i]=='L'){
				num=num+50;
				if(i!=0){
					if(a[i-1]=='X')num=num-20;
				}
			}
			if(a[i]=='X'){
				num=num+10;
				if(i!=0){
					if(a[i-1]=='I')num=num-2;
				}
			}
			if(a[i]=='V'){
				num=num+5;
				if(i!=0){
					if(a[i-1]=='I')num=num-2;
				}
			}
			if(a[i]=='I'){
				num=num+1;
			}
		}
		cout<<num<<endl;
	}
	return 0;
}