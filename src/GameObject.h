
#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <iostream>
#include <SFML/Graphics.hpp>

class GameObject
{
	 public:
		  GameObject();
		  ~GameObject();

		  bool initialiseSprite(sf::Texture& texture, std::string filename);
		  sf::Sprite* getSprite();
		  sf::FloatRect getGlobalBounds() const;

	 private:
		  sf::Sprite* sprite = nullptr;

};

#endif // GAMEOBJECT_H