// c program
#include<stdio.h>
#include <limits.h>
int main(){
	int a[100];
	int n;
	scanf("%d",&n);
	int min1=INT_MAX;
	int min2=INT_MAX;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]!=min1 && a[i]!=min2){
		if(a[i]<min1){
			min2=min1;
			min1=a[i];
		}
		else if(a[i]<min2){
		    min2=a[i];
		}
		}
		
	}
	printf("The smallest element is %d and second smallest is %d",min1,min2);
	return 0;
}

