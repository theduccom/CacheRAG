#include <stdio.h>
#include <math.h>

using namespace std;

int main(){

	char buf[81],result[81];
	bool FLG;
	short length;

	while(fgets(buf,81,stdin)!=0){
		FLG = false;
		length = 0;
		for(int i=0;buf[i]!='\0';i++)length++;
		for(int i=0;i<=25;i++){ //?????????????????°
			for(int k=0;buf[k]!='\0';k++){
				if(buf[k] >= 97 && buf[k] <= 122){
					if(buf[k]+i<=122){
						result[k]=buf[k]+i;
					}else{
						result[k]=97+(buf[k]+i-123);
					}
				}else{
					result[k]=buf[k];
				}
				result[k+1]='\0';
			}
			for(int k=0;result[k]!='\0';k++){
				// the this that ????????????????????????????????????
				if(length==4){
					if(result[0]=='t'&&result[1]=='h'&&result[2]=='e'&&result[3]=='.'){
						FLG=true;
						break;
					}
				}else{
					//??????
					if(result[0]=='t'&&result[1]=='h'&&result[2]=='e'&&result[3]==' '){
						FLG=true;
						break;
					}else if(result[0]=='t'&&result[1]=='h'&&result[2]=='i'&&result[3]=='s'&&result[4]==' '){
						FLG=true;
						break;
					}else if(result[0]=='t'&&result[1]=='h'&&result[2]=='a'&&result[3]=='t'&&result[4]==' '){
						FLG=true;
						break;
					}

					//????°?
					if(result[length-1]=='.'&&result[length-2]=='e'&&result[length-3]=='h'&&result[length-4]=='t'&&result[length-5]==' '){
							FLG=true;
							break;
					}
					if(length>5&&result[length-1]=='.'&&result[length-2]=='s'&&result[length-3]=='i'&&
							result[length-4]=='h'&&result[length-5]=='t'&&result[length-6]==' '){
							FLG=true;
							break;
					}else if(length>5&&result[length-1]=='.'&&result[length-2]=='t'&&result[length-3]=='a'&&
							result[length-4]=='h'&&result[length-5]=='t'&&result[length-6]==' '){
							FLG=true;
							break;
					}


					for(int p=4;result[p]!='\0';p++){
						if(result[p]==' ' && result[p-1] == 'e' && result[p-2] == 'h' && result[p-3] == 't' && result[p-4] == ' '){
							FLG = true;
							break;
						}
					}
					if(FLG)break;
					for(int p=5;result[p]!='\0';p++){
						if(result[p]==' ' && result[p-1] == 's' && result[p-2] == 'i' && result[p-3] == 'h' && result[p-4] == 't' && result[p-5] == ' '){
							FLG = true;
							break;
						}
					}
					if(FLG)break;
					for(int p=5;result[p]!='\0';p++){
						if(result[p]==' ' && result[p-1] == 't' && result[p-2] == 'a' && result[p-3] == 'h' && result[p-4] == 't' && result[p-5] == ' '){
							FLG = true;
							break;
						}
					}
					if(FLG)break;
				}
			}
			if(FLG)break;
		}
		printf("%s",result);

	}

    return 0;
}