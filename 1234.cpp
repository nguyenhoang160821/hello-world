#include<stdio.h>
#include<stdlib.h>

int main(){
	int * ary;
	
	ary=(int *)malloc(5*sizeof(int));
	for(int i=0;i<5;++i)
	{
		scanf("%d",ary+i);
	}
	
	ary=(int *)realloc(ary,10*sizeof(int));
	for(int i=5;i<10;++i)
	{
		scanf("%d",ary+i);
	}
	free(ary);
	
	return 0;
}
