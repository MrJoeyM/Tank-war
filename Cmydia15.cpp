// Cmydia15.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "̹�˴�ս����3.0.h"
#include "Cmydia15.h"
#include "afxdialogex.h"
#include"Cmydia12.h"
#include"̹�˴�ս����3.0Dlg.h"

// Cmydia15 �Ի���

IMPLEMENT_DYNAMIC(Cmydia15, CDialogEx)

Cmydia15::Cmydia15(CWnd* pParent /*=NULL*/)
	: CDialogEx(Cmydia15::IDD, pParent)
{

}

Cmydia15::~Cmydia15()
{
}

void Cmydia15::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Cmydia15, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Cmydia15::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Cmydia15::OnBnClickedButton2)
END_MESSAGE_MAP()


// Cmydia15 ��Ϣ�������


void Cmydia15::OnBnClickedButton1()
{
	 Cmydia12* pOneDlgObj6 = new  Cmydia12; 
	if (  pOneDlgObj6) 
	{ 
	BOOL ret = pOneDlgObj6->Create(IDD_DIALOG9,this); 
	} 
	pOneDlgObj6->ShowWindow(SW_SHOW);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void Cmydia15::OnBnClickedButton2()
{
	 C̹�˴�ս����30Dlg* pOneDlgObj6 = new   C̹�˴�ս����30Dlg; 
	if (  pOneDlgObj6) 
	{ 
	BOOL ret = pOneDlgObj6->Create(IDD_MY30_DIALOG,this); 
	} 
	pOneDlgObj6->ShowWindow(SW_SHOW);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
