#include <stdio.h>

void main(){
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        for(int j=0;j<N-i;j++){
            printf("%c\t",'*');
        }
        printf("\n");
    }
}