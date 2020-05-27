#include <stdio.h>
#include <cmath>

void update(int *a,int *b)
{
    int sum = *a + *b;
    int diff = abs (*a - *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &sum, &diff);
    update(pa, pb);
    printf("%d\n%d", sum, diff);

    return 0;
}
