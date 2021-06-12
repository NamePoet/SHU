#include<stdio.h>
int b[100];
void qsort(int l,int r){//快速排序的左端和右端
    if(l>=r) return;//结束条件
    int i=l,j=r,key=b[i];//定义左端数字为基准，左边的数都比基准小，右边的数都比基准大。
    while(i<j){
        while(i<j&&b[j]>=key) j--;//右端正序，端号往左移
        if(i<j) b[i]=b[j];//循环打破，右端逆序
        while(i<j&&b[i]<=key) i++;//左端正序，端号往右移
        if(i<j) b[j]=b[i];//循环打破，左端逆序
    }
    b[i]=key;
    qsort(l,i-1);//递归，左边组继续排序
    qsort(i+1,r);
}
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);//输入数字
    qsort(0,n-1);//调用函数排序
    for(i=0;i<n;i++)//输出排序好的数字
        printf("%4d",b[i]);
    return 0;
}
