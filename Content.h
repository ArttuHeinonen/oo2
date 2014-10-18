#pragma once
#include <SFML\Graphics.hpp>

class Content
{
private:
	static Content* content;

	Content(void);
public:
	sf::Texture playerTex;
	sf::Texture backgroundTex;
	sf::Font calibri;
	~Content(void);
	static Content* get();
};

