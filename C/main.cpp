#include <iostream>
#include "main.h"
#include "A/index.h"
#include "B/lib.h"

int main_() {
    return 3;
}

int main() {
    std::cout << index() << "\n";
    std::cout << lib() << "\n";
    std::cout << main_() << "\n";

    return 0;
}