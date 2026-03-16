#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	int nn;
	cin>>nn;
	for(int l = 0; l < nn; l++){
		int nums[8];
		int nums2[8];
		char n;
		cin>>n;
		if(cin.eof())
			break;
		nums[0]=n-'0';
		nums2[0]=nums[0];
		
		for(int i = 1; i < 8; i++){
			char n;
			cin>>n;
			nums[i]=n-'0';
			nums2[i]=nums[i];
		}
		sort(nums,nums+8);
		sort(nums2,nums2+8,greater<int>());
		int s[2];
		s[0]=s[1]=0;
		for(int i = 0; i < 8; i++){
			s[0]+=nums[i];
			s[1]+=nums2[i];
			
			s[0]*=10,s[1]*=10;
		}
		s[0]/=10,s[1]/=10;
		
		cout<<s[1]-s[0]<<endl;
	}
	
	
	return 0;
}