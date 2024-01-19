#include "Solution2.h"

#include <ostream>
#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2

float Solution2::GetBalance(const std::string& accountName)
{
    std::string acc = "BankAccount/" + accountName + ".txt";
    std::ifstream file(acc);
    if (!file.is_open()) {
        throw std::runtime_error("File not found: " + acc);
    }

    double balance = 0.0;
    std::string operation;
    double amount;

    while (file >> operation >> amount) {
        if (operation == "DEPOSIT") {
            balance += amount;
        }
        else if (operation == "WITHDRAW") {
            balance -= amount;
        }
        else {
            std::cerr << "Unknown operation '" << operation << "' in file " << accountName << std::endl;
        }
    }

    return balance;
}


#endif
