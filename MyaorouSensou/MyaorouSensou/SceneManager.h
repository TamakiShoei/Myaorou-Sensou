#ifndef SCENE_MANAGER_H
#define SCENE_MANAGER_H

#include "BaseScene.h"
#include "Common.h"

class SceneManager
{
public:
	

	static SceneManager* Instance()
	{
		static SceneManager instance;
		return	&instance;
	}

	void Update();
	void Draw();

private:
	SceneManager();
	~SceneManager();
	SceneManager(SceneManager const&) = delete;
	void operator = (SceneManager const&) = delete;


	void Change(SceneKind scene);
private:
	
	BaseScene* pScene;
};

#endif
