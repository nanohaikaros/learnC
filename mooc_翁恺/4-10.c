#include <stdio.h>

int main()
{
	int n;
	int i;
	double ret=0.0;

	scanf("%d", &n);
	for ( i=1; i<=n; i++ ) {
		ret += 1.0/i;
	}
	printf("%f\n", ret);

	return 0;
}
