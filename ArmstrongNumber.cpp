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
    for (int i = 0; i < 100000; i++)
    {
        if (IsArmstrong(i))
        {
            std::cout << i << " \n";
        }
    }
    system("pause");
}
