#include <iostream>
#include <vector>
#include<string>
#include<sstream>
#define CAPACITY 9


namespace jisaku{//stoi?????¨?????????????????????????????????????????§??£?¨???????

	int stoi(std::string str){
		int ret;
		std::stringstream ss;
		ss << str;
		ss >> ret;
		return ret;
	}

     std::string to_string(int i){
		 std::string text;
		std::stringstream textline;
		textline<< i;
		textline >> text;
		return text;
	}

}




class OverDigit{

public:

	int num_a[CAPACITY];
	int num_b[CAPACITY];
	OverDigit(std::string str_a, std::string str_b);
	void ChangeDigit(std::string str, int num[]);
	void Add();
};

OverDigit::OverDigit(std::string str_a, std::string str_b){

	ChangeDigit(str_a, num_a);
	ChangeDigit(str_b, num_b);

}

void OverDigit::ChangeDigit(std::string str, int num[]){

	std::vector <int> num_str(CAPACITY, 0);
	int loc = CAPACITY, k = 8;
	int  str_rest,str_Max;

	str_rest = str.length() % CAPACITY;
	str_Max = str.length() / 9;

	for (int j = str.length() - CAPACITY; str_Max > 0; j = j - CAPACITY){
		num_str[k] = jisaku::stoi(str.substr(j, CAPACITY));
		loc = k;
		k--;
		str_Max--;

	}
	//?????????????????????????????????????????\??????

	if (str_rest != 0)num_str[loc - 1] = jisaku::stoi(str.substr(0, str_rest));

	for (int j = 0; j < CAPACITY; j++){
		num[j] = num_str[j];
	}
}
//80????????§????¶???????
void OverDigit::Add(){

	int num_ans[CAPACITY] = {};
	int fat, overflow = 0, count = 0;
	std::string text,t;


	for (int j = CAPACITY - 1; j >0; j--){
		if (num_a[j] + num_b[j] <= 999999999){
			num_ans[j] = num_a[j] + num_b[j];
		}
		else if (num_a[j] + num_b[j] > 999999999){
			fat = (num_a[j] + num_b[j]) - 1000000000;
			num_ans[j] = fat;
			num_a[j - 1]++;
		}

	}

	if (num_a[0] + num_b[0] > 99999999){
		overflow = 1;
	}
	else{
		num_ans[0] = num_a[0] + num_b[0];


	}

	if (overflow == 1){
		std::cout << "overflow" << std::endl;
	}
	else {
		for (int j = 0; j < CAPACITY; j++){
			
          if (num_ans[j] != 0){
				count++;
				t = jisaku::to_string(num_ans[j]);
				if (t.length() != 9){
					for (int l = 0; l < (9 - t.length()); l++){
						text += "0";
					}
				}
				text += t;


			}
			else if (num_ans[j] == 0 && count >= 1){
					text+="000000000";
						}

		}

		int count = 0;
		for (int l = 0; l < text.length(); l++){
			if (count == 0 && text[l] == '0'){
			}
			else {
				std::cout << text[l];
				count++;
			}
		}std::cout << std::endl;
	}

};


int main(){

	
	//vector???????????¨??????80???????¨????
	int N;
	std::string str_a, str_b;

	std::cin >> N;
	std::cin.ignore();

	for (int i = 0; i < N; i++){
		getline(std::cin, str_a);
		getline(std::cin, str_b);
		if (str_a == "0" && str_b == "0"){std::cout << '0' << std::endl;
		}
		else if (str_a.length() >= 81 || str_b.length() >= 81){
		
			std::cout << "overflow" << std::endl;
		}
		else{

			OverDigit OverDigit_a(str_a, str_b);//???????????§??????
			OverDigit_a.Add();
		}
	}
	return 0;
}