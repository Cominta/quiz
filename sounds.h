#ifndef SOUNDS_H
#define SOUNDS_H

#include <iostream>
#include <map>
#include <SFML/Audio.hpp>
#include <SFML/Audio/Music.hpp>
#include <windows.h>

class Sounds 
{
    public:
        std::map<std::string, sf::Music*> sounds;

    public:
        Sounds();
        ~Sounds();

        void addSound(std::string path, std::string name);
        void play(std::string name);
};

#endif