typedef int ElemType;

#include<cstdio>
#include<stdlib.h>
using namespace std;
// 分类 -------------- 内部比较排序
// 数据结构 ---------- 数组
// 最差时间复杂度 -------  O(n²)
// 空间复杂度  ----------  O(1) 
// 最优时间复杂度 -------  O(n)
// 平均时间复杂度 -------- O(n²)
// 稳定性  -------------- 稳定
1、整个数组运行n-1遍，设一个旗子默认为false判断是否交换
2、从最后一个元素开始，到第i个元素为止，两两比较大小，前者比后者大，则交换，旗帜设为n
3、如果旗帜为false，则无交换，返回结果
*/
void Swap(int A[], int i, int j)
{
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}
//从后往前
void BubbleSort(int A[],int n){
    int i,j;
    for(int i = 0; i < n-1; i++){
        flag = false;
        for(int j = n-1; j > i; j--){
            if(A[j-1]>A[j]){
                Swap(A,j-1,j);
                flag = true;
            }
        }
        if(flag == false){
            return;
        }
    }
}


 

int main()
{
    int A[] = { 6, 5, 3, 1, 8, 7, 2, 4 };    // ´ÓÐ¡µ½´óÃ°ÅÝÅÅÐò
    int n = sizeof(A) / sizeof(int);
    BubbleSort2(A, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}



