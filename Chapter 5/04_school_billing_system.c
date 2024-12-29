#include <stdio.h>
// Function prototypes
void calculateTuitionFee();
void applyDiscount();
void generateBill();
void exitProgram();

int main()
{
    while (1)
    {

        int n;
        printf("\n--- School Billing System ---\n");
        printf("1. Calculate Tuition Fee\n");
        printf("2. Apply Discount\n");
        printf("3. Generate Bill\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            calculateTuitionFee();
            break;
        case 2:
            applyDiscount();
            break;
        case 3:
            generateBill();
            break;
        case 4:
            exitProgram();
            break;

        default:
            printf("Invalid choice! Please try again.\n");
            break;
        }
    }
    return 0;
}
// function definition
// calculate tution fee
void calculateTuitionFee()
{
    float baseFee, totalFee, otherCharges;
    printf("Enter the base fee : ");
    scanf("%f", &baseFee);
    printf("Enter the other charges: ");
    scanf("%f", &otherCharges);
    totalFee = baseFee + otherCharges;
    printf("Total tution fees = %.2f", totalFee);
}
// apply discount
void applyDiscount()
{
    float fee, discountPercent, discountAmount, finalFee;
    printf("Enter the fee : ");
    scanf("%f", &fee);
    printf("Enter the discountpercent : ");
    scanf("%f", &discountPercent);
    discountAmount = (fee * discountPercent) / 100;
    finalFee = fee - discountAmount;
    printf("Discount Amount: %.2f\n", discountAmount);
    printf("Final Fee after Discount: %.2f\n", finalFee);
}
// generate bill
void generateBill()
{
    char studentName[50];
    int grade;
    float finalFee;
    printf("\nEnter the student name : ");
    scanf("%s", &studentName);
    printf("Enter grade : ");
    scanf("%d", &grade);
    printf("Enter the final fee : ");
    scanf("%f", &finalFee);
    printf("%s\ngrade = %d\nFess = %.2f\n", studentName, grade, finalFee);
}
// exit program
void exitProgram()
{
    printf("\nExiting the system. Thank you!\n");
    exit(0); // Exit the program
}