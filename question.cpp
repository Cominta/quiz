#include "question.h"

Question::Question(std::string question, std::map<char, std::string>* answers, char answer)
    : question(question), answers(answers), answer(answer)
{

}

Question::~Question()
{

}

const bool Question::checkAnswer(char answer)
{
    return (answer == this->answer);
}