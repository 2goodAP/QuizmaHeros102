#pragma once

#include <SFML/Graphics.hpp>
#include <fstream>
#include "State.hpp"
#include "Games.hpp"

namespace Quizma
{
	class GameState : public State
	{
	public:
		GameState(GameDataRef data);

		void Init();
		void HandleInput();
		void Update(float dt);
		void Draw(float dt);
		std::size_t getCorrectAnswer();

	private:
		GameDataRef _data;

		sf::Sprite _background;
		sf::Sprite _questionBox;
		sf::Sprite _optionsBox[4];
		bool is_wrong_sprite_clicked = false;

		sf::Sprite _cursor;
		sf::Clock _clock;
		std::stringstream ss;
		sf::Text _numbers;
		sf::Sprite _sound_icon;
		sf::Sprite _pause_icon;
		sf::Sprite _quit_icon;
	};
}