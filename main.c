#include <stdio.h>

double relativeVelocity(double v1, double v2, int direction) {
    if (direction == 1) {
        return v1 - v2;
    } else {
        return v1 + v2;
    }
}

int main() {
    double v1, v2, relVel;
    int direction;
    printf("Enter the velocity of the first object (m/s): ");
    scanf("%lf", &v1);
    printf("Enter the velocity of the second object (m/s): ");
    scanf("%lf", &v2);

    printf("Enter 1 if the objects are moving in the same direction, 2 if in opposite directions: ");
    scanf("%d", &direction);

    relVel = relativeVelocity(v1, v2, direction);

    printf("The relative velocity is: %.2lf m/s\n", relVel);

    return 0;
}