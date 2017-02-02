#pragma once

#include "GameObject.h"



class RendererSystem
{
public:
			RendererSystem();
			~RendererSystem();

	void	AddGameObject(GameObject* gameObject);
	void	RemoveGameObject(GameObject* gameObject);

	void	Draw();

private:
	std::vector<GameObject*> _gameObjects;
};

