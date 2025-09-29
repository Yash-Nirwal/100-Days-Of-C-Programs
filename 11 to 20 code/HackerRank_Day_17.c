//For Loop in C
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d\n%d", &a, &b);

    char *words[] = {"zero", "one", "two", "three", "four", 
                     "five", "six", "seven", "eight", "nine"};
    
    for (int n = a; n <= b; n++) {
        if (n >= 1 && n <= 9) {
            printf("%s\n", words[n]);
        } else if (n > 9) {
            if (n % 2 == 0) {
                printf("even\n");
            } else {
                printf("odd\n");
            }
        }
    }
    return 0;
}
