#include "Header.h"
int run()
{
	sf::RenderWindow window(sf::VideoMode(600, 600), "SFML works!");
	sf::CircleShape shape(10.f);
	shape.setOrigin(sf::Vector2f(-395, -565));
	shape.setFillColor(sf::Color::Green);
	int i = 0;
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			if (event.KeyPressed && event.key.code == Keyboard::Escape)
				window.close();
		}
		window.clear();
		setBackground(window);
		window.draw(shape);
		updatePlayer(shape, i);
		window.display();
		
	}

	return 0;

}

void playerCollisions(CircleShape & player, int type, int keyPress)
{
	bool i = false;
	switch (type)
	{
	case 0: //A
		///////////////////////////////////////////////////Outside structures//////////////////////////////////////////////////
		if (player.getPosition().y >= -50 && (player.getPosition().x <= -185))
		{
			
		}
		else if (player.getPosition().y >= -35 && (player.getPosition().x <= -115))
		{
			
		}
		else if (player.getPosition().y >= -70 && (player.getPosition().x <= -250))
		{
			
		}
		else if (player.getPosition().x <= -60 && (player.getPosition().y <20 && player.getPosition().y >-20))
		{
			
		}
		else if (player.getPosition().x <= -140 && (player.getPosition().y <50 && player.getPosition().y >-85))
		{

		}
		else if (player.getPosition().x <= -95 && (player.getPosition().y >-135 && player.getPosition().y <-85))
		{

		}
		
		///////////////////////////////////////////////////Inside structures//////////////////////////////////////////////////
		else
		{
			player.move(-5.f, 0.f);
			keyPress = 0;
			cout << player.getPosition().x << player.getPosition().y << endl;
		}
		break;
	case 1://S
		///////////////////////////////////////////////////Outside structures//////////////////////////////////////////////////
		if ((player.getPosition().y > -100) && (player.getPosition().x > -300 && (player.getPosition().x < -250)))
		{

		}
		else if ((player.getPosition().y > -75) && (player.getPosition().x > -260 && (player.getPosition().x < -190)))
		{

		}
		else if ((player.getPosition().y > -55) && (player.getPosition().x > -195 && (player.getPosition().x < -120)))
		{

		}
		else if ((player.getPosition().y > -40) && (player.getPosition().x > -125 && (player.getPosition().x < -65)))
		{

		}
		else if ((player.getPosition().y > -40) && (player.getPosition().x > 60 && (player.getPosition().x < 95)))
		{

		}
		///////////////////////////////////////////////////Inside structures//////////////////////////////////////////////////
		else
		{
			player.move(0.f, 5.f);
			cout << player.getPosition().x << player.getPosition().y << endl;
			keyPress = 0;
		}
		break;
	case 2://D
		///////////////////////////////////////////////////Outside structures//////////////////////////////////////////////////
		if (player.getPosition().x >= 55 && (player.getPosition().y <20 && player.getPosition().y >-20))
		{

		}
		///////////////////////////////////////////////////Inside structures//////////////////////////////////////////////////
		if (player.getPosition().x >= -70 && (player.getPosition().y <-80 && player.getPosition().y >-175))
		{

		}
		else 
		{
			player.move(5.f, 0.f);
			cout << player.getPosition().x << player.getPosition().y << endl;
			keyPress = 0;
		}
		break;
	case 3: // w
		///////////////////////////////////////////////////Outside structures//////////////////////////////////////////////////
		///////////////////////////////////////////////////Inside structures//////////////////////////////////////////////////
		if (player.getPosition().y <= -180 && (player.getPosition().x <55 && player.getPosition().x >-55))
		{
			player.move(0.f, -5.f);
			cout << player.getPosition().x << player.getPosition().y << endl;
			keyPress = 0;
		}
		else if ((player.getPosition().x > -145 && player.getPosition().x < -100)&& (player.getPosition().x > -80 && player.getPosition().x < -175))
		{

		}
		else if (player.getPosition().y <= -70 && (player.getPosition().x > -55 && player.getPosition().x < 60))
		{
			
		}
		else if (player.getPosition().y <= -90 && (player.getPosition().x >55 && player.getPosition().x <100))
		{
			
		}
		else if ((player.getPosition().y <= -70 && player.getPosition().y >= -100 ) && (player.getPosition().x >-150 && player.getPosition().x <-100))
		{

		}
		else 
		{
			player.move(0.f, -5.f);
			cout << player.getPosition().x << player.getPosition().y << endl;
			keyPress = 0;
		}
		break;
	}

}


void updatePlayer(CircleShape &player, int keyPress)
{
	if (keyPress < 8) 
	{
		keyPress++;
	}
	if (Keyboard::isKeyPressed(Keyboard::A)&&keyPress <=8 && player.getPosition().x >-295){
		playerCollisions(player, 0, keyPress);
		keyPress = 0;
		
	}
	if (Keyboard::isKeyPressed(Keyboard::W) && keyPress <= 8 && player.getPosition().y  >-560)
	{
		playerCollisions(player, 3, keyPress);
		keyPress = 0;
		
	}
	if (Keyboard::isKeyPressed(Keyboard::S) && keyPress <= 8  && player.getPosition().y < 15)
	{
		playerCollisions(player, 1, keyPress);
		keyPress = 0;
	}
	if (Keyboard::isKeyPressed(Keyboard::D) && keyPress <= 8 && player.getPosition().x < 90)
	{
		playerCollisions(player, 2, keyPress);
		keyPress = 0;
	}

}

int setBackground(sf::RenderWindow & wind)
{
	sf::RectangleShape shape1(sf::Vector2f(600, 600));
	sf::Texture *Bkg;
	Bkg = new sf::Texture();
	if (!Bkg->loadFromFile("mazebackground.png"))
	{
		return-1;
	}
	shape1.setTexture(Bkg);
	wind.draw(shape1);
}
