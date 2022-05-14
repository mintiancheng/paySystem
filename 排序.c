#include<stdio.h>
int main(){
    int n,c;
    scanf("%d",&n);;
    int a[n],i,j;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-1-i; j++)
        {
            if(a[j]<a[j+1]){
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
        
    }
    for ( i = 0; i < n; i++)
    {
       printf("%d ",a[i]);
    }
    
    return 0;
}