#include <iostream>
#include <string>
using namespace std;

int hyoka(string);
int isNum(int);

int main(){
	int n,i;
	string s;
	
	cin>>n;
	for(i=0;i<n;i++){
	 cin>>s;
	 cout<<hyoka(s)<<endl;
	}
			
	return 0;
}


int hyoka(string s){
	long int total=0,work=0;
	long int tmp1,tmp2;
	int oi=0;
	char oc;
	int n;
	string cs;
	
	if(s[oi]=='(' || isNum(s[oi])!=-1){s="+"+s;}
	//cout<<s<<endl;

	while(1){
	 oc=s[oi];if(oc=='='){total+=work;break;}
	 
	 if(s[oi+1]!='('){	//??°???????????????
	  tmp1=0;
	  while(1){
	   oi++;
	   tmp2=isNum(s[oi]);
	   if(tmp2!=-1){tmp1=tmp1*10+tmp2;}else{break;}
	  }
	 }else{	//??????????????°
	  cs="";n=1;oi++;
	  while(1){
	   oi++;
	   switch(s[oi]){
		case '(':n++;break;
		case ')':n--;break;
	   }
	   if(n!=0){cs+=s[oi];}else{break;}
	  }
	  cs+='=';
	  //cout<<cs<<endl;
	  tmp1=hyoka(cs);
	 }
	
	 switch(oc){
	  case '+':total+=work;work=tmp1;break;
	  case '-':total+=work;work=-tmp1;break;
	  case '*':work*=tmp1;break;
	  case '/':work/=tmp1;break;
	 }
	}
	
	return total;
}

int isNum(int c){
	if(48<=c && c<=57){
	 return c-48;
	}
	return -1;
}