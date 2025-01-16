#include <stdio.h>

int main(void) {
    // Hello,World\n を配置するための文字列
    char str[] = "Hello,World\n";
    
    // floatポインタとして解釈
    float *f = (float*)str;
    
    // 値を出力
    printf("環境: x86_64 Linux GCC 9.4.0\n");
    printf("定数値:\n");
    for(int i = 0; i < 4; i++) {
        printf("f[%d] = %a\n", i, f[i]);
    }
    
    // hとHの差分を計算
    printf("\n'H'から'h'への変換に必要な値: %a\n", 
           (float)('h' - 'H'));
    
    return 0;
}







