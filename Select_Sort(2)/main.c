#include <stdio.h>
void Input(int a[], int n);
void select_sort(int a[],int n);

int main() {
    int a[5];
    int i,j,min,t;
    printf("Please enter the array unsorted:\n");
     Input(a, 5);
     select_sort(a,5);

//    for (i=0; i<5; i++) {
//        scanf("%d",&a[i]);
//    }
//    for (i=0; i<5-1; i++) {
//        min = i;
//        for (j=i+1;j<5;j++) {
//            if (a[j] < a[min])
//                min = j;               //此处只是标记了最小元素的下标，没有改变数组的顺序
//        }
//
//        if (i != min ) {                  //此处真正执行交换顺序的功能
//            t = a[i];
//            a[i] = a[min];
//            a[min] = t;
//        }
//    }


    //输出排序后的数列
    printf("The array after selection_sort is :\n");
    for (i=0; i<5; i++) {
        printf("%d ",a[i]);
    }

    return 0;
}

void select_sort(int a[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min_index = i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j] < a[min_index])
            {
                min_index = j;
            }
        }
        if( i != min_index)
        {
            int temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        }
    }
}

void Input(int a[], int n) {
    int i;
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);   //数组作为实参传入时，传的是数组名称
}