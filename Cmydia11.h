#pragma once


// Cmydia11 �Ի���

class Cmydia11 : public CDialogEx
{
	DECLARE_DYNAMIC(Cmydia11)

public:
	Cmydia11(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Cmydia11();

// �Ի�������
	enum { IDD = IDD_DIALOG10 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
