#include <stdio.h>
float average(int s[], int n) {
	int sum = 0;
	for (int i=0; i < n; i++) {
		sum += s[i];
	}
	return (float) sum / n;
}
int main(void){
	printf("Enter length of array: ");
	int n;
	scanf("%d", &n);
	int arr[n];
	printf("Enter array: ");
	for (int i=0; i < n; i++) {
		int ele;
		scanf("%d", &ele);
		arr[i] = ele;
	}
	float avg = average(arr, n);
	printf("Average: %f", avg);
}

