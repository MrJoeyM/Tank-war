// Cmydia5.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "̹�˴�ս����3.0.h"
#include "Cmydia5.h"
#include "afxdialogex.h"
#include"resource.h"
#include"windows.h"
#include "mmsystem.h"
#include<stdio.h>
#pragma  comment(lib,"WinMM.Lib")
#pragma comment( lib, "Winmm.lib" )

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// Cmydia5 �Ի���
int nEditFlag=0;

IMPLEMENT_DYNAMIC(Cmydia5, CDialogEx)

Cmydia5::Cmydia5(CWnd* pParent /*=NULL*/)
	: CDialogEx(Cmydia5::IDD, pParent)
{

}

Cmydia5::~Cmydia5()
{
}

void Cmydia5::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Cmydia5, CDialogEx)

	ON_BN_CLICKED(IDC_BUTTON9, &Cmydia5::OnBnClickedButton9)

	ON_BN_CLICKED(IDC_BUTTON25, &Cmydia5::OnBnClickedButton25)
	ON_BN_CLICKED(IDC_BUTTON26, &Cmydia5::OnBnClickedButton26)
	ON_BN_CLICKED(IDC_BUTTON27, &Cmydia5::OnBnClickedButton27)
END_MESSAGE_MAP()


// Cmydia5 ��Ϣ�������


/*void Cmydia5::OnBnClickedButton22()
{
	//
	MessageBox(_T("error"));
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}

*/
void Cmydia5::OnBnClickedButton9()
{
	PlaySound(NULL ,NULL,SND_LOOP|SND_ASYNC);//�ر�����
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}




void Cmydia5::OnBnClickedButton25()
{
	PlaySound((LPCTSTR)IDR_WAVE1, AfxGetInstanceHandle(), SND_RESOURCE | SND_ASYNC); //��������
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void Cmydia5::OnBnClickedButton26()
{
	nEditFlag=1;
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void Cmydia5::OnBnClickedButton27()
{
	nEditFlag=2;
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
