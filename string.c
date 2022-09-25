#include<stdio.h>
#include<string.h>
int main()
{
char str[1000];
int i;
printf("Enter the string\n");
scanf("%s",&str);
for(i=0;str[i]!='\0';i++);
printf("length of str is %d",i);
return 0;
}
