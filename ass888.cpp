#include<stdio.h>
#include<stdio.h>
 
int main(){
	char s[20];
	printf("nhap mang\n");
	scanf("%s",s);
	for(int i=(strlen(s)-1);i>=0;--i)
	{
	if(s[i]>=97 && s[i]<=122){
		printf("%c",s[i]-32);
		}else{
			printf("%c",s[i]);
		}
		return 0;
		}
		}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
