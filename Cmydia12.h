#pragma once


// Cmydia12 �Ի���

class Cmydia12 : public CDialogEx
{
	DECLARE_DYNAMIC(Cmydia12)

public:
	Cmydia12(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Cmydia12();

// �Ի�������
	enum { IDD = IDD_DIALOG9 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
