#include <stdio.h>
int main(){
    int a[6]={10,9,8,7,6,5},i,j,c;
    for ( i = 0; i < 6-1; i++)
    {
        for ( i = 0; i < 6-1-i; i++)
        {
            if(a[j]>a[j+1]){
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }
    for ( i = 0; i < 6; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}