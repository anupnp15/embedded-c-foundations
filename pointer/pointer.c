1. Integer Pointer Program

#include <stdio.h>

int main() {
    int num = 42;          // Declare an integer variable
    int *ptr = &num;       // Store its address in an integer pointer

    // Print the value by dereferencing the pointer
    printf("Integer value using pointer = %d\n", *ptr);

    return 0;
}

2. Float Pointer Program

#include <stdio.h>

int main() {
    float num = 3.14f;     // Declare a float variable
    float *ptr = &num;     // Store its address in a float pointer

    // Print the value using %f format specifier
    printf("Float value using pointer = %.2f\n", *ptr);

    return 0;
}

3. Character Pointer Program

#include <stdio.h>

int main() {
    char letter = 'A';     // Declare a character variable
    char *ptr = &letter;   // Store its address in a character pointer

    // Print the character using %c format specifier
    printf("Character value using pointer = %c\n", *ptr);

    return 0;
}

4. Double Pointer Program

#include <stdio.h>

int main() {
    double num = 99.9999;  // Declare a double variable
    double *ptr = &num;    // Store its address in a double pointer

    // Print the value using %lf format specifier
    printf("Double value using pointer = %lf\n", *ptr);

    return 0;
}

Part 1: Reading and Displaying Values & Addresses

1. Integer Value and Address

#include <stdio.h>

int main() {
    int num;
    int *ptr = &num;

    printf("Enter an integer: ");
    scanf("%d", ptr); // Reading directly into the address stored in ptr

    printf("Value = %d\n", *ptr);
    printf("Memory Address = %p\n", ptr);

    return 0;
}

2. Float Value and Address

#include <stdio.h>

int main() {
    float num;
    float *ptr = &num;

    printf("Enter a float: ");
    scanf("%f", ptr);

    printf("Value = %.2f\n", *ptr);
    printf("Memory Address = %p\n", ptr);

    return 0;
}

3. Character Value and Address

#include <stdio.h>

int main() {
    char ch;
    char *ptr = &ch;

    printf("Enter a character: ");
    scanf(" %c", ptr); // Note the space before %c to ignore leading whitespaces

    printf("Value = %c\n", *ptr);
    printf("Memory Address = %p\n", (void*)ptr);

    return 0;
}

4. Double Value and Address

#include <stdio.h>

int main() {
    double num;
    double *ptr = &num;

    printf("Enter a double value: ");
    scanf("%lf", ptr);

    printf("Value = %lf\n", *ptr);
    printf("Memory Address = %p\n", (void*)ptr);

    return 0;
}

2: Changing Values Using Pointer

5. Change Integer (10 to 50)

#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;

    printf("Original Value = %d\n", num);

    *ptr = 50; // Changing the value at the address

    printf("Updated Value = %d\n", num);
    return 0;
}


6. Change Float (10.5 to 25.5)

#include <stdio.h>

int main() {
    float num = 10.5f;
    float *ptr = &num;

    printf("Original Value = %.1f\n", num);

    *ptr = 25.5f;

    printf("Updated Value = %.1f\n", num);
    return 0;
}

7. Change Character ('A' to 'Z')

#include <stdio.h>

int main() {
    char ch = 'A';
    char *ptr = &ch;

    printf("Original Value = %c\n", ch);

    *ptr = 'Z';

    printf("Updated Value = %c\n", ch);
    return 0;
}
Use code with caution.8. Change Double (15.5 to 30.5)c#include <stdio.h>

int main() {
    double num = 15.5;
    double *ptr = &num;

    printf("Original Value = %.1f\n", num);

    *ptr = 30.5;

    printf("Updated Value = %.1f\n", num);
    return 0;
}

3: Operations Using Pointers

9. Swap Two Integers

#include <stdio.h>

int main() {
    int a, b, temp;
    int *p1 = &a, *p2 = &b;

    printf("Enter two integers: ");
    scanf("%d %d", p1, p2);

    printf("Before Swap: a = %d, b = %d\n", *p1, *p2);

    // Swapping logic using pointers
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("After Swap: a = %d, b = %d\n", *p1, *p2);
    return 0;
}

10. Sum of Two Float Values

#include <stdio.h>

int main() {
    float num1, num2, sum;
    float *p1 = &num1, *p2 = &num2, *pSum = &sum;

    printf("Enter two float numbers: ");
    scanf("%f %f", p1, p2);

    *pSum = *p1 + *p2; // Adding values using pointers

    printf("Sum = %.2f\n", *pSum);
    return 0;
}

11. Check Even or Odd

#include <stdio.h>

int main() {
    int num;
    int *ptr = &num;

    printf("Enter an integer: ");
    scanf("%d", ptr);

    // Checking even/odd by dereferencing the pointer
    if (*ptr % 2 == 0) {
        printf("%d is Even.\n", *ptr);
    } else {
        printf("%d is Odd.\n", *ptr);
    }

    return 0;
}