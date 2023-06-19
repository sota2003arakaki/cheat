#include <stdio.h>
int main(void){
    int number = 0;
    int times = 20;
    while(1){
        number++;
        if((number&(number-1))!=0){
            continue;
        }
        printf("数字%dを発見しました!\n",number);
        if (number>>times==1){
            break;
        }
    }
    return 0;
}