#include <stdio.h>

void p1() {
    printf("Start von %s (Zeile: %d)\n", __PRETTY_FUNCTION__, __LINE__);
    printf(" Ende von %s (Zeile: %d)\n", __PRETTY_FUNCTION__, __LINE__);
}

void p2() {
    printf("Start von %s (Zeile: %d)\n", __PRETTY_FUNCTION__, __LINE__);
    printf(" Ende von %s (Zeile: %d)\n", __PRETTY_FUNCTION__, __LINE__);
}

void p3() {
    printf("Start von %s (Zeile: %d)\n", __PRETTY_FUNCTION__, __LINE__);
    p2();
    p1();
    printf(" Ende von %s (Zeile: %d)\n", __PRETTY_FUNCTION__, __LINE__);
}

void p4(double d) {
    printf("Start von %s (Zeile: %d)\n", __PRETTY_FUNCTION__, __LINE__);
    printf(" Ende von %s (Zeile: %d)\n", __PRETTY_FUNCTION__, __LINE__);
}

void p5() {
    printf("Start von %s (Zeile: %d)\n", __PRETTY_FUNCTION__, __LINE__);
    float f = 1.0f;
    long l = 2^10;
    printf(" Ende von %s (Zeile: %d)\n", __PRETTY_FUNCTION__, __LINE__);
}

void p6() {
    printf("Start von %s (Zeile: %d)\n", __PRETTY_FUNCTION__, __LINE__);
    long l[10];
    printf(" Ende von %s (Zeile: %d)\n", __PRETTY_FUNCTION__, __LINE__);
}

int main() {
    printf("Start von %s (Zeile: %d)\n", __PRETTY_FUNCTION__, __LINE__);
    p1();
    p2();
    p3();
    p4(42.23);
    p5();
    p6();
    printf(" Ende von %s (Zeile: %d)\n", __PRETTY_FUNCTION__, __LINE__);
}
