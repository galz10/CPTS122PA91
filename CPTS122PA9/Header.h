#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML\System.hpp>
#include <math.h>
#include <string>
#include <iostream>



using namespace std;
using namespace sf;

int run();
void playerCollisions(CircleShape &rect, int type, int keyPress);
void updatePlayer(CircleShape &rect, int keyPress, RenderWindow & wind);
int setBackground(sf::RenderWindow & wind);

bool drawlaser(sf::RenderWindow & wind ,CircleShape &player);

