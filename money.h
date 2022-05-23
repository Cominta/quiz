#ifndef MONEY_H
#define MONEY_H

class Money 
{
    private:
        int money;
        int moneyEveryQuestion;
        int numQuestion;

    public:
        Money();
        ~Money();

        const int getMoney(bool leave);

        void update(int num) {this->money += num * this->moneyEveryQuestion; this->numQuestion = num;};
};

#endif