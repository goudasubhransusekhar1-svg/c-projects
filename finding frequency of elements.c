#include<stdio.h>
int count_frequency(int a[],int target);
int main(){
	int a[5];
	int res;
	int ele;
	int i;
	for(i=0;i<5;i++){
		printf("enter the element for position %d",i);
		scanf("%d",&a[i]);
		
	}
	printf("enter the element you want to find frequency");
	scanf("%d",&ele);
	res=count_frequency(a,ele);
	printf("number of  times %d repeated is %d",ele,res);
	return 0;
	
	
}
int count_frequency(int *a,int target){
	int j;
	int count=0;
	for(j=0;j<5;j++){
		if(a[j]==target){
			count=count+1;
		}
	}
	return count;
}
