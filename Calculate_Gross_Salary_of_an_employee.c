#include <stdio.h>
int main()
{
    float Salary,HRA,DA;
    scanf("%f%f%f",&Salary,&HRA,&DA);
    float PF = (0.12*Salary);
    float GrossSalary = Salary+HRA+DA+PF;
    printf("%.2f
%.2f",PF,GrossSalary);
}