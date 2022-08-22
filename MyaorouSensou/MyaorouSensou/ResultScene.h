#ifndef RESULT_SCENE_H 
#define	RESULT_SCENE_H

#include "BaseScene.h"

class ResultScene : public BaseScene
{
public:
	ResultScene();
	~ResultScene();

	SceneKind MainScene();
	void Draw();

	void InitScene() override;
	void RunScene() override;
	SceneKind FinishScene() override;

	SceneKind GetKind() override { return SceneKind::RESULT; }

private:
	//使用したいパラメータを追加↓
};

#endif