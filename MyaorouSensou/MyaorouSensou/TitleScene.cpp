#include "TitleScene.h"

TitleScene::TitleScene()
{

}

TitleScene::~TitleScene()
{

}

SceneKind TitleScene::MainScene()
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
	return SceneKind::TITLE;
}

void TitleScene::InitScene()
{

}

void TitleScene::RunScene()
{
	
}

SceneKind TitleScene::FinishScene()
{

	return SceneKind::GAME;
}

void TitleScene::Draw()
{

}