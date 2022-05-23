#include "sounds.h"

Sounds::Sounds()
{

}

Sounds::~Sounds()
{

}

void Sounds::addSound(std::string path, std::string name)
{
    this->sounds[name] = new sf::Music();
    this->sounds[name]->openFromFile(path);
}

void Sounds::play(std::string name)
{
    this->sounds[name]->play();
    Sleep(2000);
    this->sounds[name]->stop();
}