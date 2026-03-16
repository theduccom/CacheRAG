#include <bits/stdc++.h>

using namespace std;

long long int calc(string ex){
	long long int str,cnt,ans=0,now=0,addn=1,addd=1,n=ex.length(),i;
	bool sus=false,minus=false;
	char pm='+',md='*';
	for(i=0; i<n; i++){
		if(sus){
			if(ex[i]=='('){
				cnt++;
			}else if(ex[i]==')'){
				cnt--;
				if(cnt == 0){
					now = calc(ex.substr(str,i-str));
					sus = false;
				}
			}
		}else{
			switch(ex[i]){
				case '(':
					str = i+1;
					cnt = 1;
					sus = true;
					break;
				case '-':
					if(i==0 || ex[i-1]== '+' || ex[i-1]== '-' || ex[i-1]== '*' || ex[i-1]== '/'){
						minus = true;
						break;
					}
				case '+':
					if(minus){
						now *= -1;
						minus = false;
					}
					if(md == '*'){
						addn *= now;
					}else{
						addd *= now;
					}
					if(pm == '+'){
						ans += addn/addd;
					}else{
						ans -= addn/addd;
					}
					pm = ex[i];
					md = '*';
					now = 0;
					addn = 1;
					addd = 1;
					break;
				case '*':
				case '/':
					if(minus){
						now *= -1;
						minus = false;
					}
					if(md == '*'){
						addn *= now;
					}else{
						addd *= now;
					}
					md = ex[i];
					now = 0;
					break;
				case '0':
				case '1':
				case '2':
				case '3':
				case '4':
				case '5':
				case '6':
				case '7':
				case '8':
				case '9':
					now *= 10;
					now += ex[i]-'0';
					break;
				default:
					break;
			}
		}
	}
	if(minus){
		now *= -1;
		minus = false;
	}
	if(md == '*'){
		addn *= now;
	}else{
		addd *= now;
	}
	if(pm == '+'){
		ans += addn/addd;
	}else{
		ans -= addn/addd;
	}
	return ans;
}

int main(void){
	int n,i;
	long long int ans;
	string str;
	cin >> n;
	for(i=0; i<n; i++){
		cin >> str;
		ans = calc(str);
		cout << ans << endl;
	}
	return 0;
}