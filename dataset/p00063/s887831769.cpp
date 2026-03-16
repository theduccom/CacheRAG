#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    int count=0,t,l;
    while((cin>>a)!=0){
    	l=a.size();
	t=0;
	for(int i=0;i<l;i++){
	    if(a[i]==a[l-1-i])t++;
	}
	if(t==l)count++;
    }
    cout<<count<<endl;
    return 0;
}