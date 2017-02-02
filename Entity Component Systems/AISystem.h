#pragma once

#include "GameObject.h"



class AISystem
{
public:
			AISystem();
			~AISystem();

	void	AddGameObject(GameObject* gameObject);
	void	RemoveGameObject(GameObject* gameObject);

	void	Update();

private:
	std::vector<GameObject*> _gameObjects;
};

