#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <GL/glew.h>
#include <GL/wglew.h>


#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>

#include <Debug.h>

#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>
#include <math.h>

using namespace std;
using namespace sf;
using namespace glm;

class Game
{
public:
	Game();
	Game(sf::ContextSettings settings);
	~Game();
	void run();
	bool jumping = false;
	bool falling = false;

private:
	Window window;
	sf::Time m_cumulativeTime;
	bool isRunning = false;
	void initialize();
	void update(sf::Time);
	void render();
	void unload();
	double count = 0;
};

#endif