//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <iterator>
#include <iomanip>
#include <algorithm>
#include<deque>
#include <string>
#include<map>
#include <cstddef>
#include<cmath>
#include <iomanip>
std::string dayOfProgrammer(int year) {
    int dia{ 0 };
    std::string s{ 0 }, sa{ 0 }, sm{0};
    sa = std::to_string(year);
    sm = "09";
    dia = 13;
    if (year > 1918)
    {
        
        if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        {
            dia--;
            s = std::to_string(dia) + "." + sm + "." + sa;
        }
        else
        {
            s = std::to_string(dia) + "." + sm + "." + sa;
        }
    }
    else
    {
        if (year==1918)
        {
            dia = dia + 13;
            s = std::to_string(dia) + "." + sm + "." + sa;
        }
        if (year%4 == 0)
        {
            dia--;
            s= std::to_string(dia)+"."+sm+"."+sa;
        }
        else
        {
            s = std::to_string(dia) + "." + sm + "." + sa;
        }

    }

    return s;
}
int main()
{
    std::cout << dayOfProgrammer(1918) << "\n";
}

