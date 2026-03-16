#include<iostream>
#include<string>
using namespace std;
int main(){
	string a;
	int n;
	cin>>n;
	for(int i=0;i<=n;i++){
		getline(cin,a);
		int h=a.size();
		for(int j=0;j<=h-7;j++){
			if(a[j]=='H'&&a[j+1]=='o'&&a[j+2]=='s'&&a[j+3]=='h'&&a[j+4]=='i'&&a[j+5]=='n'&&a[j+6]=='o')
				a[j+6]='a';
		}
		if(i!=0)
		    cout<<a<<endl;
	}
    return 0;
}
 