#include "stdafx.h"
#include "Resource.h"

#if !defined(_Thing_H_)
#define _Thing_H_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Tank
{
public:
	int HP;          //��ɫ̹��Ϊ�ҷ�̹�� HP 0-5 ��ʼΪ3  ��ɫΪ�з�̹�� HP 0-3 ��ʼΪ3  ��ɫ̹��Ϊ�з�̹�� HP 0-5 ��ʼΪ5
	int Direct;      //̹�����ĸ��������� �ֱ�Ϊ up-1 right-2 down-3 left-4
	int Speed;       //̹���������ٶ� �ҷ�̹��(��)-��ʼ�ٶ�Ϊ10 �з�̹�˺�ɫ��ʼΪ10 ��ɫ��ʼΪ20
	int Attribute;   //̹���б�����û�е����� ��ʼΪ1 ��HPΪ0ʱ attributeΪ0
	int IsPlayer;    //1���ҷ�̹�� 2�ǵо�̹��
	int Mark;        //���̹������(�����ҷ�̹���������Ϊ9) 0-�ҷ�̹�� 1-8�ط�̹��
	CPoint Site;     //̹�����Լ���λ��
	CBitmap Image;   //̹�����Լ������ͼ��
	HBITMAP HImage;  //̹�����Լ��ļ���ͼ���ʽ
	bool move;
	Tank(){};        //��д���캯��
	///~Tank(){};
	Tank(Tank &tank){};
	 //��������
public:
	bool InitTank(int H,int Dir,int Spe,int Attr,int IsP,int Ma,CPoint Si);  //��ʼ��̹�˷�ͼ������ֵ
	bool LoadImage();   //��ʼ��̹��ͼ������ֵ
	bool Collision(CPoint *tank,int n);   //��ײ���
	void ChaseMode(CPoint player); //׷��ģʽ
	void RandomMode();//���ģʽ
	
};

class Bullet
{
public:
	int Direct;          //�ӵ��з��� Ϊ̹�˳�ʼ��ʱ��ķ���
	int Attribute;       //�ӵ������� 1Ϊ�ӵ���ʾ 0Ϊ�ӵ���ʧ
	CPoint Site;         //�ӵ���λ�� ���ݷ���̹��λ������ʼ��
	int Speed;           //�ӵ����ٶ� �ٶ�Ϊ10
	int IsPlayer;        //ͨ��ȷ���Ƿ���ҷ����ӵ���ȷ���ӵ�����
	CBitmap BImage;      //�����ӵ�����λͼ
	HBITMAP HBImage;     //����װ��λͼ��ʽ

	Bullet(){};
	Bullet(Bullet &bullet){};
	
public:
	bool InitBullet(int Dir,int Attr,int Spe,int IsP,CPoint Si);
	bool LoadImage();
	int Collision(CPoint *tank,int n);
	int Conflict(CPoint *wall,int n);
	bool InitAgain(CPoint p,int Dir);
	bool BulletMove();
};

class Props
{
public:
	int Attribute;            //��������1Ϊ���� 0Ϊ��ʧ
	int Mark;                 //���߱�ʶ 0Ϊֹͣʱ�� 1Ϊ��������λ�� 2Ϊ̹�˼�Ѫ 3Ϊ�޵� 4Ϊ̹��ȫ��1Ѫ
	int IsPlayer;             //�ж��Ƿ���ҳԵ�����
	CBitmap PImage;           //���ڵ��߼���λͼ
	HBITMAP HPImage;          //����װ��λͼ��ʽ
	CPoint Site;

	Props(){};
	Props(Props &props){};
	
public:
	bool InitProps(int Attr,int Ma,int IsP,CPoint Si);
	bool LoadImage();
	void GetSite(CPoint *tank,int n);
};

class Wall
{
public:
	int HP;
	int Attribute;
	int Mark;
	CPoint Site;    
	CBitmap WImage;   
	HBITMAP HWImage;

	Wall(){};
	Wall(Wall &wall){};

public:
	bool InitWall(int H,int Attr,int Ma,CPoint Si);
	bool LoadImage();
	bool Collision(CPoint *tank,int n);   //��ײ���
};

#endif !defined(_Thing_H_)