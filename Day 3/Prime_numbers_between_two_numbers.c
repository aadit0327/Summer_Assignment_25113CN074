#include <stdio.h>
int main() {
    int n1, n2, i, j, count;
    printf("Enter two positive integers :\n ");
    printf("Enter 1st number : ");
    scanf("%d", &n1);
    printf("Enter 2nd number : ");
    scanf("%d", &n2);

    printf("Prime numbers between %d and %d are: ", n1, n2);

    for (i = n1; i <= n2; i++) {
        count = 0; 

        if (i <= 1) {
            count = 1;
        }

        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }

        if (count == 2) {
            printf("%d ", i);
        }
    }
    return 0;
}
