#pragma once
#include "ActionCounter.h"
USING_NS_CC;

class OnPlayerBehaviorChangeListener{
public :
	//����player����ʹ�ã�������Ҫ���һ���ж��Ƿ����Լ��ı�־
	virtual void onTackCard(int,bool,int) = 0;
	virtual void onDisCard(int cardId,int location) = 0;
	virtual void onRecoveryCard(int) = 0;
	//����غϽ��������Ϊ
	virtual void calc(int pId) = 0;
	//�õ����Ͽ��Ƶ�����
	virtual int* getOtherCards() = 0;
	virtual ActionCounter* getActionCounter() = 0;
};