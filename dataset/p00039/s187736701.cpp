#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string str;
	int l, s, t;
	
	while(cin >> str){
		vector<int> vec;
		l = str.size();
		
		for(int i = 0; i < l; i++){
			if(str[i] == 'M'){
				vec.push_back(1000);
			} else if(str[i] == 'D'){
				vec.push_back(500);
			} else if(str[i] == 'C'){
				vec.push_back(100);
			} else if(str[i] == 'X'){
				if(str[i+1] == 'C'){
					vec.push_back(90);
					i++;
				} else if(str[i+1] == 'L'){
					vec.push_back(40);
					i++;
				} else if(str[i+1] == 'V'){
					t = 15;
					i++;
					s = 1;
					while(str[i+s] == 'I' && s <= 3 && i+s < l){
						t += 1;
						s++;
					}
					i += (s-1);
					vec.push_back(t);
				} else if(str[i+1] == 'I'){
					i++;
					if(str[i+1] == 'V'){
						i++;
						vec.push_back(14);
					} else if(str[i+1] == 'X'){
						i++;
						vec.push_back(19);
					} else {
						t = 11;
						s = 1;
						while(str[i+s] == 'I' && s <= 2 && i+s < l){
							s++;
							t++;
						}
						i += (s-1);
						vec.push_back(t);
					}
				} else {
					t = 10;
					s = 1;
					while(str[i+s] == 'X' && s <= 2 && i+s < l){
						t += 10;
						s++;
					}
					i += (s-1);
					vec.push_back(t);
				}
			} else if(str[i] == 'L'){
				t = 50;
				s = 1;
				while(str[i+s] == 'X' && s <= 3 && i+s < l){
					t += 10;
					s++;
				}
				i += (s-1);
				vec.push_back(t);
			} else if(str[i] == 'V'){
				t = 5;
				s = 1;
				while(str[i+s] == 'I' && s <= 3 && i+s < l){
					t += 1;
					s++;
				}
				i += (s-1);
				vec.push_back(t);
			} else {
				if(str[i+1] == 'V'){
					i++;
					vec.push_back(4);
				} else if(str[i+1] == 'X'){
					i++;
					vec.push_back(9);
				} else {
					t = 1;
					while(str[i+t] == 'I' && t < 3 && i+t < l){
						t++;
					}
					i += (t-1);
					vec.push_back(t);
				}
			}
		}
		
		t = 0;
		for(int i = 0; i < vec.size(); i++){
			t += vec[i];
		}
		
		for(int i = 0; i < vec.size()-1; i++){
			if(vec[i] < vec[i+1]){
				t -= 2*vec[i];
			}
		}
		
		cout << t << endl;
	}
	
	return 0;
}