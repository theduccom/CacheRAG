#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    int l,aa[5]={0};
    while((cin>>a)!=0){
    	l=a.size();
	if(a[l-1]=='O')aa[3]++;
	else if(a[l-1]=='A')aa[0]++;
	else if(a[l-1]=='B'){
	    if(a[l-2]=='A')aa[2]++;
	    else aa[1]++;
	}
    }   
    cout<<aa[0]<<endl<<aa[1]<<endl<<aa[2]<<endl<<aa[3]<<endl;
    return 0;
}