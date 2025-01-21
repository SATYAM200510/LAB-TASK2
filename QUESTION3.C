#include <stdio.h>
struct Complex {
    float real;
    float imaginary;
};

struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}


struct Complex multiplyComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = (c1.real * c2.real) - (c1.imaginary * c2.imaginary);
    result.imaginary = (c1.real * c2.imaginary) + (c1.imaginary * c2.real);
    return result;
}

int main() {
    struct Complex c1, c2, sum, product;

    
    printf("Enter the real and imaginary parts of the first complex number:\n");
    scanf("%f %f", &c1.real, &c1.imaginary);

    
    printf("Enter the real and imaginary parts of the second complex number:\n");
    scanf("%f %f", &c2.real, &c2.imaginary);


    sum = addComplex(c1, c2);
    product = multiplyComplex(c1, c2);

    
    printf("\nAddition of the two complex numbers: %.2f + %.2fi\n", sum.real, sum.imaginary);
    printf("Multiplication of the two complex numbers: %.2f + %.2fi\n", product.real, product.imaginary);

    return 0;
}
