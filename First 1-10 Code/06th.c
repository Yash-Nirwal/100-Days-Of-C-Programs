#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;   // first two terms are 0 and 1
        } else {
            next = first + second;  // add previous two terms
            first = second;         // move forward
            second = next;
        }
        printf("%d ", next);  // print each term
    }

    return 0;
}
