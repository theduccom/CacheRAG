#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)


string foo2(string s){
	// cout<<"foo2 "<<s<<endl;
	bool f=true;
	rep(i,s.size()){
		if(i==0){
			if(s[0]=='-');
			else f=false;
		}
		else{
			if(s[i]>='0'&&s[i]<='9'){

			}
			else{
				f=false;
			}
		}
	}
	if(f) return s;
	// bool f=false;
	rep(i,s.size()){
		if(s[i]=='*'||s[i]=='/'){
			int xl=i,xr=i;
			f=true;
			while(1){
				if(xl==0) break;
				else if(s[xl-1]>='0'&&s[xl-1]<='9'){
					xl--;
				}
				else{
					if(xl==1&&s[0]=='-'){
						xl--;
						break;
					}
					else if(s[xl-1]=='-'&&xl-2>=0&&(s[xl-2]=='+'||s[xl-2]=='-'||s[xl-2]=='*'||s[xl-2]=='/')) {
						xl--;
						break;
					}
					else break;
				}
			}
			while(1){
				if(xr==s.size()-1) break;
				else if(s[xr+1]>='0'&&s[xr+1]<='9'){
					xr++;
				}
				else{
					if(xr==i&&s[xr+1]=='-'){
						xr++;
					}
					else break;
				}
			}
			stringstream ss1,ss2;
			// cout<<s.substr(xl,xr-xl+1)<<endl;
			ss1<<s.substr(xl,xr-xl+1);
			int a,b;
			char t;
			ss1>>a;
			// cout<<"a "<<a<<endl;
			ss1>>t;
			ss1>>b;
			ss2<<s.substr(0,xl);
			int tt;
			if(t=='*'){
				tt=a*b;
			}
			else{
				tt=a/b;
			}
			ss2<<tt;
			if(xr<s.size()-1) ss2<<s.substr(xr+1);
			
			string tmp;
			ss2>>tmp;
			// cout<<"tmp "<<tmp<<endl;
			// cout<<"foo2 "<<s<<" "<<endl;
			return foo2(tmp);
		}
	}
	rep(i,s.size()){
		if(s[i]=='+'||s[i]=='-'){
			int xl=i,xr=i;
			if(i>=1&&isdigit(s[i-1])&&((i<s.size()-1&&isdigit(s[i+1]))||(i<s.size()-2&&isdigit(s[i+2])&&s[i+1]=='-')));
			else continue;
			f=true;
			while(1){
				if(xl==0) break;
				else if(s[xl-1]>='0'&&s[xl-1]<='9'){
					xl--;
				}
				else{
					if(xl==1&&s[xl-1]=='-'){
						xl--;
						break;
					}
					
					else break;
				}
			}
			while(1){
				if(xr==s.size()-1) break;
				else if(s[xr+1]>='0'&&s[xr+1]<='9'){
					xr++;
				}
				else{
					if(xr==i&&s[xr+1]=='-'){
						xr++;
					}
					else break;
				}
			}
			stringstream ss1,ss2;
			// cout<<s.substr(xl,xr-xl+1)<<endl;
			ss1<<s.substr(xl,xr-xl+1);
			int a,b;
			char t;
			ss1>>a;
			ss1>>t;
			ss1>>b;
			ss2<<s.substr(0,xl);
			int tt;
			if(t=='+'){
				tt=a+b;
			}
			else{
				tt=a-b;
				// cout<<tt<<endl;
			}
			ss2<<tt;
			if(xr<s.size()-1) ss2<<s.substr(xr+1);
			string tmp;
			ss2>>tmp;
			// cout<<"tmp "<<tmp<<endl;

			return foo2(tmp);
		}
	}
	return s;
}

string foo1(string s){
	// cout<<s<<endl;
	// string tmp="123456";
	// cout<<tmp.substr(5)<<endl;;
	int xl=-1,xr=-1;
	rep(i,s.size()){
		if(s[i]=='('){
			xl=i;
		}
		else if(s[i]==')'){
			xr=i;
			break;
		}
	}
	if(xr!=-1){
		// if(xr>=s.size()-1) return foo1(s.substr(0,xl)+s.substr(xl+1,xr-xl-1));
		if(xr<s.size()-1) return foo1(s.substr(0,xl)+foo2(s.substr(xl+1,xr-xl-1))+s.substr(xr+1));
		return foo1(s.substr(0,xl)+foo2(s.substr(xl+1,xr-xl-1)));
		// return foo1(s.substr(0,xl)+s.substr(xl+1,xr-xl-1)+s.substr(xr+1));
		
	}
	return foo2(s);
}

string solve(string s){
	return foo1(s);
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		// cout<<s.substr(0,0)<<endl;
		s=s.substr(0,s.size()-1);
		s=solve(s);
		cout<<s<<endl;
	}
}