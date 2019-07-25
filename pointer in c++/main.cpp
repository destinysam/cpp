#include <stdio.h>
void update(int *a,int *b);
void update(int *a,int *b) {
    // Complete this function
    int s = *a + *b;
    int d = *a - *b;
    *a = s;
    *b = d > 0?d:-1*d;

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

