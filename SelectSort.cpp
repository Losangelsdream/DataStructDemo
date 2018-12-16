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

void SelectSort(int A[],int n){
    for(i = 0 ; i< n-1; i++){
        min = i;
        for(j = i+1;j<n;j++){
            if(A[j]<A[min]){
                min = j;
            }
            if(min != i)
                swap(Api,A[min]);
        }
    }
}