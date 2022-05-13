#include <stdio.h>
int main(){
    int a,i,q=1,w=1,l=0,c=0;
    scanf("%d",&a);
    for (i=0;i<a;i++){
        c++;
        q=w;
        w=l;
        l=q+w;
        if(c==a){
            printf("%d",l);
        }
    }
    return 0;
}