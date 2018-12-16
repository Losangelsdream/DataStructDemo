typedef int ElemType;
#include<cstdio>
using namespace std;
/**插入排序
时间复杂度最好 O(n)
时间复杂度最差 O(n²)
稳定性：稳定
步骤
1、从第二个元素开始逐一插入
2、将要插入的元素给哨兵A[0];
3、如果前面位置的元素大于待插入元素，交换位置。
4、插入待插入元素
*/


 void InsertSort(int A[],int n){
    for(int i = 2;i <= n; i++){
       A[0] = A[i];
       j = i - 1;
       while(j >= 0 && A[j] > A[0]){
        A[j+1] = A[j];
        j--
       }
       A[j] = A[0];
    }
 }



/**折半插入排序
时间复杂度最差 O(n²)
稳定性：稳定
步骤
1、从第二个元素开始逐一插入
2、将要插入的元素给哨兵A[0];
3、设置折半查找的范围
3、进行折半查找
4、统一移动元素
5、将待插入元素插入A[low]
*/
void InsertSortBinary(int A[],int n){
    for(int i = 2; i<=n; i++){
        A[0]= A[i];
        int low = 1;
        int high = i-1;
        while(low <= high){
            mid = (high+low)/2;
            if(A[mid] > A[0]){
                high = mid -1;
            }else{
                low = mid+1;
            }
        }
        for(int j = i-1; i>= low; j--){
            A[j+1] = A[j];
        }
        A[low] = A[0];
    }
}

 

/**
希尔排序

时间复杂度 O(n 1.3次方)
最坏时间复杂度 O(n²)
空间复杂度O(1)
不稳定
*/

void  ShellSort(int A[],int n){
    for(int dk=n/2;dk>=0;dk=dk/2){
        for(int i=dk;i<= n;i++){
            int j = i;
            A[0] = A[j];
            if(A[j]< A[j-dk]){
                while(j-dk>= 0 && A[j-dk]>A[0]){
                    A[j] = A[j-dk];
                    j = j-dk;
                }
                A[j] = A[0];
            }
        }
    }
}


 



int main()
{



    int A[] = {0,6,5,3,1,7,8,4,2};
    int n = sizeof(A) / sizeof(int);
    ShellSort(A,n-1);
    printf("Result:");
    for (int i = 1; i <= n-1 ; i++)
    {
        printf("%2d",A[i]);
    }
    printf("\n");
    return 0;
}
