#include <stdio.h>

int main () {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if (a>b) {
        printf("Pythagorean is invalid! 'a' must less than 'b'");
    } else if (a>c || b>c) {
        printf("Pythagorean is invalid! 'a' and 'b' must less than 'c'");
    } else if (c*c != a*a + b*b) {
        printf("Pythagorean is invalid!");
    } else {
        printf("Pythagorean is valid!");
    }
}
