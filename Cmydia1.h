#pragma once


// Cmydia1 �Ի���

class Cmydia1 : public CDialogEx
{
	DECLARE_DYNAMIC(Cmydia1)

public:
	Cmydia1(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Cmydia1();

// �Ի�������
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
};
