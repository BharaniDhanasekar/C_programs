#include <stdio.h>

int main() {
    
    int width = 1189;
    int height = 841;

    printf("Paper Size A0: %d mm x %d mm\n", width, height);

    
    for (int i = 1; i <= 8; i++) {
        
        if (width > height) {
            width = height / 2;
        } else {
            height = width / 2;
        }

        
        printf("Paper Size A%d: %d mm x %d mm\n", i, width, height);
    }

    return 0;
}