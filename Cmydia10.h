#include"Thing.h"
// TankGame2Dlg.h : ͷ�ļ�
DWORD WINAPI MyPaint3(LPVOID lpParam);
DWORD WINAPI InitTank3(LPVOID lpParam);
DWORD WINAPI EnemyMove03(LPVOID lpParam);
DWORD WINAPI EnemyMove13(LPVOID lpParam);
DWORD WINAPI EnemyMove23(LPVOID lpParam);
DWORD WINAPI EnemyMove33(LPVOID lpParam);
DWORD WINAPI EnemyMove43(LPVOID lpParam);
DWORD WINAPI EnemyMove53(LPVOID lpParam);
DWORD WINAPI EnemyMove63(LPVOID lpParam);
DWORD WINAPI EnemyMove73(LPVOID lpParam);
DWORD WINAPI PlayerButtle3(LPVOID lpParam);
DWORD WINAPI PlayerMove3(LPVOID lpParam);


#pragma once


// Cmydia10 �Ի���

class Cmydia10 : public CDialogEx
{
	DECLARE_DYNAMIC(Cmydia10)

public:
	Cmydia10(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Cmydia10();

// �Ի�������
	enum { IDD = IDD_DIALOG8 };

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
	BOOL Cmydia10::PreTranslateMessage(MSG*pMsg);//�����ɼ���Ϣ����
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
