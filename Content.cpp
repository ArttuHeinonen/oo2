#include "Content.h"

Content* Content::content;

Content::Content(void) //kerrotaan mistä löytyy contenttia
{
	player.loadFromFile("Graphics\\UusiUljas.gif");
	background.loadFromFile("Graphics\\taivas.png");
}

Content::~Content(void)
{

}

Content* Content::get()
{
	if (!content)
		content = new Content();

	return content;
}