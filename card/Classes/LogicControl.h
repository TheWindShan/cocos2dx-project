#pragma once 

#include "cocos2d.h"
#include "Player.h"
#include "Card.h"
USING_NS_CC;

class LogicControl : public Node
{
public:
	LogicControl();
	~LogicControl();
	virtual bool init();
	CREATE_FUNC(LogicControl);

	void checkCard(Card* c); //�������Ƿ��Ƿ��Ϲ���
	void recoveryCard(Card* c); //���տ���
	void setPlayer(Player* p);

private:
	Player* m_player;
	
};
