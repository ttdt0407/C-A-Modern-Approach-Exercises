/* Computes a Universal Product Code check digit */
#include <stdio.h>

int main(void) {
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;
    int first_sum, second_sum, total, check_digit;

    // Nhập 11 chữ số từ người dùng
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11);

    // Tính tổng các chữ số theo quy tắc UPC
    first_sum = d1 + d3 + d5 + d7 + d9 + d11; // Tổng các chữ số lẻ
    second_sum = d2 + d4 + d6 + d8 + d10; // Tổng các chữ số chẵn
    total = 3 * first_sum + second_sum; // Tính tổng theo công thức UPC

    // Tính chữ số kiểm tra
    check_digit = 9 - ((total - 1) % 10);

    // In kết quả
    printf("Check digit: %d\n", check_digit);
    return 0;
}