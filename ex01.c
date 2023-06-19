#include <stdio.h>
int main(void){
    int sum = 0;
    for(int i=1;i<=9;i++){

        for(int j=1;j<=9;j++){
            sum+=i*j;
            if(i==j){
                break;
            }
        }
        if(i>=5){
            break;
        }
    }
    printf("九九算表の5行5列目までの下三角要素の総和:%d\n",sum);
    return 0;

}