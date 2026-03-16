#include <cstdio>
#include <cstring>
using namespace std;

int main(void)
{
    int n;
    int flag;
    scanf("%d", &n);
    
    while (n != 0){
        flag = 1;
        
        int num1[81] = {0};
        int num2[81] = {0};
        int max_len;
        
        char in[3000];
        scanf("%s", in);
        // êUlðæèÞ
        int len = (int)strlen(in);
        if (80 < len) flag = 0;
        // üÁ½lª80Èã¾Á½çAflagð0É·é
        else {
            max_len = len;
            int j = 0;
            for (int i = (len - 1); -1 < i; i--){
                num1[j] = in[i] - '0';
                j++;
            }
        }
        
        scanf("%s", in);
        // êUlðæèÞ
        len = (int)strlen(in);
        if (80 < len) flag = 0;
        // üÁ½lª80Èã¾Á½çAflagð0É·é
        else {
            if (max_len < len) max_len = len;
            int j = 0;
            for (int i = (len - 1); -1 < i; i--){
                num2[j] = in[i] - '0';
                j++;
            }
        }
        
        // üÁ½lª80Èã¶áÈ¢Æ«ÉZ
        if (flag == 1){
            for (int i = 0; i < 80; i++){
                num1[i] += num2[i];
                if (10 <= num1[i]){
                    num1[i + 1] += 1;
                    num1[i] %= 10;
                }
            }
            
            if (num1[80] != 0){
                flag = 0;
                // 81Úª0¶áÈ¢ = overflow
            }
            
            // overflowµÄÈ¢Æ«ÉoÍ
            if (flag == 1){
                // ÅãÌ«µã°ÅJèãªèµÄé©Ç¤©
                if (num1[max_len] == 0){
                    for (int i = max_len - 1; -1 < i; i--){
                        printf("%d", num1[i]);
                    }
                    printf("\n");
                }
                else {
                    for (int i = max_len; -1 < i; i--){
                        printf("%d", num1[i]);
                    }
                    printf("\n");
                }
            }
        }
        
        // ¡ÜÅÉflagª0ÉÈÁÄ½çoverflowI
        if (flag == 0){
            printf("overflow\n");
        }
        
        n--;
    }
    
}