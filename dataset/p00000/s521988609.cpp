//
//  main.cpp
//  aojTest1
//
//  Created by yusuke okui on 2013/03/22.
//  Copyright (c) 2013年 yusuke okui. All rights reserved.
//

#include <iostream>

int main(void)
{
	for(int i=1; i<10; i++){
		for(int j=1; j<10; j++){
			std::cout << i << 'x' << j << '=' << i*j << std::endl;
		}
	}
	
	return 0;
	
}