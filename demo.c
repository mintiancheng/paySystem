#include <stdio.h>
int main(){
    int a[15],o,i=0,j,c=0;
    scanf("%d",&a[0]);
    while (a[i]!=0)
    {
         i++;
        scanf("%d",&a[i]);
        
    }
    o=i;
    for ( i = 0; i < o; i++)
    {
        for ( j = 0; j < o; j++)
        {
            if( a[i]==a[j] * 2){
                c ++;
            }
        }
    }
    printf("%d",c);
    return 0;
}