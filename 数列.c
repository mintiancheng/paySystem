#include <stdio.h>
int main(){
    int a,i,q=1,w=1,l=0,c=2;
    scanf("%d",&a);
    for (i=0;i<a;i++){
        c++;
        l=q+w;
        q=w;
        w=l;
        if(c==a){
            printf("%d",l);
        }
    }
    return 0;
}