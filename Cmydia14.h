#pragma once


// Cmydia14 �Ի���

class Cmydia14 : public CDialogEx
{
	DECLARE_DYNAMIC(Cmydia14)

public:
	Cmydia14(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Cmydia14();

// �Ի�������
	enum { IDD = IDD_DIALOG12 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
