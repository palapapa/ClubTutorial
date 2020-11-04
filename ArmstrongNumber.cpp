#include <iostream>
#include <string>
#include <cmath>

bool IsArmstrong(int num)
{
    int sum = 0;
    std::string numStr = std::to_string(num);
    for (std::size_t i = 0; i < numStr.size(); i++)
    {
        sum += (int)pow((int)numStr[i] - (int)'0', numStr.size());
    }
    return sum == num;
}

int main()
{
    int i = 0;
    std::cin >> i;
    if (IsArmstrong(i))
    {
        std::cout << i << " is an Armstrong Number\n";
    }
    else
    {
        std::cout << i << " is not an Armstrong Number\n";
    }
    system("pause");
}
