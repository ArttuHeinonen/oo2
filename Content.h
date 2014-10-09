#pragma once
#include <SFML\Graphics.hpp>

class Content
{
private:
	static Content* content;

	Content(void);
public:
	sf::Texture player;
	sf::Texture background;
	~Content(void);
	static Content* get();
};

