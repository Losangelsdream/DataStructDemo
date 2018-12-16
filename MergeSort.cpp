typedef int ElemType;

#include<cstdio>
#include<stdlib.h>
using namespace std;


void Merge(int A[],int low,int mid,int high){
	int *temp = (int*)malloc((high)*sizeof(int));
	int i = low;
	int j = mid+1;
	int k;
    for( k = low; k <= high; k++){
        temp[k] = A[k];
	}

	for(k = i; i<=mid&&j<=high;k++){
        if(temp[i] <= temp[j]){
            A[k] = temp[i++];
        }
        else{
            A[k] = temp[j++];
        }
    }

	while(i <= mid){
		 A[k++]= temp[i++];
	}
	while(j <= high){
		A[k++] = temp[j++];
	}

}




void mergeSortRecursion(int A[],int low,int high){
    if(low == high){
        return;
    }
    int mid = (low+high)/2;
    mergeSortRecursion(A,low,mid);
    mergeSortRecursion(A,mid+1,high);
    Merge(A,low,mid,high);
}


int main()
{
    int A1[] = { 6, 5, 3, 1, 8, 7, 2, 4 };      // 从小到大归并排序
    int A2[] = { 6, 5, 3, 1, 8, 7, 2, 4 };
    int n1 = sizeof(A1) / sizeof(int);
    int n2 = sizeof(A2) / sizeof(int);
    printf("%d",n1);
    mergeSortRecursion(A1, 0, n1 - 1);          // 递归实现

    for (int i = 0; i < n1; i++)
    {
        printf("%d ", A1[i]);
    }
    printf("\n");
    return 0;
}
