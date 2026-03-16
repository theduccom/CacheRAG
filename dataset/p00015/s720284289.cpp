#include<iostream>
#include<string>
using namespace std;

int main(){

	int n, s, t, cnt1, cnt2;
	string str1, str2, str3;

	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> str1 >> str2;

		str3 = "";
		cnt1 = str1.length() - 1;
		cnt2 = str2.length() - 1;
		if(cnt1 > 80 || cnt2 > 80){
			cout << "overflow" << endl;
			continue;
		}
		t = 0;
		while(cnt1 >= 0 || cnt2 >= 0){
			s = t;
			if(cnt1 >= 0) s += str1[cnt1] - '0';
			if(cnt2 >= 0) s += str2[cnt2] - '0';
			str3 += '0' + s % 10;
			t = (s - s % 10) / 10;
			cnt1--;
			cnt2--;
		}
		if(t != 0) str3 += '0' + t;
		
		if(str3.length() > 80){
			cout << "overflow" << endl;
			continue;
		}
		
		for(int j=str3.length() - 1; j>=0; j--){
			cout << str3[j];
		}
		cout << endl;
	}

  return 0;
}