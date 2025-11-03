#include <stdio.h>

int main() {
    int n, i, j, space;
  n=4;
    for(i = 0; i <= n; i++) {
      
        for(j = 0; j <=i; j++) {
            printf("%d", j % 2);
        }
        for(space = 1; space<=2*(n - i);space++) {
            printf(" ");
        }
        for(j = 0; j <= i; j++) {
            printf("%d", j % 2);
        }

        printf("\n");
    }

    return 0;
}
