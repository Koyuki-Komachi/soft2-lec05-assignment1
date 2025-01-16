#include <stdio.h>

int main(void) {
    float f[4];

    // 以下に適切な値を設定する
    // 環境: x86_64 Linux GCC 9.4.0
    f[0] = 0x1.6c6c65480p+24;  // "Hell"
    f[1] = 0x1.726f576fp+24;   // "o,Wo"
    f[2] = 0x1.646c726fp+24;   // "rld\n"
    f[3] = 0x0p+0;             // null terminator

    // "Hello,World\n" と出力してほしい
    printf("%s", (char*)f);

    // f[0] をいじる
    f[0] += 32.0;  // 'H' から 'h' への変換

    // "hello,World\n" と出力してほしい
    printf("%s", (char*)f);

    return 0;
}







