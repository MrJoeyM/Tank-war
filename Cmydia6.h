#include"Thing.h"
// TankGame2Dlg.h : ͷ�ļ�
DWORD WINAPI MyPaint(LPVOID lpParam);
DWORD WINAPI InitTank(LPVOID lpParam);
DWORD WINAPI EnemyMove0(LPVOID lpParam);
DWORD WINAPI EnemyMove1(LPVOID lpParam);
DWORD WINAPI EnemyMove2(LPVOID lpParam);
DWORD WINAPI EnemyMove3(LPVOID lpParam);
DWORD WINAPI EnemyMove4(LPVOID lpParam);
DWORD WINAPI EnemyMove5(LPVOID lpParam);
DWORD WINAPI EnemyMove6(LPVOID lpParam);
DWORD WINAPI EnemyMove7(LPVOID lpParam);
DWORD WINAPI PlayerButtle(LPVOID lpParam);
DWORD WINAPI PlayerMove(LPVOID lpParam);
DWORD WINAPI Fail(LPVOID lpParam);

#pragma once


// Cmydia6 �Ի���

class Cmydia6 : public CDialogEx
{
	DECLARE_DYNAMIC(Cmydia6)

public:
	Cmydia6(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Cmydia6();
	
// �Ի�������
	enum { IDD = IDD_DIALOG6 };
	//void Drump();
protected:
	HICON m_hIcon;

	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	HDC hdc,mdc,bufdc;//��һ����ĻDC �ڶ����ڴ�DC ����������DC (��������Կ���ֽ��
	HBITMAP BackGround,hBitmap,HMytankHP,HEnemyTotal;//��һ���Ǳ��� �ڶ�������Ļ ��������Tank�ģ�����ת��Ϊ���Ի���ֽ�ϵĸ�ʽ��
	CBitmap Back,MytankHP,BEnemyTotal;//��һ���Ǳ��� �ڶ�����Tank�����������յ����λͼ��
	Tank Player;//�Զ����̹����
	BOOL Cmydia6::PreTranslateMessage(MSG*pMsg);//�����ɼ���Ϣ����
	CPoint tank[9];
	CPoint wall[4];
	Tank Enemy[8];
	CPoint p;
	void InitCompareTank();
	int TotalEnemy;
	int itank;
	int mtank[8];
	Bullet BEnemy[8];
	Bullet BPlayer[3];
	int pi;
	Wall WGame[4];
	bool KeyLeft;
	bool KeyRight;
	bool KeyUp;
	bool KeyDown;
	bool KeySpace;
	bool control;
	
	bool ControlEnd[9];
	bool ControlEnd2[4];
	bool ControlTime[8];

	
};
