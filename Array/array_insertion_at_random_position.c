#include <stdio.h>
#include <stdlib.h>

void add(int a[],int a2[],int data,int pos,int size){
    int i;
    int index=pos-1;
    for(i=0;i<index;i++){
        a2[i]=a[i];
    }
    a2[index]=data;
    int j;
    for(i=index+1,j=index;i<size+1,j<size;i++,j++){
        a2[i]=a[j];
    }
}

int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    int pos=5,data=65,i;
    int size=sizeof(a)/sizeof(a[0]);
    int a2[size+1];
    add(a,a2,data,pos,size);
    
    printf("before\n");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    
    printf("\n");
    printf("after\n");
    for(i=0;i<size+1;i++){
        printf("%d ",a2[i]);
    }
    return 0;
}
