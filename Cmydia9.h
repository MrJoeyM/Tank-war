#include"Thing.h"
// TankGame2Dlg.h : ͷ�ļ�
DWORD WINAPI MyPaint2(LPVOID lpParam);
DWORD WINAPI InitTank2(LPVOID lpParam);
DWORD WINAPI EnemyMove02(LPVOID lpParam);
DWORD WINAPI EnemyMove12(LPVOID lpParam);
DWORD WINAPI EnemyMove22(LPVOID lpParam);
DWORD WINAPI EnemyMove32(LPVOID lpParam);
DWORD WINAPI EnemyMove42(LPVOID lpParam);
DWORD WINAPI EnemyMove52(LPVOID lpParam);
DWORD WINAPI EnemyMove62(LPVOID lpParam);
DWORD WINAPI EnemyMove72(LPVOID lpParam);
DWORD WINAPI PlayerButtle2(LPVOID lpParam);
DWORD WINAPI PlayerMove2(LPVOID lpParam);



#pragma once


// Cmydia9 �Ի���

class Cmydia9 : public CDialogEx
{
	DECLARE_DYNAMIC(Cmydia9)

public:
	Cmydia9(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Cmydia9();

// �Ի�������
	enum { IDD = IDD_DIALOG7 };

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
	BOOL Cmydia9::PreTranslateMessage(MSG*pMsg);//�����ɼ���Ϣ����
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
