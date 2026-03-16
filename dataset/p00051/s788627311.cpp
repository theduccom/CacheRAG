#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int main() {
	string nums;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> nums;
		for (int j = 0; j < nums.size() - 1; j++) {
			for (int k = 0; k < nums.size() - 1; k++) {
				if (nums[k] > nums[k + 1]) {
					string tmp;
					tmp = nums[k];
					nums[k] = nums[k + 1];
					nums[k + 1] = tmp[0];
				}
			}
		}
		int num1 = atoi(nums.c_str());
		string tmp="";
		for (int i = nums.size()-1; i >= 0; i--) {
			tmp += nums[i];
		}
		int num2 = atoi(tmp.c_str());
		cout << num2 - num1 << endl;
	}
}
