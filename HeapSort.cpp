

void BuildMaxHeap(int A[],int len){
	for(int i = len/2;i>0;i--){
		AdjutDown(A,i,len)
	}
}
 

void AdjustDown(int A[],int k,int len){
	A[0] = A[k];
	for(int i = k*2; i <= len; i=i*2){
		if(i<len&&A[i+1]>A[i]){
			i++;
		}
		if(A[0]>A[i]){
			break;
		}else{
			A[k] = A[i];
			k = i;
		}
	}
	A[k] = A[0];
}

void AdjustUp(int A[],int k){
	A[0] = A[k];
	int i = k/2;
	while( i>0 && A[i]<A[0]){
		A[k] = A[i];
		k = i;
		i = k/2;
	}
	A[k] = A[0];
}

void HeapSort(int A[],int len){
	BuildMaxHeap(A,len);
	for(i=len; i > 1; i--){
		Swap(A[i],A[1]);
		AdjustDown(A,1,i-1);k+e
	}
}
