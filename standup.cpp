#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main() {
    // 문제 1
    int celsius = 100;
    printf("%d\n", (9 * celsius / 5 + 32));
    printf("%d\n", (9 / 5 * celsius + 32));
    /*
    결과:
    212
    132
    결과가 다르다
    */

    // 문제 2
    int N;
    printf("자연수를 입력하세요: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    { 
        for (int j = 0; j < 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    /*
    입력: N = 3
    결과:
    *
    ***
    *****
    */

    // 문제 3
    printf("자연수를 입력하세요: ");
    scanf("%d", &N);
    for (int i = N; i >= 1; i--) {
        for (int j = 0; j < 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    /*
    입력: N = 3
    결과:
    *****
    ***
    *
    */


    // 문제 4
    int sum = 0;
    for (int i = 1; i <= 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) sum += i;
    }
    printf("%d\n", sum);
    // 결과: 234168

    // 문제 5
    int a = 1, b = 2, total = 0;
    while (b <= 1000000) {
        if (b % 2 == 0) total += b;
        int temp = a + b;
        a = b;
        b = temp;
    }
    printf("%d\n", total);
    // 결과: 1089154


    // 문제 6
    printf("자연수를 입력하세요: ");
    scanf("%d", &N);
    long long factorial = 1;
    for (int i = 1; i <= N; i++) factorial *= i;
    printf("%lld\n", factorial);
    /*
    입력: N = 5
    결과: 120
    */

    // 문제 7
    int count = 0;
    int P = 2000; 

    for (int a = 1; a < P; ++a)
    {
        for (int b = 1; b < a; ++b)
        {
            for (int c = 1; c < b; ++c)
            {
                if (a + b + c == P)
                {
                    count++;
                }
            }
        }
    }
    printf("%d\n", count);
    // 결과: 332334

    // 문제 8
    printf("자연수를 입력하세요: ");
    scanf("%d", &N);
    printf("%d =", N);

    int first = 1;
    for (int i = 2; i * i <= N; i++) {
        while (N % i == 0) {
            if (!first) printf(" *");
            printf(" %d", i);
            N /= i;
            first = 0;
        }
    }
    if (N > 1) {
        if (!first) printf(" *");
        printf(" %d", N);
    }
    printf("\n");
    /*
    입력: N = 18
    결과: 18 = 2 * 3 * 3
    */

    // 문제 9
    float f;
    printf("실수를 입력하세요:");
    scanf("%f", &f);
    int i = abs((int)(f * 100)) % 100;
    printf("i=%d\n", i);
    /*
    예: f = 12.3456
    i=34
    */
    return 0;
}
