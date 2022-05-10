#include <stdio.h>
int main(){
    int a[6]={10,9,8,7,6,5},i,j,c;
    //给数排序
    for ( i = 0; i < 6-1; i++)
    //执行n-1趟
    {//每一趟都可以排好一个最大的数
        for ( j = 0; j < 6-1-i; j++)
        {   //后一项比前一项小就交换值
            if(a[j]>a[j+1]){
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }
    for ( i = 0; i < 6; i++)
    {
        printf("%d",a[i]);
    }
    
    return 0;
}