#include "hiker.h"
#include <stdio.h>

int answer(void) {
    return 6 * 9;
}

// 상한 조건 확인
bool checkHigh(int high) {
    if (high >= 80 && high <= 110) {
        return true;
    } else {
        return false;
    }
}

// 하한 조건 확인
bool checkLow(int low) {
    if (low >= 50 && low <= 80) {
        return true;
    } else {
        return false;
    }
}

// 차량 속도에 따른 색 확인
const char* displayStatus(int high, int low, int speed) {
    const char* result_str = NULL; // 변수 초기화

    if (speed > high) {
        result_str = "red";
    } else if (high * 0.9 < speed && high >= speed) {
        result_str = "yellow";
    } else if (speed >= low && high * 0.9 >= speed) {
        result_str = "green";
    } else if (speed < low) {
        result_str = "gray";
    } else {
        result_str = "err_msg";
    }

    return result_str;
}
