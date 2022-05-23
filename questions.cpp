#include "questions.h"

Questions::Questions()
{
    this->count = 10;

    // очень легко расширять

    std::vector<std::string> questions {
        "What is bit?",
        "How many pluses in this world?",
        "What is happiness?",
        "What is array?",
        "Can water flow up?",
        "Which cartoon character lives in a pineapple underwater?",
        "How long is a moment?",
        "What does the term DNA mean?",
        "Glory to Ukraine",
        "How much does the Chewbacca suit weigh?"
    };

    std::vector<std::map<char, std::string>*> answers {
        new std::map<char, std::string>{{'A', "Bitcoin"}, {'B', "Unit of measurement of the amount of information"}, {'C', "A bit of cake"}, {'D', "Bitbox"}},
        new std::map<char, std::string>{{'A', "2"}, {'B', "5"}, {'C', "10"}, {'D', "There are only 2 pluses and that is c++"}},
        new std::map<char, std::string>{{'A', "When the code runs the first time"}, {'B', "It is money"}, {'C', "It is love"}, {'D', "It is Putin's death"}},
        new std::map<char, std::string>{{'A', "It is a named collection of elements of the same type, ordered by index"}, {'B', "It is dream"}, {'C', "It is food"}, {'D', "It is happiness"}},
        new std::map<char, std::string>{{'A', "No"}, {'B', "WHAT THE FUCKING QUESTIONS???"}, {'C', "Yes"}, {'D', "Goodbye."}},
        new std::map<char, std::string>{{'A', "Rick and Morty"}, {'B', "Spongebob"}, {'C', "Hourse"}, {'D', "..."}},
        new std::map<char, std::string>{{'A', "60 seconds"}, {'B', "90 seconds"}, {'C', "120 seconds"}, {'D', "180 seconds"}},
        new std::map<char, std::string>{{'A', "Deoxyribonucleic acid"}, {'B', "Duoxyribonucleic acid"}, {'C', "Deoxyribonuclear acid"}, {'D', "Duoribonucleic acid"}},
        new std::map<char, std::string>{{'A', "Glory to Russia"}, {'B', "Glory to nation"}, {'C', "Glory to me"}, {'D', "Glory to heroes"}},
        new std::map<char, std::string>{{'A', "6.8 kg"}, {'B', "2.7 kg"}, {'C', "7.7 kg"}, {'D', "3.6 kg"}}
    };

    std::vector<char> correctAnswers {
        'B',
        'D',
        'D',
        'A',
        'C',
        'B',
        'B',
        'A',
        'D',
        'D'
    };

    for (int i = 0; i < this->count; i++)
    {
        this->questions.emplace_back(new Question(questions[i], answers[i], correctAnswers[i]));
    }
}

Questions::~Questions()
{

}