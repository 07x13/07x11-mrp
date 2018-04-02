#include <iostream>
#include <cstdlib>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
using namespace std;
using namespace sf;

int main()
{
	RenderWindow window(VideoMode(1280, 800), "Engine");
	
	Texture p1texture;
	p1texture.loadFromFile("textures/ptexture1.png");

	Sprite p1sprite;
	p1sprite.setTexture(p1texture);
	
	
	
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
		while (((Keyboard::isKeyPressed(Keyboard::P))))
		{
			p1sprite.setPosition(100, 100);
		}

		window.clear();
		window.display();
		window.draw(p1sprite);
	}

}