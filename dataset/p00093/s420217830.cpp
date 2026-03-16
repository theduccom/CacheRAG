#include <iostream>



bool judge(int year);

int main() 
{
	int start, end;
	int number = 0;
	
	while (true) {
		int check = 0;
		
		std::cin >> start >> end;
		
		if (start == 0 && end == 0) {
			break;
		}
		
		if (number != 0) {
			std::cout << std::endl;
		}
		
		number = 1;
		
		for (int i = start; i <= end; i++) {
			if (judge(i)) {
				std::cout << i << std::endl;
				check = 1;
			}
		}
		
		if (check == 0) {
			std::cout << "NA" << std::endl;
		}
		

	}
	return 0;
}


bool judge(int year){
	if ((year % 4 == 0 && !(year % 100 == 0)) || year % 400 == 0) {
		return true;
	} else {
		return false;
	}
}