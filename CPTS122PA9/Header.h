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
void updatePlayer(CircleShape &rect, int keyPress);
int setBackground(sf::RenderWindow & wind);
void enemy(sf::RenderWindow &window);

class Bullet
{
public:
	CircleShape bullet;
	Vector2f curvellocity;
	float maxspeed;

	Bullet(float radius = 5.f) :curvellocity(0.f,0.5f), maxspeed(15.f)
	{
		this->bullet.setRadius(radius);
		this->bullet.setFillColor(Color::Red);
	}


private:

};
