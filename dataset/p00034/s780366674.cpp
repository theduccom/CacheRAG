#include<iostream>
using namespace std;
int main(){
	int space[10],sum;
	char dummy;
	while(cin>>space[0]){
		sum=space[0];
		for(int i=1;i<10;++i){
			cin>>dummy>>space[i];
			sum+=space[i];
		}
		int speed1,speed2;
		cin>>dummy>>speed1>>dummy>>speed2;
		double time,distance;
		time=(double)sum/(speed1+speed2);
		distance=speed1*time;
		int answer;
		for(answer=0;distance>0.0;distance-=space[answer++]);
		cout<<answer<<endl;
	}
	return 0;
}