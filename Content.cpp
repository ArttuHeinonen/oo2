#include "Content.h"

Content* Content::content;

Content::Content(void) //ladataan sisältö
{
	playerTex.loadFromFile("res/player.png");
	//backgroundTex.loadFromFile("res/taivas.png");

	if (!calibri.loadFromFile("res/calibri.ttf")){
		printf("Error: font not found!\n");
	}

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