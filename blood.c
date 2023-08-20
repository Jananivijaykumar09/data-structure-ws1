#include <stdio.h>

int main() {
    int age, weight;
    printf("Enter the age: ");
    scanf("%d", &age);

    printf("Enter the weight: ");
    scanf("%d", &weight);
    if (age > 18 && age <= 55 && weight > 45) {
        printf("Blood donor is eligible for donating blood.\n");
    } else {
        printf("Blood donor is not eligible for donating blood.\n");
    }

    return 0;
}
