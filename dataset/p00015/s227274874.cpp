#include <stdio.h>
#include <math.h>

using namespace std;


int main(){
	char buf1[101],buf2[101];
	bool overflowFLG;
	int n,length1,length2,kuriagari,tmp,output[101];
	scanf("%d",&n);

	for(int loop=0;loop<n;loop++){
		length1 = length2 = 0;
		scanf("%s",buf1);
		scanf("%s",buf2);
		for(int i=0; buf1[i] !='\0';i++)length1++;
		for(int i=0; buf2[i] !='\0';i++)length2++;

		if(length1 >=81 || length2 >= 81)printf("overflow\n");
		else{
			overflowFLG=false;
			kuriagari=0;
			if(length1>length2){
				for(int k=0;length1-1-k>=0;k++){
					tmp = kuriagari;
					if(length2-1-k>=0){
						tmp += (buf1[length1-1-k]-'0')+(buf2[length2-1-k]-'0');
						if(tmp>=10){
							tmp %= 10;
							kuriagari = 1;
							if(k==79)overflowFLG=true;
						}else{
							kuriagari = 0;
						}
						output[length1-1-k] = tmp;
					}else{
						if(kuriagari == 0){
							output[length1-1-k] = buf1[length1-1-k]-'0';
						}else{
							output[length1-1-k] = buf1[length1-1-k]-'0' + kuriagari;
							if(output[length1-1-k]>=10){
								output[length1-1-k] %= 10;
								kuriagari = 1;
								if(k==79)overflowFLG=true;
							}else{
								kuriagari = 0;
							}
						}
					}
				}
				if(overflowFLG){
					printf("overflow\n");
				}else{
					if(kuriagari == 1)printf("1");
					for(int k=0;k<=length1-1;k++){
						printf("%d",output[k]);
					}
					printf("\n");
				}
			}else{
				for(int k=0;length2-1-k>=0;k++){
					tmp = kuriagari;
					if(length1-1-k>=0){
						tmp += (buf2[length2-1-k]-'0')+(buf1[length1-1-k]-'0');
						if(tmp>=10){
							tmp %= 10;
							kuriagari = 1;
							if(k==79)overflowFLG=true;

						}else{
							kuriagari = 0;
						}
						output[length2-1-k] = tmp;
					}else{
						if(kuriagari == 0){
							output[length2-1-k] = buf2[length2-1-k]-'0';
						}else{
							output[length2-1-k] = buf2[length2-1-k]-'0' + kuriagari;
							if(output[length2-1-k]>=10){
								output[length2-1-k] %= 10;
								kuriagari = 1;
								if(k==79)overflowFLG=true;
							}else{
								kuriagari = 0;
							}
						}
					}
				}
				if(overflowFLG){
					printf("overflow\n");
				}else{
					if(kuriagari == 1)printf("1");
					for(int k=0;k<=length2-1;k++){
						printf("%d",output[k]);
					}
					printf("\n");
				}
			}
		}
	}

    return 0;
}