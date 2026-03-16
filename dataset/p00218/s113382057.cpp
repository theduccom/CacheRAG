using namespace std;
#include <iostream>
#include <string>
#include <set>
#include <functional>
#include <vector>
#include <algorithm>
#include <stdio.h>
int main()
{
	int n;
	while(cin>>n&&n){
		int pm,pe,pj;
		while(n--){
			char ans='C';
			cin>>pm>>pe>>pj;
			if(pm==100||pe==100||pj==100||
				pm+pe>=180||pm+pe+pj>=240)ans='A';
			else if(pm+pe+pj>=210||
				(pm+pe+pj>=150&&(pm>=80||pe>=80)))ans='B';
			cout<<ans<<endl;
		}

	}
    return 0;
}