#include<iostream>
#include<string>
//ðÇÁ·é
void addplace(unsigned int *a, unsigned int *last, int num){
	if( a == last ) return; //[·¬ÜÛÀ
	
	int carry = (*a * 10 + num) / 100000000;
	addplace(a+1, last, carry);
	*a = (*a * 10 + num) % 100000000;
}
bool trace(unsigned int *a, unsigned int *last){
	if( a == last ) return false; //[·¬ÜÛÀ
	if( !trace(a+1, last) ){
		if( *a > 0 ){
			std::cout << *a;
			return true;
		}
	}else{
		char b[11]={};
		sprintf(b,"%d",*a+100000000);
		std::cout<<b+1;
		return true;
	}
	return false;
}
void add(unsigned int *a, unsigned int *alast, unsigned int *b, int num=0){
	if( a == alast ) return; //[·¬ÜÛÀ
	
	int carry = (*a + *b + num) / 100000000;
	add(a+1, alast, b+1, carry);
	*a = (*a + *b + num) % 100000000;
}
int main(){
	int n;
	std::cin>>n;
	std::string a,b;
	std::getline(std::cin, a);//üsÇÝÌÄ
	for(;n--;){
		std::getline(std::cin, a);
		std::getline(std::cin, b);
		//uint ½è1 0000 0000-1ÜÅJEg·é
		unsigned int _a[11]={},_b[11]={};
		int pcnt = 0;
		for(std::string::iterator it=a.begin();
			it!=a.end(); it++){
			if(++pcnt>80){
				std::cout<<"overflow\n";
				goto cnti;
			}
			addplace(_a, _a+10, *it-'0');
		}
		pcnt=0;
		for(std::string::iterator it=b.begin();
			it!=b.end(); it++){
			if(++pcnt>80){
				std::cout<<"overflow\n";
				goto cnti;
			}
			addplace(_b, _b+10, *it-'0');
		}
		add(_a, _a+11, _b);
		if( _a[10] >= 1 ){
			std::cout<<"overflow\n";
		}else{
			if(!trace(_a, _a+10))
				std::cout<<'0';
			std::cout<<'\n';
		}
cnti:;
	}
}