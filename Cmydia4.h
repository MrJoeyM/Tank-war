
#include "stdafx.h"
#pragma once
#include "afxwin.h"
#include"Cmydia10.h"
// Cmydia4 �Ի���
  
class Cmydia4 : public CDialogEx
{
	DECLARE_DYNAMIC(Cmydia4)

public:
	Cmydia4(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Cmydia4();
	HBITMAP hBitmap ;
// �Ի�������
	enum { IDD = IDD_DIALOG4 };
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton21();
};
