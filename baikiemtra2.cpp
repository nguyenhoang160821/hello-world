#include<stdio.h>
#include<string.h>
char doi_ki_tu(char X[])
{
	for(int i=0;i<strlen(X);i++)
	{
		if(X[i]>='X'&& X[i]<='Y')
		{
			X[i]=X[i]+32;
			}
			}
		printf("chuoi duoc doi thanh:\%s",X);
		}
	int main(){
		char X[50];
		printf("chuoi can doi:");
		gets(X);
		doi_ki_tu(X);
	
	return 0;
	}
