#pragma once


// Cmydia2 �Ի���

class Cmydia2 : public CDialogEx
{
	DECLARE_DYNAMIC(Cmydia2)

public:
	Cmydia2(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Cmydia2();

// �Ի�������
	enum { IDD = IDD_DIALOG2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton1();
};
