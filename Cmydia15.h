#pragma once


// Cmydia15 �Ի���

class Cmydia15 : public CDialogEx
{
	DECLARE_DYNAMIC(Cmydia15)

public:
	Cmydia15(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Cmydia15();

// �Ի�������
	enum { IDD = IDD_DIALOG13 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
