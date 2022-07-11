#include <stdio.h>
#include <stdlib.h>

int add(int a[],int freepose,int data){
    a[freepose]=data;
    freepose++;
    return freepose;
}

int main()
{
    int i,a[10],freepose,n;
    printf("enter the no. of elements :");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\n");
    freepose=n;
    freepose=add(a,freepose,65);
    for(i=0;i<freepose;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
