#include <stdio.h>
#include <stdbool.h>

int main()
{
    char a = 'A';            // un singur caracter %c
    unsigned char b[] = "Tiberiu";    // un sir de caractere %s

    float c = 3.141592; // 4 bytes (32 biti de precizie) 6 - 7 cifre semnificative %f
    double d = 3.14159265358979323846; // 8 bytes (64 biti de precizie) 15 - 16 cifre semnificative %lf
    bool e = false; // 1 byte (8 biti - true sau false) %d

    char f  = 100; // 1 byte (-128 - 127) %d sau %c
    unsigned char g = 200; // 1 byte (0 - 255) %d sau %c

    short int h = 32767; // 2 bytes (-32768 - 32767) %d
    unsigned short int i = 65535; // 2 bytes (0 - 65535) %d

    int j = 2147483647; // 4 bytes (-2_147_483_648 - 2_147_483_647) %d
    unsigned int k = 4294967295; // 4 bytes (0 - 4_294_967_295) %u

    long long int l = 9223372036854775807; // 8 bytes (-9_223_372_036_854_775_808 - 9_223_372_036_854_775_807) %lld
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 - 18_446_744_073_709_551_615) %llu



    // printf("%c\n", a);
    // printf("%s\n", b);
    // printf("%0.7f\n", c);
    // printf("%0.15lf\n", d);
    // printf("%d\n", e);
    // printf("%d\n", f);
    // printf("%d\n", g);
    // printf("%d\n", h);
    // printf("%d\n", i);
    printf("%d\n", j);
    printf("%u\n", k);


    return 0;

}