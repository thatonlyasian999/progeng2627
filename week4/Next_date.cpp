#include <iostream>

bool leap_year(int year)
{
    bool ly;

    if (year % 400 == 0)
    {
        ly = true;
    }
    else if ((year % 4 == 0) && (year % 100 != 0))
    {
        ly = true;
    }
    else
    {
        ly = false;
    }

    return ly;
}

void next_date(int d1, int m1, int y1, int &d2, int &m2, int &y2)
{

    if ((leap_year(y1)) && (m1 == 2) && (d1 == 28))
    {
        d2 = 29;
        m2 = m1;
        
    }
    if (((d1 == 30) && (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11)) || ((d1 == 31) && (m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10)))
    {
        d2 = 1;
        m2 = m1 + 1;
    } else if (!(leap_year(y1)) && (m1 == 2) && (d1 == 28)) {
        d2 = 1;
        m2 = m1 + 1;
    }
    else
    {
        d2 = d1 + 1;
        m2 = m1;
    }

    if ((d1 == 31) && (m1 == 12))
    {
        y2 = y1 + 1;
        d2 = 1;
        m2 = 1;
    }
    else
    {
        y2 = y1;
    }

    if ((leap_year(y1)) && (m1 == 2) && (d1 == 29))
    {
        d2 = 1;
        m2 = m1 + 1;
    }
}

int main()
{
    int d2, m2, y2;
    next_date(31, 1, 2021, d2, m2 ,y2);
            std::cout
        << "Next date is " << d2 << "/" << m2 << "/" << y2 << std::endl;

    
}
