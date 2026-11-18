#include <stdlib.h>
#include "account.h"

/**
 * @brief Internal representation of a bank account.
 */
struct Account {
    int id;
    double balance;
};

Account *create_account(int id) {
    // Allocate memory for the new account
    Account *new_account = (Account *)malloc(sizeof(Account));
    if (new_account == NULL) { 
        return NULL; 
    }

    new_account->id = id;
    new_account->balance = 0.0;

    return new_account;
}

int deposit(Account *account, double amount) {
    // Validate deposit amount
    if (amount <= 0) { 
        return 0; 
    }

    account->balance += amount;
    return 1;
}

int withdraw(Account *account, double amount) {
    // Validate withdrawal amount and check for sufficient funds
    if (amount <= 0 || account->balance < amount) { 
        return 0; 
    }

    account->balance -= amount;
    return 1;
}

double get_balance(const Account *account) {
    return account->balance;
}

void destroy_account(Account *account) {
    // Free the allocated memory for the account structure
    free(account);
}
