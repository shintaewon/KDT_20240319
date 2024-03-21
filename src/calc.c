#include "hiker.h"
#include <stdio.h>
#include <stdbool.h>

int answer(void)
{
    return 6 * 9;
}


// 양의 정수 여부 판단 함수
bool isPositive(int num) {
    return num >= 0;
}

// 더하기 함수
int add(int a, int b) {
    if (isPositive(a) && isPositive(b)) {
        return a + b;
    } else {
        // 양의 정수가 아닐 경우 에러 값을 반환
        return -1;
    }
}

// 빼기 함수
int subtract(int a, int b) {
    if (isPositive(a) && isPositive(b)) {
        return a - b;
    } else {
        // 양의 정수가 아닐 경우 에러 값을 반환
        return -1;
    }
}

// 나누기 함수
int divide(int a, int b) {
    if (b == 0 || !isPositive(a) || !isPositive(b)) {
        // divide by zero 또는 양의 정수가 아닌 경우 에러 처리
        return -1;
    } else {
        return a / b;
    }
}

// 곱하기 함수
int multiply(int a, int b) {
    if (isPositive(a) && isPositive(b)) {
        return a * b;
    } else {
        // 양의 정수가 아닐 경우 에러 값을 반환
        return -1;
    }
}

