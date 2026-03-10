#include<iostream>
using namespace std;
class QQ{
	public:
	QQ();
};
QQ::QQ(){
	for(int i=11;i<100;i++)
	if(i%10)cout<<i/10<<'x'<<i%10<<'='<<(i/10)*(i%10)<<endl;
}
int main(){
	QQ qq;
	return 0;
}