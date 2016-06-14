#pragma once

#include "cocos2d.h"
USING_NS_CC;

class DataManager : public Node
{
public:
	DataManager();
	~DataManager();
	void readData(); 
	virtual bool init();
	CREATE_FUNC(DataManager);
	//ͨ��id �õ��Ƶ��������ݣ�hp��attack��mana��range������һ������
	int* getCardDataById(int id); 
	//ͨ��id�õ�hp
	int getCardHpById(int id);
	//ͨ��id�õ�attack
	int getCardAttackById(int id);
	//ͨ��id�õ�mana
	int getCardManaById(int id);
	//ͨ��id�õ����
	int getCardRangeById(int id);
private:
	ValueVector hps,attacks,manas,ranges;
};