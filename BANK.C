#include <stdio.h>
#include <string.h>

#define MAX_ACCOUNTS 100

// Structure for each bank account
struct Account {
    char name[50];
    int accountNumber;
    char password[20];
    float balance;
};

struct Account accounts[MAX_ACCOUNTS];
int totalAccounts = 0;


// Function prototypes
void createAccount();
int login();
void deposit(int index);
void withdraw(int index);
void checkBalance(int index);
void subprivateBankMenu();


int main() {
    subprivateBankMenu();
    return 0;
}



// MAIN MENU
void subprivateBankMenu() {
    int choice;

    while (1) {
        printf("\n\n===== SUBPRIVATE BANK SYSTEM =====\n");
        printf("1. Create Account\n");
        printf("2. Login to Account\n");
        printf("3. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2: {
                int index = login();
                if (index != -1) {
                    int option;
                    while (1) {
                        printf("\n\n--- Welcome %s ---\n", accounts[index].name);
                        printf("1. Deposit Money\n");
                        printf("2. Withdraw Money\n");
                        printf("3. Check Balance\n");
                        printf("4. Logout\n");
                        printf("Choose an option: ");
                        scanf("%d", &option);

                        if (option == 1) deposit(index);
                        else if (option == 2) withdraw(index);
                        else if (option == 3) checkBalance(index);
                        else if (option == 4) break;
                        else printf("Invalid option.\n");
                    }
                }
                break;
            }
            case 3:
                printf("Thank you for using SubPrivate Bank!\n");
                return;
            default:
                printf("Invalid choice.\n");
        }
    }
}



// CREATE ACCOUNT
void createAccount() {
    if (totalAccounts == MAX_ACCOUNTS) {
        printf("Maximum account limit reached.\n");
        return;
    }

    printf("\n=== Create New Account ===\n");

    printf("Enter your name: ");
    scanf("%s", accounts[totalAccounts].name);

    printf("Create a password: ");
    scanf("%s", accounts[totalAccounts].password);

    accounts[totalAccounts].accountNumber = 1000 + totalAccounts;  // simple unique accounts
    accounts[totalAccounts].balance = 0.0;

    printf("Account created successfully!\n");
    printf("Your Account Number is: %d\n", accounts[totalAccounts].accountNumber);

    totalAccounts++;
}



// LOGIN FUNCTION
int login() {
    int accNum;
    char pass[20];

    printf("\n=== Login ===\n");
    printf("Enter Account Number: ");
    scanf("%d", &accNum);

    printf("Enter Password: ");
    scanf("%s", pass);

    for (int i = 0; i < totalAccounts; i++) {
        if (accounts[i].accountNumber == accNum &&
            strcmp(accounts[i].password, pass) == 0) {
            printf("Login Successful! Welcome %s.\n", accounts[i].name);
            return i; // return index of logged account
        }
    }

    printf("Invalid account number or password.\n");
    return -1;
}



// DEPOSIT
void deposit(int index) {
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount.\n");
        return;
    }

    accounts[index].balance += amount;
    printf("Deposit successful! New Balance: %.2f\n", accounts[index].balance);
}



// WITHDRAW
void withdraw(int index) {
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount.\n");
        return;
    }

    if (amount > accounts[index].balance) {
        printf("Not enough balance.\n");
        return;
    }

    accounts[index].balance -= amount;
    printf("Withdrawal successful! New Balance: %.2f\n", accounts[index].balance);
}



// CHECK BALANCE
void checkBalance(int index) {
    printf("\nYour current balance: %.2f\n", accounts[index].balance);
}
