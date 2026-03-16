#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
#include <sstream>

using namespace std;

int stoi(string str){
	int ret;
	stringstream ss;
	ss << str;
	ss >> ret;
	return ret;
}

int main(){
	string s;
	string price="",quantity="";
	int comma=0;
	int i = 0;
	int total = 0;//????£???????????¨?
	int sum=0;//?£??????°???????¨?
	int count = 0;//??\?????°
	double average = 0;
	int fraction;
	int new_ave;



	while(cin >> s){
		count++;
		i= comma = 0;
		price = quantity = "";

		while(s[i] != '\0'){
			if(comma == 0){
				price += s[i];
				i++;
				if(s[i] == ','){
					i++;
					comma = 1;
				}
			}else if(comma == 1){
				quantity += s[i];
				i++;
			}
		}
		total += stoi(price) * stoi(quantity);
		sum += stoi(quantity);

	}
	cout << total << endl;
	average = (double)sum / count;
	fraction = (int)(average * 10) % 10;
	if(fraction > 4){
		new_ave = (int)average + 1;
	}else{
		new_ave = (int)average;
	}

	cout << new_ave << endl;

}