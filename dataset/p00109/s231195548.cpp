#include <iostream>
#include <string>
using namespace std;

int k,n,ans;
string s;

int calc1();
int calc2();
int calc3();

int calc1(){
	int a;
	a=calc2();
	while(s[k]=='+' ||s[k]=='-'){
		if(s[k]=='+'){
			k++;
			a+=calc2();
		}else if(s[k]=='-'){
			k++;
			a-=calc2();
		}
	}
	return a;
}

int calc2(){
	int a;
	a=calc3();
	while(s[k]=='*' ||s[k]=='/'){
		if(s[k]=='*'){
			k++;
			a*=calc3();
		}else if(s[k]=='/'){
			k++;
			a/=calc3();
		}
	}
	return a;
}

int calc3(){
	int a;
	if(s[k]=='('){
		k++;
		a=calc1();
		k++;
	}else{
		a=0;
		while(s[k]>='0' && s[k]<='9'){
			a*=10;
			a+=s[k]-'0';
			k++;
		}
	}
	return a;
}

int main(){
	cin >> n;
	while(n--){
		ans=0;
		k=0;
		cin >> s;
		ans=calc1();
		cout << ans <<endl;
		s.clear();
	}
	return 0;
}