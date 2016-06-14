#pragma once
#include "cocos2d.h"
class Mine
	:public cocos2d::Sprite
{
public:
	Mine();
	Mine(int x, int y, int value,int width,int height);
	~Mine();
	virtual bool init();
	CREATE_FUNC(Mine);
	static Mine* create(int x,int y,int value,int width,int height);
	void setValue(int value);
	int getValue();
	void chooseIn();
	void open(int );
	void update(float dt);
	void initPosition();//��ʼ��λ��
	void boom();
	float getPropx();
	float getPropy();
	void initWithMyNode(cocos2d::SpriteBatchNode*);
	void timerHandler(float dt);
	void setEnable(bool );
	int getFlag();
	void resetFlag();
private:
	int x, y;//������λ��~
	int value,flag;//ֵ flag������ǵ�״̬
	float propx,propy,bb;//����
	int width, height;
	cocos2d::Animate *animate;
	bool _enabel;//�Ƿ�����������
};

