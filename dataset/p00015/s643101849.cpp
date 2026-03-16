#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<string.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(){
	int n;
	string ret1,ret2;
	vector<int> result;
	int num = 0, ret = 0;
	int j;

	cin >> n;

	for (int i = 0;i < n;i++){

		ret = 0;

		cin >> ret1 >> ret2;


		if (ret1.size() > 80 || ret2.size() > 80){
			cout << "overflow" << endl;
			continue;
		}

		for (j = 1;j <= ret1.size() && j <= ret2.size();j++){
			num = (ret1.at(ret1.size() - j) - '0' + ret2.at(ret2.size() - j) - '0' + ret) % 10;
			ret = (ret1.at(ret1.size() - j) - '0' + ret2.at(ret2.size() - j) - '0' + ret);
			ret = (ret - num)/10;
			//cout << "ret:" << ret << endl;
			result.push_back(num);
		}

		if (ret1.size() == ret2.size()){
			if (ret != 0)
				result.push_back(ret);
		}
		else if(ret1.size() > ret2.size()){
			for (; j <= ret1.size(); j++){
				num = (ret1.at(ret1.size() - j) - '0' + ret) % 10;
				ret = ret1.at(ret1.size() - j) - '0' + ret;
				ret = (ret - num) / 10;
				//cout << "ret:" << ret << endl;
				result.push_back(num);
			}
			if (ret != 0)
				result.push_back(ret);
		}
		else if (ret1.size() < ret2.size()){
			for (; j <= ret2.size(); j++){
				num = (ret2.at(ret2.size() - j) - '0' + ret) % 10;
				ret = ret2.at(ret2.size() - j) - '0' + ret;
				ret = (ret - num) / 10;
				//cout << "ret:" << ret << endl;
				result.push_back(num);
			}
			if (ret != 0)
				result.push_back(ret);
		}

		if (result.size() > 80){
			cout << "overflow" << endl;
			while (result.empty() != true){
				result.pop_back();
			}
			continue;
		}


		while (result.empty() != true){
			cout << result[result.size()-1];
			result.pop_back();
		}
		cout << endl;

	}


	return 0;
}