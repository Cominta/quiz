#ifndef QUESTION_H
#define QUESTION_H

#include <iostream>
#include <map>

class Question
{
    private:
        std::string question;
        std::map<char, std::string>* answers;
        char answer;

    public:
        Question(std::string question, std::map<char, std::string>* answers, char answer);
        ~Question();

        const bool checkAnswer(char answer);

        const std::string getQuestions() {return this->question;};
        const std::map<char, std::string>* getAnswers() {return this->answers;};
};

#endif