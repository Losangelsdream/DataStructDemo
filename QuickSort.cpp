typedef int ElemType;

#include<cstdio>
#include<stdlib.h>
using namespace std;


//快速排序
//内部比较排序
//最坏时间复杂度O(n²)
//最优时间复杂度O(nlogn)
//平均时间复杂度O(n)
//所需辅助空间 一般O(logn) 最差O(n)
//不稳定
/**
1、默认以第一个元素为基准线
2、从后往前，从前往后，比基准大的放后面，比基准小放前面
3、找到基准线位置的下标并返回
4、递归处理low——pivot-1和pivot+1——high
*/
void QuickSort(int A[],int low,int high){
	if(low < high){
		int pivot = Partition(A,low,high);
		QuickSort(A,low,pivot-1);
		QuickSort(A,pivot+1,high);
	}
}

int Partition(int A[],int low,int high){
	int pivot = A[low];
	while(low < high){
		while(low < high && A[high] >= pivot){
			--high;
		}
		A[low] = A[high];
		while(low < high && A[low] <= pivot){
			++low;
		}
		A[high] = A[low];
	}
	A[low] = pivot;
	return low;
}





 void QuickSort(int A[],int low,int high){
 	if(low<high){
 		int pivot = Partition(A,low,high);
 		QuickSort(A,low,pivot-1);
 		QuickSort(A,pivot+1,high);
 	}
 }

 int Partition(int A[],int low,int high){
 	int pivot = A[low];
 	while(low<high){
 		while(low<high && A[high] >= pivot){
 			--high;
 		}
 		A[low]= A[high];
 		while(low<high && A[low] <= pivot){
 			++low;
 		}
 		A[high] = A[low];
 	}
 	A[low] = pivot;
 	return low;
 }

int main()
{
    int A[] = { 5, 2, 9, 4, 7, 6, 1, 3, 8 }; // ´ÓÐ¡µ½´ó¿ìËÙÅÅÐò
    int n = sizeof(A) / sizeof(int);
    QuickSort(A, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}
