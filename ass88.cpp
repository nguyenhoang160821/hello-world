#include<stdio.h>

bool tim_so(int a[],int n,int x){
	for (int i=0;i<n;++i);
	{
		if(a[i] == x){
			return true;
			}
		}
		return false;
	}

int main (){
	
	int a[6]={3,1,5,7,8,9};
	int x=7;
	if(tim_so(a,6,x)){
		printf("mang co chua so %d\n",x);
		}else{
			printf("mang khong co so nay\n");
		}
		return 0;
		}
	
