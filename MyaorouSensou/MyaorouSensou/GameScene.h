#ifndef GAME_SCENE_H 
#define	GAME_SCENE_H

#include "BaseScene.h"

class GameScene : public BaseScene
{
public:
	GameScene();
	~GameScene();

	SceneKind MainScene();
	void Draw();

	void InitScene() override;
	void RunScene() override;
	SceneKind FinishScene() override;

	SceneKind GetKind() override { return SceneKind::GAME; }

private:
	//使用したいパラメータを追加↓
};

#endif