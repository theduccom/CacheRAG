#include <cstdio>
#include <iostream>

using namespace std;

int main(void) {
	int sets;
	char input1[500], input2[500], out[500];
	int i1, i2, o, carry;
	int ic1, ic2;
	int i;

	cin >> sets;
	for(i=0;i<sets;i++) {
		scanf("%s", input1);
		for(i1=0;input1[i1] != '\0';i1++);
		scanf("%s", input2);
		for(i2=0;input2[i2] != '\0';i2++);
		i1--;i2--;o=0;carry=0;
		while(i1>=0 || i2>=0 || carry) {
			if(o > 80) { break; }
			if(i1>=0) { ic1 = input1[i1]-'0'; i1--; } else { ic1 = 0; }
			if(i2>=0) { ic2 = input2[i2]-'0'; i2--; } else { ic2 = 0; }
			if( ic1+ic2+carry < 10 ) {
				out[o] = ic1+ic2+carry+'0';
				carry = 0;
			} else {
				out[o] = ic1+ic2+carry-10+'0';
				carry = 1;
			}
			o++;
		}
		if(o > 80) {
			printf("overflow\n");
		}
		else {
			for(o--;o>=0;o--) {
				printf("%c", out[o]);
			}
			printf("\n");
		}
	}

	return 0;
}