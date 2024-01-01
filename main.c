#include<stdio.h>
int main(){
    int i=0,n;
    printf("enter value: ");scanf("%d",&n);
    while(i<n+1){
        printf("%d\n",i);i++;fflush(stdout); //flush the standard output buffer(by chatgpt) because the printf had no character
    }
    return 0;
}
