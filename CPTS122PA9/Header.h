#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <string>
#include <iostream>
#include "Header.h";


using namespace std;
using namespace sf;

int run();
void playerCollisions(CircleShape &rect, int type, int keyPress);
void updatePlayer(CircleShape &rect, int keyPress);
int setBackground(sf::RenderWindow & wind);