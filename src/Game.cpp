
#include "Game.h"
#include <iostream>

//:D
//:3
Game::Game(sf::RenderWindow& game_window)
  : window(game_window)
{
	srand(time(NULL));
}

Game::~Game()
{

}

bool Game::init()
{
	if (!background_texture.loadFromFile("../Data/Images/background.png"))
	{
      std::cout << "background texture did not load \n";
	}
    background.setTexture(background_texture);
	return true;
}

void Game::update(float dt)
{

}

void Game::render()
{
  window.draw(background);
}

void Game::mouseClicked(sf::Event event)
{
	//get the click position
	sf::Vector2i click = sf::Mouse::getPosition(window);

	// check if in bounds of bird Sprite
	if (collisionCheck(click, bird))
	{

	}
}

void Game::keyPressed(sf::Event event)
{

}


bool Game::collisionCheck(sf::Vector2i click, sf::Sprite sprite)
{
	return false;
}

void Game::spawn()
{

}
