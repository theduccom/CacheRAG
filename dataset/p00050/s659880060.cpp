#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>

using namespace std;

string ap="apple";
string pe="peach";

string str;


int main(){
	getline(cin,str);
	int len=str.size();
	for(int i=0; i<len; i++){
		if(str.at(i)=='a'){
			for(int j=0; j<5; j++){
				if(i+j>len||str.at(i+j)!=ap.at(j))break;
				if(j==4){
					for(int k=0; k<5; k++){
						str.at(i+k)=pe.at(k);
					}
				}
			}
		}
		else if(str.at(i)=='p'){
			for(int j=0; j<5; j++){
				if(i+j>len||str.at(i+j)!=pe.at(j))break;
				if(j==4){
					for(int k=0; k<5; k++){
						str.at(i+k)=ap.at(k);
					}
				}
			}
		}
	}
	cout<<str<<endl;
}