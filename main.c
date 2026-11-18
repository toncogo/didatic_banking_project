#include <stdio.h>
#include "account.h"

/**
 * @file main.c
 * @brief Main entry point for testing the bank account mini-project.
 * @date 2026-11-17
 * @author Alyton W. M. Cogo
 */
int main() {
    int account_id, withdraw_status;
    double first_deposit, first_withdraw, second_deposit, second_withdraw;

    // Read inputs: account ID and four transaction amounts
    if (scanf("%d", &account_id) != 1) { return -1; }
    if (scanf("%lf", &first_deposit) != 1) { return -1; }
    if (scanf("%lf", &first_withdraw) != 1) { return -1; }
    if (scanf("%lf", &second_deposit) != 1) { return -1; }
    if (scanf("%lf", &second_withdraw) != 1) { return -1; }
    
    // Initialize the account
    Account *account = create_account(account_id); 

    if (account != NULL) {
        printf("Account %d created\n", account_id);
    }

    printf("Balance: %.2f\n", get_balance(account));

    // Perform first deposit
    deposit(account, first_deposit);
    printf("Deposited %.2f\n", first_deposit);
    printf("Balance: %.2f\n", get_balance(account));

    // Perform first withdrawal
    withdraw(account, first_withdraw);
    printf("Withdrew %.2f\n", first_withdraw);
    printf("Balance: %.2f\n", get_balance(account));

    // Perform second deposit
    deposit(account, second_deposit);
    printf("Deposited %.2f\n", second_deposit);
    printf("Balance: %.2f\n", get_balance(account));

    // Perform second withdrawal and handle potential failure
    withdraw_status = withdraw(account, second_withdraw);
    if (withdraw_status == 0) {
        printf("Withdrawal failed: insufficient funds\n");
    }
    printf("Balance: %.2f\n", get_balance(account));

    // Clean up memory and close account
    destroy_account(account);
    account = NULL;

    if (account == NULL) {
        printf("Account %d closed\n", account_id);
    }

    return 0;
}
