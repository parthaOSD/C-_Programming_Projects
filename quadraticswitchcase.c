#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2;

    // Input coefficients
    printf("Enter coefficients (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Switch-case based on discriminant
    switch (discriminant > 0) {
        case 1: // Two real and distinct roots
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and distinct:\n");
            printf("Root 1 = %.2f\n", root1);
            printf("Root 2 = %.2f\n", root2);
            break;

        case 0:
            switch (discriminant < 0) {
                case 1: // Complex roots
                    printf("Roots are complex:\n");
                    printf("Root 1 = %.2f + %.2fi\n", -b / (2 * a), sqrt(-discriminant) / (2 * a));
                    printf("Root 2 = %.2f - %.2fi\n", -b / (2 * a), sqrt(-discriminant) / (2 * a));
                    break;

                case 0: // Real and equal roots
                    root1 = root2 = -b / (2 * a);
                    printf("Roots are real and equal:\n");
                    printf("Root 1 = Root 2 = %.2f\n", root1);
                    break;
            }
            break;
    }

    return 0;
}