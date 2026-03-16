/*AOJ 0023*/

#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

class Circle_obj{
public:
	double x,y,r;
};

int isCircleToCircle(Circle_obj a,Circle_obj b){

	double tmpX = a.x - b.x;
	double tmpY = a.y - b.y;

	double R = sqrt(tmpX*tmpX + tmpY*tmpY);

	if(a.r >= b.r){
		if( R + b.r < a.r){
			return 2;
		}
	}
	else{
		if( R + a.r < b.r ){
			return -2;
		}
	}

	if( R <= a.r + b.r){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){

	int n;

	cin>>n;

	Circle_obj a,b;

	vector<int> data;

	for(int i=0;i<n;i++){
		cin>>a.x;
		cin>>a.y;
		cin>>a.r;
		cin>>b.x;
		cin>>b.y;
		cin>>b.r;

		cout<<isCircleToCircle(a,b)<<endl;

		//data.push_back(isCircleToCircle(a,b));
	}
	/*
	for(int i=0;i<n;i++){
		cout<<data.at(i)<<endl;
	}
	*/

	return 0;
}