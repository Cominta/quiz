#include "questions.h"
#include <conio.h>
#include "money.h"
#include "sounds.h"

int main()
{
    Questions* questions = new Questions();
    Money* money = new Money();
    Sounds* sounds = new Sounds();
    sounds->addSound("res/win.wav", "win");
    sounds->addSound("res/lose.wav", "lose");

    bool leave = false;

    system("cls");
    system("color 7");
    std::cout << "\nHello! I am happy to see you on our quiz.\nThere is you can earn money on your knowledge!\n\n";
    std::cout << "Press enter..";
    _getch();
    system("cls");
    
    bool win = false;

    for (int i = 1; i <= questions->count; i++)
    {   
        system("color 7");
        system("cls");

        Question* currentQuestion = questions->get(i);
        std::cout << "Question #" << i << ": " << currentQuestion->getQuestions() << "\n";

        const std::map<char, std::string>* answers = currentQuestion->getAnswers();
        for (auto item = answers->begin(); item != answers->end(); item++)
        {
            std::cout << "\n" << item->first << ". " << item->second;
        }

        char answer;
        std::cout << "\n\nEnter your answer (letter): ";
        std::cin >> answer;

        bool correctAnswer = currentQuestion->checkAnswer(answer);

        if (correctAnswer)
        {
            sounds->play("win");
            money->update(i);

            system("color 2");

            std::cout << "\nYou are right!";
            std::cout << "\nYour money: " << money->getMoney(true);
            std::cout << "\nDo you wish to leave with money? (0 - continue, 1 - leave) ";
            std::cin >> leave;

            if (leave)
            {
                break;
            }
        }

        else
        {
            sounds->play("lose");
            system("color 4");

            std::cout << "\nYou are wrong!";
            std::cout << "\nYour money: " << money->getMoney(false);
            std::cout << "\nSee you soon!!!";
            std::cout << "\n\nPress enter..";

            _getch();
            exit(0);
        }
    }

    sounds->play("win");
    system("cls");

    std::cout << "\n\nYOU ARE WIN! CONGRATULATIONS!";
    std::cout << "\nYour money: " << money->getMoney(true); // временно
    std::cout << "\n\nPress enter..";

    _getch();

    return 0;
}