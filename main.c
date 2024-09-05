#include <stdio.h>

void class4q3(void) {
    int count = 0;
    for (int i = 1; i < 40; i++) {
        for (int j = 1; j < 40; j++) {
            for (int m = 1; m < 40; m++) {
                for (int n = 1; n < 40; n++) {
                    if ((i + j + m + n) == 40) {
                        if ((i * 10 + j * 5 + m * 2 + n) == 100)
                            count++;
                    }
                }
            }
        }
    }
    printf("%d", count);
}

int main(void) {
    class4q3();
    return 0;
}
