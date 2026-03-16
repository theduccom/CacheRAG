#include<iostream>
#include<string>
#include<sstream>

typedef std::stringstream sst;

int ToInt(std::string str){
	int i;
	sst ss;
	ss<<str;
	ss>>i;
	return i;
}
std::string ToStr(int i){
	std::string str;
	sst ss;
	ss<<i;
	ss>>str;
	return str;
}

std::string SubStr(std::string str,int x,int y){
	return str.substr(x,y-x+1);
}
int Third(std::string str){
	int fres,Ans;
	while( ( fres=str.find_first_of("+-",1) ) != std::string::npos ){
		int aRes;
		
		if( (aRes=str.find_first_of("+-",fres+2)) == std::string::npos )
			aRes=str.size()-1;
		else --aRes;
		
		if( str[fres] =='+' ){
			Ans=ToInt(SubStr(str,0,fres-1))+ToInt(SubStr(str,fres+1,aRes));
			str.replace(0,SubStr(str,0,aRes).size(),ToStr(Ans).c_str());
		}else{
			Ans=ToInt(SubStr(str,0,fres-1))-ToInt(SubStr(str,fres+1,aRes));
			str.replace(0,SubStr(str,0,aRes).size(),ToStr(Ans).c_str());
		}
	}
	return ToInt(str);
}

int Second(std::string str){
	int fres,Ans;
	while( ( fres=str.find_first_of("*/") ) != std::string::npos ){
		int bRes,aRes;
		if( (bRes=str.find_last_of("+-",fres)) == std::string::npos  || bRes==0 )
			bRes=0;
		else ++bRes;
		
		if( (aRes=str.find_first_of("+-*/",fres+2)) == std::string::npos )
			aRes=str.size()-1;
		else --aRes;
		
		if( str[fres] =='*' ){
			Ans=ToInt(SubStr(str,bRes,fres-1))*ToInt(SubStr(str,fres+1,aRes));
			str.replace(bRes,SubStr(str,bRes,aRes).size(),ToStr(Ans).c_str());
		}else{
			Ans=ToInt(SubStr(str,bRes,fres-1))/ToInt(SubStr(str,fres+1,aRes));
			str.replace(bRes,SubStr(str,bRes,aRes).size(),ToStr(Ans).c_str());
		}
	}
	Ans=Third(str);
	return Ans;
}

int First(std::string str){
	int fres;
	while( (fres = str.find(")") ) != std::string::npos ){
		int rfres=str.rfind("(",fres);
		std::string Next=SubStr(str,rfres+1,fres-1);
		int cRes=Second(Next);
		str.replace(rfres,Next.size()+2,ToStr(cRes).c_str());
	}
	int lRes = Second(str);
	
	return lRes;
}

int main(){
	int n;
  std::string str;
	std::cin>>n;
	while( n-- ){
		std::cin>>str;
	  std::cout<<First(str)<<std::endl;
	}
}