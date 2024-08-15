#include <stdio.h>
#include <stdint.h>

/* AZKey */
/* by KryptoMagick (Karl Zander) */

void azrandom(int num_letters) {
    FILE *randfile;
    randfile = fopen("/dev/urandom", "rb");
    uint8_t b[1];
    int n = 0;
    while (n != num_letters) {
        fread(b, 1, 1, randfile);
        if ((b[0] >= 65) && (b[0] <= 90)) {
            printf("%c", b[0]);
            n += 1;
        }
    }
    fclose(randfile);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        exit(0);
    }
    int length = atoi(argv[1]);
    azrandom(length);
    return 0;
}
