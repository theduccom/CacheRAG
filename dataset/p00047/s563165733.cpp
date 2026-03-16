#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    int po=0;
    while((cin>>a)!=0){
    	if(po==a[0]-65){po=a[2]-65;}
	else if(po==a[2]-65){po=a[0]-65;}	
    }
    cout<<char(65+po)<<endl;
}