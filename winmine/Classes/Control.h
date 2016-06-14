#pragma once
#include "GameScene.h"
#include "GameLayer.h"
#include "OptionLayer.h"
#include "TouchLayer.h"
#include "TimerLayer.h"
#include "ErrorLayer.h"
#include "cocos2d.h"
#include <iostream>
class Control
{
public:
	Control();
	~Control();
	
	//���Ʋ���߳����ĺ���
	void start();//������Ϸ���� ������Ϸ�㡢��ʱ���㡢��ť�㡢������
	void restart();//���¿�ʼ����
	void openOption();//�����ú���
	void gameEnd();//��Ϸ����ʱ���ô˺�������

	//���ݿ��Ƶĺ���
	void readOption();//��ȡ���ú���
	int** createMap();//������ɶ�ά�����ͼ
	static int parseint(std::string);
	GameLayer *getGameLayer();
	TouchLayer* getTouchLayer();
	TimerLayer* getTimerLayer();
	OptionLayer* getOptionLayer();
	ErrorLayer* getErrorLayer();
	int x, y, width, height, number;
private:
	GameLayer* gameLayer;
	TouchLayer* touchLayer;
	TimerLayer* timerLayer;
	OptionLayer* optionLayer;
	ErrorLayer* errorLayer;
	GameScene* scene;
};



