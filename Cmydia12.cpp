// Cmydia12.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "̹�˴�ս����3.0.h"
#include "Cmydia12.h"
#include "afxdialogex.h"
#include"Cmydia10.h"

// Cmydia12 �Ի���

IMPLEMENT_DYNAMIC(Cmydia12, CDialogEx)

Cmydia12::Cmydia12(CWnd* pParent /*=NULL*/)
	: CDialogEx(Cmydia12::IDD, pParent)
{

}

Cmydia12::~Cmydia12()
{
}

void Cmydia12::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Cmydia12, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Cmydia12::OnBnClickedButton1)
END_MESSAGE_MAP()


// Cmydia12 ��Ϣ�������


void Cmydia12::OnBnClickedButton1()
{
	  Cmydia10* pOneDlgObj9 = new  Cmydia10; 
	if (  pOneDlgObj9) 
	{ 
	BOOL ret = pOneDlgObj9->Create(IDD_DIALOG8,this); 
	} 
	pOneDlgObj9->ShowWindow(SW_SHOW);
	 Cmydia12::OnOK();
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
