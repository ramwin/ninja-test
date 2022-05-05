#include <stdio.h>

extern int add(int x, int y);
extern int multi(int x, int y);

int main() {
    printf("4*5+3=%d\n", add(multi(4, 5), 3));
};
