#include <stdio.h>
int main() {
    float u;
    scanf("%f", &u);
    float cost = 0.0;
    float costperunit = 0.0;
    if (u <= 199) {
        costperunit = 1.20;
    }
    else if (u >= 200 && u < 400) {
        costperunit =  1.40;
    }
    else if (u >= 400 && u < 600) {
        costperunit =  1.60;
    }
    else if (u >= 600 && u < 800) {
        costperunit =  1.80;
    }
    else {
        costperunit = 2.00;
    }
    cost = u*costperunit;
    // Calculate surcharge if the bill exceeds Rs. 400
    float surcharge = (cost > 400.0) ? 0.15 * cost :0.0;
    float totalAmount = cost + surcharge;
    printf("Units Consumed: %.f
", u);
    printf("Cost per Unit: %.2f
", costperunit);
    printf("Bill: %.2f
", cost);
    printf("Surcharge: %.2f
", surcharge);
    printf("Total Amount: %.2f
", totalAmount);
}