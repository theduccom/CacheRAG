#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	float a;
	vector<float> m;
	while(cin >> a)
	{
		m.push_back(a);
	}
	cout << *max_element(m.begin(),m.end()) - *min_element(m.begin(),m.end())<< endl;
}