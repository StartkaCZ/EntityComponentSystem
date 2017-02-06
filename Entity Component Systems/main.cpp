#include "ControllerComponent.h"
#include "HealthComponent.h"
#include "PositionComponent.h"
#include "GameObject.h"
#include "AISystem.h"
#include "ControllerSystem.h"
#include "RendererSystem.h"

#include <iostream>
#include <string>
#include <thread>
#include <chrono>


GameObject* CreatePlayer();
GameObject* CreateAlien();
GameObject* CreateCat();
GameObject* CreateDog();

int main()
{
	std::vector<GameObject*> gameObjects = std::vector<GameObject*>();

	ControllerSystem controlSystem = ControllerSystem();
	RendererSystem rendererSystem = RendererSystem();
	AISystem aiSystem = AISystem();

	gameObjects.push_back(CreatePlayer());
	controlSystem.AddGameObject(gameObjects.at(gameObjects.size() - 1));
	rendererSystem.AddGameObject(gameObjects.at(gameObjects.size() - 1));

	gameObjects.push_back(CreateAlien());
	rendererSystem.AddGameObject(gameObjects.at(gameObjects.size() - 1));
	aiSystem.AddGameObject(gameObjects.at(gameObjects.size() - 1));

	gameObjects.push_back(CreateCat());
	rendererSystem.AddGameObject(gameObjects.at(gameObjects.size() - 1));

	gameObjects.push_back(CreateDog());
	rendererSystem.AddGameObject(gameObjects.at(gameObjects.size() - 1));
	aiSystem.AddGameObject(gameObjects.at(gameObjects.size() - 1));

	while (true)
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		controlSystem.Update();
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		aiSystem.Update();
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		rendererSystem.Draw();
	}
	
	system("PAUSE");
	return 0;
}

//ADD ALL COMPONENTS INTO THE RIGHT SYSTEMS!!!!

GameObject* CreatePlayer()
{
	GameObject* player = new GameObject(GameObject::Type::Player);

	player->AttachComponent(new HealthComponent(100, 100));
	player->AttachComponent(new PositionComponent(10, 10));
	player->AttachComponent(new ControllerComponent());

	return player;
}
GameObject* CreateAlien()
{
	GameObject* alien = new GameObject(GameObject::Type::Alien);

	alien->AttachComponent(new HealthComponent(150, 150));
	alien->AttachComponent(new PositionComponent(5, 5));

	return alien;
}
GameObject* CreateCat()
{
	GameObject* cat = new GameObject(GameObject::Type::Cat);

	cat->AttachComponent(new PositionComponent(15, 15));

	return cat;
}
GameObject* CreateDog()
{
	GameObject* dog = new GameObject(GameObject::Type::Dog);

	dog->AttachComponent(new HealthComponent(75, 75));
	dog->AttachComponent(new PositionComponent(20, 20));

	return dog;
}