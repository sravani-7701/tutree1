//c program median stream
#include<stdio.h>
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
}
int main(){
    int a[100]; //I'm assuming the maximum size of array to 100 we can modify that according to the need
    int n;
    float avg;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i==0){
            printf("%d",a[i]);
        }
        else if(i==1){
            avg=(a[i]+a[i-1])/(float)2;
            
            printf(" Median- %0.2f",avg);
        }
        else{
        if(a[i]<a[i-1]){
        for(int j=i;j>0;j--){
            
            if(a[j]<a[j-1]){
                swap(&a[j],&a[j-1]);
            }
        }
        }
        if(i%2==0){
            printf(" Median- %d",a[i/2]);
        }
        else{
            avg=(a[i/2]+a[(i/2)+1])/(float)2;
            printf(" Median- %0.2f",avg);
        }
        }
    }
    
    return 0;
}
