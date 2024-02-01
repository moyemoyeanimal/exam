#include<stdio.h>
int main(){
    int wsize, sent=0,ack=-1;
    printf("Enter the window size: ");
    scanf("%d",&wsize);

    while (ack<wsize){
        for(int i=0;i<wsize;i++){
            printf("Frame %d has been sent\n",sent);
            sent++;
        }
    }
}