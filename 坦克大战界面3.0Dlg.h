
// ̹�˴�ս����3.0Dlg.h : ͷ�ļ�
//

#pragma once
#include"ChildCla1.h"
#include"Cmydia4.h"
#include "afxwin.h"

// C̹�˴�ս����30Dlg �Ի���
class C̹�˴�ս����30Dlg : public CDialogEx
{
// ����
public:
	C̹�˴�ս����30Dlg(CWnd* pParent = NULL);
	~C̹�˴�ս����30Dlg();// ��׼���캯��
// �Ի�������
	enum { IDD = IDD_MY30_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;
	//HWND hDlg;
	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	CChildCla1 m_Cc1;
	CRect m_DC;
//	CRect m_rect;
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnClickedButton7();
	private:  

public:
	afx_msg void OnClickedButton5();
	afx_msg void OnBnClickedButton2();
//	afx_msg void OnSizeClipboard(CWnd* pClipAppWnd, HGLOBAL hRect);
//	afx_msg void OnSize(UINT nType, int cx, int cy);
//	CRect m_rect;
//	afx_msg void OnSize(UINT nType, int cx, int cy);
//	int rect;
	CRect rect;
	POINT oSize;
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnDropdownButton7(NMHDR *pNMHDR, LRESULT *pResult);
//	CButton m_win;
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClicked8();
	afx_msg void OnClickedButton2();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
};
