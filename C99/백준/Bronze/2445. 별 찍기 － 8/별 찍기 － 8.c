#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i=1;i<=n;i++,puts("")) {
		for (int j=i;j>0;j--) printf("*");
		for (int k=2*n-2*i;k>0;k--) printf(" ");
		for (int l=i;l>0;l--) printf("*");
	}
	for (int i=n-1;i>0;i--,puts("")) {
		for (int j=i;j>0;j--) printf("*");
		for (int k=2*n-2*i;k>0;k--) printf(" ");
		for (int l=i;l>0;l--) printf("*");
	}
	return 0;
}