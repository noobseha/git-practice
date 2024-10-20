#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void strcopy(char* str1, char* str2);

int main()
{
    char str1[100] = { 0 };  // 충분한 크기의 배열로 선언
    char str2[100] = { 0 };  // 충분한 크기의 배열로 선언

    printf("문자열을 입력하세요: ");
    scanf("%99s", str1);  // 입력 크기를 제한하여 버퍼 오버플로우 방지

    strcopy(str1, str2);

    printf("복사된 문자열: %s\n", str2);

    return 0;
}

void strcopy(char* str1, char* str2)
{
    int i = 0;
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
}
