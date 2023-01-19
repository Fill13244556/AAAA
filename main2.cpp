#include "settings.h"
#include "SFML/Graphics.hpp"
#include "functions.h"
#include "bat.h"
#include "ball.h"
#include "brick.h"

using namespace sf;
int main()
{
	RenderWindow window(
		VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT),
		WINDOW_TITLE
	);	
	
	window.setFramerateLimit(FPS);
	Bat bat;
	batInit(bat);

	Ball ball;
	initBall(ball);

    Brick brick; 
	brickInit(brick, Color::Yellow, Vector2f{50.f, 50.f});


	int Score = 0;
	Font font;
	font.loadFromFile("Pitbull.ttf");
	Text ScoreText;
	initText(ScoreText, Score, font, Char_Size, Text_Start_Pos);

	while (window.isOpen()) {
		checkEvents(window,ball);
		updateGame(bat,ball,brick);
		drawGame(window, bat,ball,brick);
	
	     
	}
	
  return 0;
}

	


