#pragma once


// Cmydia5 �Ի���

class Cmydia5 : public CDialogEx
{
	DECLARE_DYNAMIC(Cmydia5)

public:
	Cmydia5(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Cmydia5();

// �Ի�������
	enum { IDD = IDD_DIALOG5 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton25();
	afx_msg void OnBnClickedButton26();
	afx_msg void OnBnClickedButton27();
};
