#include <stdio.h>
int summation(int num) {
    int sum = 0;
    for (int i = 1; i <= num; i++) {
        sum = sum + i;
    }
    return sum;

}
int main() {
    printf("sum = %d", summation(8));
    return 0;
}
