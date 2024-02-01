#include<stdio.h>
#include<string.h>
void main() {
char data[1000]; 
int fsize;
printf("Enter data");
scanf("%s",data);
int l=strlen(data), low=0, high, i, fcount;
do{ printf("Enter %d frame size:",fcount);
scanf("%d",fsize); fcount++;
high=low+fsize; 
printf("[");
for(i=low; i<high;i++){
    if (data[i]=="\0"){
        low=1; high=1; break; 
}
print("%c",data[i]); 
}
low = high; printf("]\n"); 
}
while(low<1); 
}
