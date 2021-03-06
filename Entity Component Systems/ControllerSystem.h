#pragma once

#include "GameObject.h"



class ControllerSystem
{
public:
			ControllerSystem();
			~ControllerSystem();

	void	AddGameObject(GameObject* gameObject);
	void	RemoveGameObject(GameObject* gameObject);

	void	Update();

private:
	std::vector<GameObject*> _gameObjects;
};

