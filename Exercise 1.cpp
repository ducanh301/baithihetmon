#include <stdio.h>
int main(void){
	printf("Nhap so phan tu:");
	int n;
	scanf("%d", &n);
	printf("Nhap phan tu mang:");
	int even = 0;
	for (int i=0; i < n; i++) {
		int ele;
		scanf("%d", &ele);
		if (ele > 0 && ele % 2 == 0) {
			even = ele;
		}
	}
	if (even==0) {
		printf("No EVEN number");
	} else {
		printf("Last Even: %d", even);
	}
}
