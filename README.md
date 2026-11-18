# Educational C Bank Account 🏦

A simple and didactic banking system implemented in C. This project demonstrates fundamental programming concepts such as dynamic memory allocation, data encapsulation (opaque structs), and modular design using header and source files.

## 🎯 Learning Objectives

This mini-project was created for educational purposes to showcase:
- **Structs and Pointers:** How to manage complex data structures and pass them by reference.
- **Opaque Pointers (Encapsulation in C):** Hiding the internal implementation details of the `Account` struct inside the `.c` file, exposing only its functionality through the `.h` file.
- **Dynamic Memory Allocation:** Proper use of `malloc` and `free` to manage memory life cycles and prevent leaks.
- **Input Validation:** Ensuring safe operations (e.g., preventing negative deposits or overdrafts).

## 📁 Project Structure

- `account.h`: Header file containing the API and Doxygen-style documentation.
- `account.c`: Implementation file containing the hidden struct and the logic for the banking operations.
- `main.c`: The entry point that reads user input and tests the module's lifecycle (creation, transactions, and destruction).

## 🚀 How to Run

### Prerequisites
You need a C compiler installed on your system (such as `gcc`).

### Compilation
Open your terminal and compile the project by linking `main.c` and `account.c` together:

```bash
gcc main.c account.c -o banking_app
```

### Execution
Run the compiled executable:

```bash
./banking_app
```

### Input Format
The program expects 5 numeric values in sequence (can be separated by spaces or newlines):
1. `Account ID` (integer)
2. `First Deposit Amount` (double)
3. `First Withdrawal Amount` (double)
4. `Second Deposit Amount` (double)
5. `Second Withdrawal Amount` (double)

**Example Input:**
```text
1024 150.0 50.0 200.0 500.0
```

**Expected Output:**
```text
Account 1024 created
Balance: 0.00
Deposited 150.00
Balance: 150.00
Withdrew 50.00
Balance: 100.00
Deposited 200.00
Balance: 300.00
Withdrawal failed: insufficient funds
Balance: 300.00
Account 1024 closed
```

## 📝 License
This project is open-source and free for educational use.
