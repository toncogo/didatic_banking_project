#ifndef ACCOUNT_H
#define ACCOUNT_H

/**
 * @file account.h
 * @brief Bank account management definitions.
 * @date 2026-11-17
 * @author Alyton W. M. Cogo
 */

/**
 * @brief Opaque structure representing a bank account.
 */
typedef struct Account Account;

/**
 * @brief Creates a new bank account.
 * @param id The unique identifier for the account.
 * @return A pointer to the newly created Account, or NULL if memory allocation fails.
 */
Account *create_account(int id);

/**
 * @brief Deposits a specified amount into the account.
 * @param account Pointer to the account.
 * @param amount The amount to deposit (must be greater than 0).
 * @return 1 on success, 0 on failure.
 */
int deposit(Account *account, double amount);

/**
 * @brief Withdraws a specified amount from the account.
 * @param account Pointer to the account.
 * @param amount The amount to withdraw (must be greater than 0 and less than or equal to balance).
 * @return 1 on success, 0 on failure (insufficient funds or invalid amount).
 */
int withdraw(Account *account, double amount);

/**
 * @brief Gets the current balance of the account.
 * @param account Pointer to the account.
 * @return The current balance.
 */
double get_balance(const Account *account);

/**
 * @brief Destroys the account and frees allocated memory.
 * @param account Pointer to the account to be destroyed.
 */
void destroy_account(Account *account);

#endif
