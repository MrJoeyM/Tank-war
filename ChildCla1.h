#pragma once


// CChildCla1 �Ի���

class CChildCla1 : public CDialogEx
{
	DECLARE_DYNAMIC(CChildCla1)

public:
	CChildCla1(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CChildCla1();

// �Ի�������
	enum { IDD = IDD_DIALOG3 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	HICON m_hIcon;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CRect rect;
	afx_msg void OnIddDialog3();
	virtual BOOL OnInitDialog();
	POINT oSize;
	afx_msg void OnSize(UINT nType, int cx, int cy);
};
