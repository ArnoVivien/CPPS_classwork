#include <stdio.h>

union AccountDetails {
    float interestRate;
    float overdraftLimit;
};

struct BankAccount {
    char accountHolderName[100];
    int accountNumber;
    float balance;
    union AccountDetails details;
    char accountType;
};

void createAccount(struct BankAccount *account) {
    printf("Enter Account Holder's Name: ");
    fgets(account->accountHolderName, 100, stdin);
    account->accountHolderName[strcspn(account->accountHolderName, "\n")] = 0;

    printf("Enter Account Number: ");
    scanf("%d", &account->accountNumber);

    printf("Enter Initial Balance: ");
    scanf("%f", &account->balance);

    printf("Enter Account Type (s for Savings, c for Current): ");
    scanf(" %c", &account->accountType);

    if (account->accountType == 's') {
        printf("Enter Interest Rate (in percentage): ");
        scanf("%f", &account->details.interestRate);
    } else if (account->accountType == 'c') {
        printf("Enter Overdraft Limit: ");
        scanf("%f", &account->details.overdraftLimit);
    } else {
        printf("Invalid account type!\n");
    }
}

void displayAccountInfo(struct BankAccount account) {
    printf("\n--- Account Information ---\n");
    printf("Account Holder: %s\n", account.accountHolderName);
    printf("Account Number: %d\n", account.accountNumber);
    printf("Balance: %.2f\n", account.balance);

    if (account.accountType == 's') {
        printf("Account Type: Savings\n");
        printf("Interest Rate: %.2f%%\n", account.details.interestRate);
    } else if (account.accountType == 'c') {
        printf("Account Type: Current\n");
        printf("Overdraft Limit: %.2f\n", account.details.overdraftLimit);
    }
}

main() {
    struct BankAccount account;
    int another = 1;

    while (another) {
        getchar();
        createAccount(&account);
        displayAccountInfo(account);

        printf("Do you want to enter another account? (1 for Yes, 0 for No): ");
        scanf("%d", &another);
    }
}
