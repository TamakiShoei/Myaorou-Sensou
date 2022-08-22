#ifndef BASE_SCENE_H
#define BASE_SCENE_H

#include "Common.h"

class BaseScene
{
public:

	BaseScene();
	virtual ~BaseScene();

	virtual SceneKind MainScene() = 0;
	virtual void Draw() = 0;

	virtual SceneKind GetKind() = 0;
	
protected:
	virtual void InitScene() = 0;
	virtual void RunScene() = 0;
	virtual SceneKind FinishScene() = 0;

	enum StepKind
	{
		INIT,
		RUN,
		FINISH
	};

protected:
	StepKind current_step;
};

#endif
