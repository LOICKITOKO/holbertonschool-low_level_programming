#include <stdio.h>
#include <stlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int n = rand() % RAND_MAX;

	printf("the number %d ", n);
	if (n > 0) {
		printf("is positive\n");
	} else if (n== 0) {
		printf("is zero\n");
	} else {
		printf("is negative\n");
	}
	
	return 0;
}

