#include <iostream>
#include <string>

std::string FindAndReplace(std::string original, std::string replace, std::string with)
{
    std::size_t location = original.find(replace);
    while (location != std::string::npos && location < original.size())
    {
        original.replace(location, replace.size(), with);
        location = original.find(replace);
    }
    return original;
}

int main()
{
    std::cout << FindAndReplace("I am palapapa", "palapapa", "Anson");
}