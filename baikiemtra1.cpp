#include<stdio.h>

int main(){
	int x;
	int y;
	int z=0;
	printf("nhap mot chu so tren ban phim:");
	scanf("%d",&x);
	while(x>0)
	{
		
		y=x % 10;
		z=z+y;
		x=x/10;
		}
		
	printf("tong cac chu so la:%d\n",z);	
	
	return 0;
	}
