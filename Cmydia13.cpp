// Cmydia13.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "̹�˴�ս����3.0.h"
#include "Cmydia13.h"
#include "afxdialogex.h"
#include"Cmydia12.h"
#include"̹�˴�ս����3.0Dlg.h"

// Cmydia13 �Ի���

IMPLEMENT_DYNAMIC(Cmydia13, CDialogEx)

Cmydia13::Cmydia13(CWnd* pParent /*=NULL*/)
	: CDialogEx(Cmydia13::IDD, pParent)
{

}

Cmydia13::~Cmydia13()
{
}

void Cmydia13::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Cmydia13, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON2, &Cmydia13::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &Cmydia13::OnBnClickedButton1)
END_MESSAGE_MAP()


// Cmydia13 ��Ϣ�������


void Cmydia13::OnBnClickedButton2()
{
	 Cmydia12* pOneDlgObj6 = new  Cmydia12; 
	if (  pOneDlgObj6) 
	{ 
	BOOL ret = pOneDlgObj6->Create(IDD_DIALOG9,this); 
	} 
	pOneDlgObj6->ShowWindow(SW_SHOW);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void Cmydia13::OnBnClickedButton1()
{
	 C̹�˴�ս����30Dlg* pOneDlgObj6 = new   C̹�˴�ս����30Dlg; 
	if (  pOneDlgObj6) 
	{ 
	BOOL ret = pOneDlgObj6->Create(IDD_MY30_DIALOG,this); 
	} 
	pOneDlgObj6->ShowWindow(SW_SHOW);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
