#ifndef GAMESCENE_H
#define GAMESCENE_H

#include "../../Engine/Core/CoreEngine.h"
#include <glm/gtx/string_cast.hpp>
#include "../../Game/Test/TestClassA.h"
#include "../../Engine/Rendering/2D/GuiImageComponent.h"
#include "../../Engine/Math/Quaternion.h"
#include "../../Engine/FX/Audio/AudioHandler.h"
#include "../../Engine/FX/Audio/AudioSource.h"
#include "../../Engine/Math/AI/Graph.h"
#include "../../Engine/Math/AI/node.h"
#include "../../Engine/Math/AI/AStarPathFinding.h"
#include "../../Engine/FX/Partice/ParticleEmitter.h"

class GameScene : public Scene
{
public:
	GameScene();
	virtual ~GameScene();

	virtual bool OnCreate();
	virtual void Update(const float deltaTime_);
	virtual void Render();
	virtual void Draw();
private:
	SDL_Event e_;
	Graph<Node>  grid;
	AudioSource* backroundSound;
	ParticleEmitter* emmitter;

};
#endif