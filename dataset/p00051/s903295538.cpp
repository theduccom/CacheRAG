#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	vector<int>nums(10);
	cin>>n;
	while(n--)
	{
		int in;
		cin>>in;
		fill(nums.begin(),nums.end(),0);
		while(0<in)
		{
			int num=in%10;
			nums[num]++;
			in/=10;
		}
		int mx=0,mn=0;
		int i=9;
		vector<int> cp=nums;
		while(0<=i)
		{
			if(0<cp[i])
			{
				mx*=10;
				mx+=i;
				cp[i]--;
			}
			else i--;
		}
		i=0;
		while(i<10)
		{
			if(0<nums[i])
			{
				mn*=10;
				mn+=i;
				nums[i]--;
			}
			else i++;
		}

		cout<<mx-mn<<endl;
	}
  return 0;
}