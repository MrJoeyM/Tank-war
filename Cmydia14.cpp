// Cmydia14.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "̹�˴�ս����3.0.h"
#include "Cmydia14.h"
#include "afxdialogex.h"
#include"Cmydia11.h"
#include"̹�˴�ս����3.0Dlg.h"

// Cmydia14 �Ի���

IMPLEMENT_DYNAMIC(Cmydia14, CDialogEx)

Cmydia14::Cmydia14(CWnd* pParent /*=NULL*/)
	: CDialogEx(Cmydia14::IDD, pParent)
{

}

Cmydia14::~Cmydia14()
{
}

void Cmydia14::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Cmydia14, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Cmydia14::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Cmydia14::OnBnClickedButton2)
END_MESSAGE_MAP()


// Cmydia14 ��Ϣ�������


void Cmydia14::OnBnClickedButton1()
{
	Cmydia11* pOneDlgObj6 = new  Cmydia11; 
	if (  pOneDlgObj6) 
	{ 
	BOOL ret = pOneDlgObj6->Create(IDD_DIALOG10,this); 
	} 
	pOneDlgObj6->ShowWindow(SW_SHOW);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void Cmydia14::OnBnClickedButton2()
{
	C̹�˴�ս����30Dlg* pOneDlgObj6 = new  C̹�˴�ս����30Dlg; 
	if (  pOneDlgObj6) 
	{ 
	BOOL ret = pOneDlgObj6->Create(IDD_MY30_DIALOG,this); 
	} 
	pOneDlgObj6->ShowWindow(SW_SHOW);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
