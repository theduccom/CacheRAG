#include<iostream>
#include<vector>

using namespace std;
class saleData
{
public:

	int hireNo;
	long saleValue = 0;

	void addSale(long value)
	{
		if(saleValue < 1000000)
		{
			saleValue += value;
		}
	}

	bool judge()
	{
		if(saleValue >= 1000000)
		{
			return true;
		}
		return false;
	}
};
int main()
{
	while(1)
	{
		int dataCount;
		cin >> dataCount;
		vector<saleData> vobj;

		if(dataCount == 0)
		{
			break;
		}
		bool dataFlag = false;
		for(int i = 0; i < dataCount; i++)
		{
			long hireNo;
			long price;
			long No;
			cin >> hireNo >> price >> No;

			for(int j = 0; j < vobj.size(); j++)
			{
				if(vobj.size() == 0)
				{
					break;
				}
				if(vobj[j].hireNo == hireNo)
				{
					vobj[j].addSale(price * No);
					dataFlag = true;
					break;
				}
			}
			if(dataFlag == false)
			{
				saleData sObj;
				sObj.hireNo = hireNo;
				sObj.addSale(price * No);
				vobj.push_back(sObj);
			}
		}
		dataFlag = false;
		for(int i = 0; i < vobj.size() ; i++)
		{
			if(vobj[i].judge() == true)
			{
				cout << vobj[i].hireNo << endl;
				dataFlag = true;
			}
		}
		if(dataFlag == false)
		{
			cout << "NA" << endl;
		}


	}



}