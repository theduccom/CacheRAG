#include<iostream>
#include<string>

int main()
{
	int n;
	char buf[1100];
	std::cin>>n;
	std::cin.getline(buf,1);

	for(int i=0;i<n;i++)
	{
		std::cin.getline(buf,1100);
		
		std::string str(buf);
		bool found=true;
		int index=0;
		int place;

		while(found)
		{
			found=false;
			place=str.find("Hoshino",index);
			
			if(place!=std::string::npos)
			{
				str.replace(place,7,"Hoshina");
				found=true;
			}
		}
		std::cout<<str<<std::endl;
	}
	return 0;
}