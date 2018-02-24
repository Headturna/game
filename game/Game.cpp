#include "Game.h"

//#define DEBUG

//Initializers
void Game::initVariables()
{
	//Delta Time
	this->dt = 0.f;
	this->lastTime = 0.f;
	this->currTime = 0.f;
	this->dtClock.restart();

	//Window
	this->window = nullptr;
}

void Game::initWindow()
{
	//Settings
	this->window_context_settings;

	//Create window
	this->window = new sf::RenderWindow(
		sf::VideoMode(this->WINDOW_WIDTH, this->WINDOW_HEIGHT),
		"WANNABE_METROID", 
		sf::Style::Default, 
		this->window_context_settings
	);
}

void Game::initialize()
{
	//Variables
	this->initVariables();

	//Window
	this->initWindow();
}

//Cleanup
void Game::cleanup()
{
	delete this->window;
}

//Constructors / Destructors
Game::Game()
	: WINDOW_WIDTH(1920), WINDOW_HEIGHT(1080)
{
	//Init game
	this->initialize();
}

Game::~Game()
{

}

//Accessors

//Modifiers

//Functions
bool Game::windowIsOpen()
{
	return this->window->isOpen();
}

void Game::updateDT()
{
	this->dt = this->dtClock.restart().asSeconds();
	
#ifdef DEBUG
	std::cout << this->dt << "\n";
#endif
}

void Game::update()
{
	this->updateDT();
}

void Game::render()
{
	this->window->clear(sf::Color(0.f, 0.f, 0.f, 0.f));

	this->window->display();
}

