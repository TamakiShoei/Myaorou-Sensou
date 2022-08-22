#include "ResultScene.h"

ResultScene::ResultScene()
{

}

ResultScene::~ResultScene()
{

}

SceneKind ResultScene::MainScene()
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
	return SceneKind::RESULT;
}

void ResultScene::InitScene()
{

}

void ResultScene::RunScene()
{

}

SceneKind ResultScene::FinishScene()
{

	return SceneKind::TITLE;
}

void ResultScene::Draw()
{

}