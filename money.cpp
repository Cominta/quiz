#include "money.h"

Money::Money()
{
    this->money = 0;
    this->moneyEveryQuestion = 100;
}

Money::~Money()
{

}

const int Money::getMoney(bool leave)
{
    if (leave)
    {
        return this->money;
    }

    // несгораемые суммы
    if (this->numQuestion < 3)
    {
        return 0;
    }

    else if (this->numQuestion == 3)
    {
        return this->moneyEveryQuestion * 2;
    }

    else if (this->numQuestion == 6)
    {
        return this->moneyEveryQuestion * 5;
    }

    else if (this->numQuestion == 8)
    {
        return this->moneyEveryQuestion * 8;
    }
}