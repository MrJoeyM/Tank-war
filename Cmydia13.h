#pragma once


// Cmydia13 �Ի���

class Cmydia13 : public CDialogEx
{
	DECLARE_DYNAMIC(Cmydia13)

public:
	Cmydia13(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Cmydia13();

// �Ի�������
	enum { IDD = IDD_DIALOG11 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
};
