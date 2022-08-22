#include "GameScene.h"

GameScene::GameScene()
{

}

GameScene::~GameScene()
{

}

SceneKind GameScene::MainScene()
{
	switch (current_step)
	{
	case BaseScene::INIT:
		InitScene();
		break;

	case BaseScene::RUN:
		RunScene();
		break;

	case BaseScene::FINISH:
		return FinishScene();
		break;
	}
	return SceneKind::GAME;
}

void GameScene::InitScene()
{

}

void GameScene::RunScene()
{

}

SceneKind GameScene::FinishScene()
{

	return SceneKind::RESULT;
}

void GameScene::Draw()
{

}