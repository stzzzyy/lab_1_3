#include <iostream>

int main() {

    int nNotValue = 19;

    int nAndValue1 = 90;
    int nAndValue2 = 123;

    int nOrValue1 = 135;
    int nOrValue2 = 66;

    int nXorValue1 = 35;
    int nXorValue2 = 79;

    int nShiftLeftValue1 = 908;
    int nShiftLeftValue2 = 2;

    int nShiftRightValue1 = -94;
    int nShiftRightValue2 = 2;

    int nResultNot = ~nNotValue;
    int nResultAnd = nAndValue1 & nAndValue2;
    int nResultOr = nOrValue1 | nOrValue2;
    int nResultXor = nXorValue1 ^ nXorValue2;
    int nResultShiftLeft = nShiftLeftValue1 << nShiftLeftValue2;
    int nResultShiftRight = nShiftRightValue1 >> nShiftRightValue2;

    std::cout << "Value ~:      " << nNotValue << std::endl;
    std::cout << "Value & (1):  " << nAndValue1 << std::endl;
    std::cout << "Value & (2):  " << nAndValue2 << std::endl;
    std::cout << "Value | (1):  " << nOrValue1 << std::endl;
    std::cout << "Value | (2):  " << nOrValue2 << std::endl;
    std::cout << "Value ^ (1):  " << nXorValue1 << std::endl;
    std::cout << "Value ^ (2):  " << nXorValue2 << std::endl;
    std::cout << "Value << (1): " << nShiftLeftValue1 << std::endl;
    std::cout << "Value << (2): " << nShiftLeftValue2 << std::endl;
    std::cout << "Value >> (1): " << nShiftRightValue1 << std::endl;
    std::cout << "Value >> (2): " << nShiftRightValue2 << std::endl;
    std::cout << "\n";

    std::cout << "Result Inversion (~):             " << nResultNot         << std::endl;
    std::cout << "Result Bitwise AND (&):           " << nResultAnd         << std::endl;
    std::cout << "Result Bitwise OR (|):            " << nResultOr         << std::endl;
    std::cout << "Result Bitwise Exclusive OR (^):  " << nResultXor         << std::endl;
    std::cout << "Result Shift Left  (<<):          "  << nResultShiftLeft  << std::endl;
    std::cout << "Result Shift Right (>>):          "  << nResultShiftRight << std::endl;
    
    return 0;

    }