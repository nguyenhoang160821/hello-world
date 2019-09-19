#include<stdio.h>

	int so_fibonaci(int a[]){
		int n;
		scanf ("%d",&n);
		int a1=1,a2=1,a3=2;
		for(int i=0,j=0;a1+a2<=n&&n>0;i+=j,j++){
			a1=a2;
			a2=a3;
			a3=a1+a2;
		}
		printf("so thu %d trong day:%d\n",n,a3);
		return 0;
		}
		
