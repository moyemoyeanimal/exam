#include<stdio.h>
#include<string.h>
void main() {
char msg[30];
int i,s,n;
printf("Enter text:");
scanf("%s",msg);
printf("Enter frame size:");
scanf("%d",&n);
s=strlen(msg);
for(i=0;i<s;i++) {
if(i==0) {
printf("$"); }
else if(i%n==0) {
printf("|"); }
if(msg[i]=='$' || msg[i]=='#' || msg[i]=='*') {

printf("*"); } printf("%c",msg[i]); }
printf("#");
}
