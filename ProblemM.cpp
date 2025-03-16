#include<stdio.h>

void swap (int *a, int *b) {
	int temp = *a; 
	*a = *b; 
	*b = temp;
}

void mergeSort(int arr[], int left, int right) {
	if (right == left) return; 
	int middle = (right - left) / 2 + left; 
	
	mergeSort(arr, left, middle); 
	mergeSort(arr, middle+1, right); 
	
	int temp[right-left]; 
	
	int leftIndex = left; 
	int leftLimit = middle; 
	int rightIndex = middle+1; 
	int rightLimit = right; 
	
	int tempIndex = 0; 
	while (leftIndex <= leftLimit && rightIndex <= rightLimit) {
		if (arr[leftIndex] < arr[rightIndex]) {
			temp[tempIndex] = arr[leftIndex]; 
			tempIndex++; 
			leftIndex++; 
		}
		else {
			temp[tempIndex] = arr[rightIndex]; 
			rightIndex++; 
			tempIndex++; 
		}
	}
	
	while (leftIndex <= leftLimit) {
		temp[tempIndex] = arr[leftIndex]; 
		leftIndex++; 
		tempIndex++; 
	}
	
	while (rightIndex <= rightLimit) {
		temp[tempIndex] = arr[rightIndex]; 
		rightIndex++; 
		tempIndex++;
	}
	
	tempIndex = 0; 
	
	for (int i = left; i <= right; i++) {
		arr[i] = temp[tempIndex]; 
		tempIndex++; 
	}
}


int main() {
	int N; 
	
	scanf ("%d", &N); 
	int A[N*3+1]; 
	
	for (int i = 0; i < N*3; i++) {
		scanf ("%d", &A[i]); 
	}
	
	mergeSort(A, 0, N*3-1); 
	
	int team[3];
	int k = 0;
	for (int i = 0; i < N*3; i += N) {
		team[k] = A[i];
		k++; 
	}
	
	printf ("%d\n", team[1]); 
	
	return 0; 
}
