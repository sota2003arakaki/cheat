#include <stdio.h>
int main(void){
    int num = 0;
    while(1){
        num++;
        if (num>50){
            break;
        }
        if(num%5!=0){
            continue;
        }
        printf("%dは5で割り切れます。\n",num);
    }
    return 0;
}