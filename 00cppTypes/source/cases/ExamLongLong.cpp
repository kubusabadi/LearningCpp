
#include "ExamLongLong.h"

#include <iostream>

void ExamLongLong::examine()
{
    long long a = 1111111111111111111ll;
    long long b = 2222222222200000000ll;
    auto result = a + b; // __int64 3333333333311111111
    auto result2 = (long long)a+b; // __int64 3333333333311111111

    std::cout << typeid(result).name() << " " << result << std::endl;
    std::cout << typeid(result2).name() << " " << result2 << std::endl;
}