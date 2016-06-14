#pragma once
#include "cocos2d.h"
USING_NS_CC;

class Entity : public Node
{
public :
	Entity();
	~Entity();
	static const int BALL = 0xffffff;
	virtual bool init();
	/*
		�̳д������Ӧ��ʵ�ָ���һ��position����Entity����Ϊ���position
		��ͼ��,�˺������Ѿ�����sprite��λ��ΪEntity���ڵ�λ�á�
		�����������ĵط�����sprite��λ��
	*/
	virtual void bindSprite(Sprite* sprite);
	//���ͼ��
	virtual Sprite* getSprite();
	virtual void setId(int id){ this->id = id; };
	virtual int getId(){ return id; };
private:
	Sprite* m_sprite;
	//��ʶ��
	int id;
};