#pragma once

#include "cocos2d.h"
#include "DataManager.h"
#include "FlowWord.h"
#include "Player.h"
#include "OnActionEndListener.h"
#include "ActionCounter.h"
typedef int Dir;
USING_NS_CC;

class Card : public Node
{
public:
	Card();
	~Card();
	virtual bool init();
	CREATE_FUNC(Card);

	//����idΪΨһ��ݱ�ʾ�����ܲ�ͬid��Ӧͬ��������һ���ƣ����ǲ�����ͬһ����
	void setId(int);
	void setHp(int);
	void setAttack(int);
	void setMana(int);
	void setSkillId(int);
	void setRange(int);
	void setDir(int );
	void setBack(bool);
	int getDir();
	void initCardWithDataManager(DataManager* dm,int id);
	int getId();
	int getHp();
	int getAttack();
	int getMana();
	int getSkillId();
	int getRange();
	void setDataManager(DataManager* dm);
	void setActionCounter(ActionCounter*);
	bool getIsDie();

	void setMsg(int hp, int attack, int mana, int range, int skillId); //ͳһһ��������

	Sprite* getCardNode(); //�õ����Ƶľ���

	//������ע��ģ���ҪCounter Runһ�Σ�������
	void showFly(Point p,float time = 0.2f);
	//������ע��ģ���ҪCounter Runһ�Σ�������
	void showMove(Point p,float time = 0);
	//������ע��ģ���ҪCounter Runһ�Σ�������
	void showDown(Point p,float time = 0.2f);
	//������ע��ģ���ҪCounter Runһ�Σ�������
	void showError();
	//������ע��ģ���ҪCounter Runһ�Σ�������
	void showAiMove(Point p);
	void showTack(float delay,Point p);
	//��attack���м����˺����㣬�������Ŀ��ƻᷴ����������������
	void showAttack(Card* c,bool attackAble,Player* p);
	void showDefense();
	void showDie();
	void showBack(bool);
	
	void changeHp(int hp);
public :
	static const Dir up = 1,down = -1;
private:
	int m_id;
	int m_hp, m_attack, m_mana,m_range;
	int m_skillId;
	bool isDie,isBack;
	Dir m_dir;
	Sprite* m_sprite;
	DataManager* m_dataManager;
	ActionCounter* m_actionCounter;
	//�����ϵĻ���
	Sprite* draw;
	Sprite* back;

	LabelTTF *m_hpLabel, *m_manaLabel, *m_attackLabel, *m_rangeLabel;
};

