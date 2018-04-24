#include "Header.h"
int run()
{
	bool won;
	sf::RenderWindow window(sf::VideoMode(600, 600), "SFML works!");
	sf::CircleShape shape(15.f);
	//CHANGED
	shape.setOrigin(sf::Vector2f(-395, -565));
	shape.setFillColor(sf::Color::White);
	
	Texture *PLAY;
	PLAY = new Texture();
	if (!PLAY->loadFromFile("frame-1.png"))
	{

	}
	shape.setTexture(PLAY);

	
	//
	sf::Font timerFont;
	if (!timerFont.loadFromFile("font.ttf")) {
		std::cerr << "No font file found!" << std::endl;
	}
	sf::Text timerText;
	timerText.setFont(timerFont);
	timerText.setPosition(400, 0);
	timerText.setCharacterSize(40);

	int i = 0, k = 0, n= 30;
	sf::Clock clock;
	sf::Time time;
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
		updatePlayer(shape, i,window);
		if (drawlaser(window, shape) == true) 
		{
			won = false;
		}
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
		if (player.getPosition().y >= -50 && (player.getPosition().x <= -185)) {}
		///////////////////////////////////////////////////Inside structures//////////////////////////////////////////////////
		else if (player.getPosition().y >= -35 && (player.getPosition().x <= -115)) {}
		else if (player.getPosition().y >= -70 && (player.getPosition().x <= -250)) {}
		else if (player.getPosition().x <= -60 && (player.getPosition().y <20 && player.getPosition().y >-20)) {}
		else if (player.getPosition().x <= -140 && (player.getPosition().y <50 && player.getPosition().y >-85)) {}
		else if (player.getPosition().x <= -95 && (player.getPosition().y > -135 && player.getPosition().y < -85)) {}
		else if ((player.getPosition().x <= 70 && player.getPosition().x > -70) && player.getPosition().y == -90) {}
		else if ((player.getPosition().x <= -165&& player.getPosition().x >=-259) && (player.getPosition().y > -245&& player.getPosition().y < -175)) {}
		else if ((player.getPosition().x >= 0 && player.getPosition().x <= 20) && (player.getPosition().y <=-340 )) {}
		else if ((player.getPosition().x <= 0 && player.getPosition().x >= -30) && (player.getPosition().y > -320 && player.getPosition().y < -275)) {}
		else if ((player.getPosition().x <= -95 && player.getPosition().x >= -105) && (player.getPosition().y > -265 && player.getPosition().y < -235)) {}
		else if ((player.getPosition().x <= -190 && player.getPosition().x >= -230) && (player.getPosition().y > -380 && player.getPosition().y < -280)) {}
		else if ((player.getPosition().x <= -110 && player.getPosition().x >= -125) && (player.getPosition().y > -510 && player.getPosition().y < -400)) {}

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
		///////////////////////////////////////////////////Inside structures//////////////////////////////////////////////////
		else if ((player.getPosition().y > -185 && player.getPosition().y < -70) && (player.getPosition().x > -67 && (player.getPosition().x < 65))) {}
		else if (((player.getPosition().y > -150 && player.getPosition().y < -140) && (player.getPosition().x < 100 && player.getPosition().x>60))) {}
		else if (((player.getPosition().y > -145 && player.getPosition().y < -135) && (player.getPosition().x >-195 && player.getPosition().x<-110))) {}
		else if (((player.getPosition().y > -385 && player.getPosition().y < -375) && (player.getPosition().x >-260 && player.getPosition().x<-210))) {}
		else if (((player.getPosition().y > -360 &&player.getPosition().y < -350)&& (player.getPosition().x >-125 && player.getPosition().x<-80))) {}
		else if (((player.getPosition().y > -395 && player.getPosition().y <-380) &&(player.getPosition().x >-95 && player.getPosition().x<-65))) {}
		else if (((player.getPosition().y > -250 && player.getPosition().y <-240) && (player.getPosition().x >-250 && player.getPosition().x<-185))) {}
		else if (((player.getPosition().y > -325 && player.getPosition().y <-315) && (player.getPosition().x >-150 && player.getPosition().x<-120))) {}
		else if (((player.getPosition().y > -505 && player.getPosition().y < -495)&&(player.getPosition().x >-201 && player.getPosition().x<-125))) {}
		

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
		else if (player.getPosition().x >= -70 && (player.getPosition().y <-70 && player.getPosition().y >-175)) {}
		else if ((player.getPosition().x >= -260 && player.getPosition().x <= -245)&& (player.getPosition().y <-170 && player.getPosition().y >-250)) {}
		else if ((player.getPosition().x >= -275 && player.getPosition().x <= -256) && (player.getPosition().y <-270 && player.getPosition().y >-390)) {}
		else if ((player.getPosition().x >= -230 && player.getPosition().x <= -200) && (player.getPosition().y <-395 && player.getPosition().y >-510)) {}
		else if ((player.getPosition().x >= -165 && player.getPosition().x <= -150) && (player.getPosition().y <-235 && player.getPosition().y >-320)) {}
		else if ((player.getPosition().x >= -125 && player.getPosition().x <= -115) && (player.getPosition().y <-315 && player.getPosition().y >-360)) {}
		else if ((player.getPosition().x >= -90 && player.getPosition().x <= -70) && (player.getPosition().y <-270 && player.getPosition().y >-390)) {}
		else if ((player.getPosition().x >= -75 && player.getPosition().x <= -60) && (player.getPosition().y <-365 && player.getPosition().y >-560)) {}
		else if ((player.getPosition().x >= -190 && player.getPosition().x <= -185) && (player.getPosition().y <-55 && player.getPosition().y >-160)) {}

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
		if ((player.getPosition().x > -145 && player.getPosition().x < -100) && (player.getPosition().x > -80 && player.getPosition().x < -175)) {}
		else if ((player.getPosition().y <= -70 && player.getPosition().y > -180) && (player.getPosition().x > -55 && player.getPosition().x < 60)) {}
		else if ((player.getPosition().y <= -90 && player.getPosition().y >= -145) && (player.getPosition().x > 55 && player.getPosition().x < 100)) {}
		else if ((player.getPosition().y <= -70 && player.getPosition().y >= -100) && (player.getPosition().x > -150 && player.getPosition().x < -100)) {}
		else if ((player.getPosition().y <= -230 && player.getPosition().y >= -318) && (player.getPosition().x > -165 && player.getPosition().x < -100)) {}
		else if ((player.getPosition().y <= -245 && player.getPosition().y >= -260) && (player.getPosition().x > -105 && player.getPosition().x < -55)){}
		else if ((player.getPosition().y <= -255 && player.getPosition().y >= -260) && (player.getPosition().x > -55 && player.getPosition().x < -10)) {}
		else if ((player.getPosition().y <= -310 && player.getPosition().y >= -365) && (player.getPosition().x > -15 && player.getPosition().x <15)) {}
		else if ((player.getPosition().y <= -340 && player.getPosition().y >= -395) && (player.getPosition().x > -5 && player.getPosition().x <100)) {}
		else if ((player.getPosition().y <= -170 && player.getPosition().y >= -230) && (player.getPosition().x > -255 && player.getPosition().x <-170)) {}
		else if ((player.getPosition().y <= -270 && player.getPosition().y >= -360) && (player.getPosition().x > -260 && player.getPosition().x <-190)) {}
		else if ((player.getPosition().y <= -395 && player.getPosition().y >= -485) && (player.getPosition().x > -205 && player.getPosition().x <-110)) {}
		else 
		{
			player.move(0.f, -5.f);
			cout << player.getPosition().x << player.getPosition().y << endl;
			keyPress = 0;
		}
		break;
	}

}


void updatePlayer(CircleShape &player, int keyPress, RenderWindow & wind)
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
		wind.draw(player);
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
//CHANGED
bool drawlaser(sf::RenderWindow & wind, CircleShape &player)
{
	RectangleShape laser1(sf::Vector2f(5, 100));
	RectangleShape laser(sf::Vector2f(5, 100));
	RectangleShape laser2(sf::Vector2f(5, 100));
	laser1.setOrigin(-483,-465);
	laser1.setFillColor(Color::Transparent);

	if ((player.getPosition().x > 70 && player.getPosition().x < 90) && (player.getPosition().y < -35 && player.getPosition().y > -90)) 
	{
		laser1.setOrigin(-483, -465);
		laser1.setFillColor(Color::White);
		laser.setOrigin(-322, -310);
		laser.setFillColor(Color::White);
		laser2.setOrigin(-395, -245);
		laser2.setFillColor(Color::White);
		wind.draw(laser1);
		wind.draw(laser);
		wind.draw(laser2);
		return true;
	}
	if ((player.getPosition().x > -90 && player.getPosition().x < -60) && (player.getPosition().y < -165 && player.getPosition().y > -245))
	{
		laser1.setOrigin(-483, -465);
		laser1.setFillColor(Color::White);
		laser.setOrigin(-322, -310);
		laser.setFillColor(Color::White);
		laser2.setOrigin(-395, -245);
		laser2.setFillColor(Color::White);
		wind.draw(laser1);
		wind.draw(laser);
		wind.draw(laser2);
		return true;
	}
	if ((player.getPosition().x > -15 && player.getPosition().x < 10) && (player.getPosition().y < -235 && player.getPosition().y > -310))
	{
		laser1.setOrigin(-483, -465);
		laser1.setFillColor(Color::White);
		laser.setOrigin(-322, -310);
		laser.setFillColor(Color::White);
		laser2.setOrigin(-395, -245);
		laser2.setFillColor(Color::White);
		wind.draw(laser1);
		wind.draw(laser);
		wind.draw(laser2);
		return true;
	}
	else 
	{
		return false;
	}

}
//


