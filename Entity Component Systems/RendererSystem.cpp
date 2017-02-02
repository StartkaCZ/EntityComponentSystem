#include "RendererSystem.h"
#include "PositionComponent.h"

#include <iostream>


RendererSystem::RendererSystem()
{
}


RendererSystem::~RendererSystem()
{
}


void RendererSystem::AddGameObject(GameObject* gameObject)
{	 
	_gameObjects.push_back(gameObject);
}	 
void RendererSystem::RemoveGameObject(GameObject* gameObject)
{	 
	for (int i = 0; i < _gameObjects.size(); i++)
	{
		if (_gameObjects.at(i) == gameObject)
		{
			_gameObjects.erase(_gameObjects.begin() + i);
			break;
		}
	}
}	 
void RendererSystem::Draw()
{
	for (int i = 0; i < _gameObjects.size(); i++)
	{
		switch (_gameObjects.at(i)->getType())
		{
		case GameObject::Type::Player:
			std::cout << "Drawing Player at position (" 
					  << static_cast<PositionComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Position))->getX() 
					  << ", " 
					  << static_cast<PositionComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Position))->getY() 
					  << ")" 
					  << std::endl;
			break;

		case GameObject::Type::Alien:
			std::cout << "Drawing Alien at position ("
					  << static_cast<PositionComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Position))->getX()
					  << ", " 
					  << static_cast<PositionComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Position))->getY()
					  << ")" 
					  << std::endl;
			break;

		case GameObject::Type::Cat:
			std::cout << "Drawing Cat at position ("
					  << static_cast<PositionComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Position))->getX()
					  << ", "
					  << static_cast<PositionComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Position))->getY()
					  << ")"
					  << std::endl;
			break;

		case GameObject::Type::Dog:
			std::cout << "Drawing Dog at position ("
					  << static_cast<PositionComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Position))->getX()
					  << ", "
					  << static_cast<PositionComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Position))->getY()
					  << ")"
					  << std::endl;
			break;

		default:
			break;
		}
	}
}
