#include<stdio.h>
void main() {
char in[100],out[100];
int count=0,i=0,j=0;
printf("Enter the Input String : ");
scanf("%s",in);
while(in[i]!='\0') {
if(in[i]=='1') {
count++; }
else {
count=0; }
out[j++]=in[i++];
if(count==5) {
out[j++]='0';
count=0; } }
printf("After Bit Stuffing : %s\n",out); }
// Output:Enter the input String : 111111100111011
// After Bit Stuffing : 11111011001110011
