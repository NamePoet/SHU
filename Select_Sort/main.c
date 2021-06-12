#include <stdio.h>

void SelectSort(int r[ ], int n);    		//用选择排序思想对数组a中的n个元素排序
const int N = 4 ;

int main (void)
{
    int a[N] ;                      		//①定义有N个元素的数组 a
    printf("输入%d个整数：\n", N);   		//提示输入N个元素
    for(int i = 0; i < N; i++)          	//②输入数组的N个元素
        scanf("%d", &a[i]);
    SelectSort(a, N);             		//③调用函数对数组a进行排序

    printf("排序后结果为：");
    for(int i = 0; i < N; i++)        	//④输出排序后的数组元素
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
void SelectSort(int r[ ], int n)
{
    int i, j, mink, m;           			//mink存放最小元素的下标
    for(i = 0; i < n-1; i++)
    {
        mink = i;           				//在r[i]~r[n-1]中找最元素，用mink记录最小元素下标
        for(j = i + 1; j < n; j++)
        {
            if(r[mink] > r[j])  mink = j;
//            for(int i = 0; i < N; i++)        	//④输出排序后的数组元素
//                printf("%d ", r[i]);
//            printf("\n");
        }
        if(mink != i)      		//如果a[i]元素不是r[i]~r[n-1]中的最小元素，则交换a[mink],a[i]
        {
            int t;
            t = r[i];  r[i] = r[mink];  r[mink] = t;
            for(int i = 0; i < N; i++)        	//④输出排序后的数组元素
                printf("%d ", r[i]);
            printf("\n");
        }
    }
}