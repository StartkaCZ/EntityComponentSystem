#include "ControllerComponent.h"
#include "HealthComponent.h"
#include "PositionComponent.h"
#include "GameObject.h"
#include "AISytem.h"
#include "ControllerSystem.h"
#include "RendererSystem.h"

#include <iostream>
#include <string>


GameObject CreatePlayer(RendererSystem& rendererSystem, ControllerSystem& controlSystem);
GameObject CreateAlien(RendererSystem& rendererSystem, AISytem& aiSystem);
GameObject CreateCat(RendererSystem& rendererSystem, AISytem& aiSystem);
GameObject CreateDog(RendererSystem& rendererSystem, AISytem& aiSystem);

int main()
{
	std::vector<GameObject> gameObjects = std::vector<GameObject>();

	ControllerSystem controlSystem = ControllerSystem();
	RendererSystem rendererSystem = RendererSystem();
	AISytem aiSystem = AISytem();

	gameObjects.push_back(CreatePlayer(rendererSystem, controlSystem));
	gameObjects.push_back(CreateAlien(rendererSystem, aiSystem));
	gameObjects.push_back(CreateCat(rendererSystem, aiSystem));
	gameObjects.push_back(CreateDog(rendererSystem, aiSystem));
	
	system("PAUSE");
	return 0;
}

//ADD ALL COMPONENTS INTO THE RIGHT SYSTEMS!!!!

GameObject CreatePlayer(RendererSystem& rendererSystem, ControllerSystem& controlSystem)
{
	GameObject player = GameObject();

	player.AttachComponent(HealthComponent(100, 100));
	player.AttachComponent(PositionComponent(10, 10));
	player.AttachComponent(ControllerComponent());

	return player;
}
GameObject CreateAlien(RendererSystem& rendererSystem, AISytem& aiSystem)
{
	GameObject alien = GameObject();

	alien.AttachComponent(HealthComponent(150, 150));
	alien.AttachComponent(PositionComponent(5, 5));

	return alien;
}
GameObject CreateCat(RendererSystem& rendererSystem, AISytem& aiSystem)
{
	GameObject cat = GameObject();

	cat.AttachComponent(HealthComponent(50, 50));
	cat.AttachComponent(PositionComponent(15, 15));

	return cat;
}
GameObject CreateDog(RendererSystem& rendererSystem, AISytem& aiSystem)
{
	GameObject dog = GameObject();

	dog.AttachComponent(HealthComponent(75, 75));
	dog.AttachComponent(PositionComponent(20, 20));

	return dog;
}