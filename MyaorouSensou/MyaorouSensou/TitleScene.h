#ifndef TITLE_SCENE_H 
#define	TITLE_SCENE_H

#include "BaseScene.h"

class TitleScene : public BaseScene
{
public:
	TitleScene();
	~TitleScene();

	SceneKind MainScene();
	void Draw();

	void InitScene() override;
	void RunScene() override;
	SceneKind FinishScene() override;

	SceneKind GetKind() override { return SceneKind::TITLE; }

private:
	//�g�p�������p�����[�^��ǉ���
};

#endif