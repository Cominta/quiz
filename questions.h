#ifndef QUESTIONS_H
#define QUESTIONS_H

#include <vector>
#include "question.h"

class Questions 
{
    private:
        std::vector<Question*> questions;

    public:
        int count;

        Questions();
        ~Questions();

        Question* get(int num) {return this->questions.at(num - 1);};
};

#endif