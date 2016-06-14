#pragma once

#include "cocos2d.h"
#include "TouchLayer.h"
#include "DataManager.h"
#include "OnPlayerBehaviorChangeListener.h"
#include "FlowWord.h"
#include "ActionCounter.h"
#include "OnActionEndListener.h"

USING_NS_CC;

#define tttime 2.0f

class Player : public Node,public OnActionEndListener
{
public:
	Player();
	~Player();
	virtual bool init();
	CREATE_FUNC(Player);

	virtual void onActionEnd();

	//��ȡ����
	void readCards(); 
	//д������
	void writeCards(); 
	//�����м�������
	void addToCards(int id); 
	//��ʼ����ɫ
	void initPlayer(); 
	//������idʱ�����ʼ����ɫͷ���Լ���ȡ����
	void setId(int);
	void setDataManager(DataManager* d);
	void setOnPlayerBehaviorChangeListener(OnPlayerBehaviorChangeListener* opb);
	void setOnTouchListener(OnTouchListener* ot);
	void setMana(int mana);
	void groundEnd();
	void openAiControl();
	void setHp(int hp);
	//����Ǽ�����dirΪ1������Ϊ-1
	int getDir();
	int getId();
	void setIsDie(bool);
	bool getIsDie();
	void setTouchEnable(bool touch);
	void changeLocationCard(int from,int to);

	void groundStart();
	//����
	void tackCard(); 
	//����
	bool disCard(int cardId,int location); 
	//�޷���ֵ�ĳ��ƺ���
	void disCardHand(int cardId, int location);
	//���տ���
	void recoveryCard(int cardId); 
	void removeGroundCardsById(int id);
	
	//˵��
	void say(std::string s);
	//�����Ƿ�������Լ�
	void setIsMine(bool isMine);
	bool getIsMine();
	bool getIsPlaying();
	void setIsPlaying(bool );
	//ִ�о��� ����Ϊ ��������id��λ��
	void execute(int, int, int);

	//�õ����Ͽ��Ƶ�����
	int* getCardsOnGround();

	//�ı�Ѫ��
	void changeHp(int hp);
	void showDie();
	int minLocation, maxLocation;
private:
	Sprite* m_photo;
	int m_mana;
	int m_id;
	int m_hp;
	bool m_isMine;//�Ƿ�������Լ�
	bool isDie;
	
	bool isPlaying;
	int dir;

	ValueVector cards; //��ɫӵ�е�����

	ValueVector cardsOnHand; //��ɫ���ϵĿ���
	
	//ValueVector cardsOnGround_location;//��ɫ���ϵĿ���λ��
	//ValueVector cardsOnGround_id; //��ɫ���Ͽ���λ�ö�Ӧ����
	int* cardOnGround_id; //��ɫ���ϵĿ���

	LabelTTF* lb;
	LabelTTF* m_hpLabel;

	TouchLayer* m_touchLayer;
	DataManager* m_dataManager;
	OnPlayerBehaviorChangeListener* m_onPlayerBehaviorChangeListener;

	ActionCounter* m_actionCounter;
	void closeLabel(float dt);
};