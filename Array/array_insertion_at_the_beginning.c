#include <stdio.h>
#include <stdlib.h>

int add(int a[],int n,int data){
    int i;
    for(i=n-1;i>=0;i--){
        a[i+1]=a[i];
    }
    a[0]=data;
    return n+1;
}

int main(){
    int a[10],n,data=65,i;
    printf("enter the no. of elements: ");
    scanf("%d",&n);
    
    printf("enter the elements:-\n");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    printf("\n");
    n=add(a,n,data);
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
   return 0;
}
