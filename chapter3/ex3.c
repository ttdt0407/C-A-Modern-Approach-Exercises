#include <stdio.h>

int main(void)
{
    int gs1Prefix, groupIdentifier, pubilicsherCode, itemNum, checkDigit;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1Prefix, &groupIdentifier, &pubilicsherCode, &itemNum, &checkDigit);

    printf("GS1 prefix: %d\n", gs1Prefix);
    printf("Group identifier: %d\n", groupIdentifier);
    printf("Publisher code: %d\n", pubilicsherCode);
    printf("Item number: %d\n", itemNum);
    printf("Check digit: %d\n", checkDigit);

    return 0;
}