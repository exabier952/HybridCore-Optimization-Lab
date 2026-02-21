#include <stdio.h>
#include <time.h>

int main(void)

{
clock_t start = clock();
for (int i = 0; i <= 1000000; i++);
clock_t end = clock ();
double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
printf("HybridCore Engine - Task executed in: %f seconds\n", time_spent);
return 0;
}
