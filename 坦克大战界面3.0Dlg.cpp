
// ̹�˴�ս����3.0Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "̹�˴�ս����3.0.h"
#include "̹�˴�ս����3.0Dlg.h"
#include "afxdialogex.h"
#include"resource.h"
#include"windows.h"
#include"Cmydia4.h"
#include"Cmydia5.h"
#include "mmsystem.h"
#include<stdio.h>
#pragma  comment(lib,"WinMM.Lib")

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

Cmydia4 Cm;
BOOL np=false;
int nm=0;

// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX};

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// C̹�˴�ս����30Dlg �Ի���



C̹�˴�ս����30Dlg::C̹�˴�ս����30Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(C̹�˴�ս����30Dlg::IDD, pParent)
{

	m_hIcon = AfxGetApp()->LoadIcon(IDI_ICON2);
	//  rect = 0;
}

void C̹�˴�ս����30Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//  DDX_Control(pDX, IDC_BUTTON7, m_win);
}

BEGIN_MESSAGE_MAP(C̹�˴�ս����30Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON5, &C̹�˴�ս����30Dlg::OnClickedButton5)
ON_WM_SIZE()
ON_NOTIFY(BCN_DROPDOWN, IDC_BUTTON7, &C̹�˴�ս����30Dlg::OnDropdownButton7)
ON_BN_CLICKED(8, &C̹�˴�ս����30Dlg::OnBnClicked8)
ON_BN_CLICKED(IDC_BUTTON4, &C̹�˴�ս����30Dlg::OnBnClickedButton4)
ON_BN_CLICKED(8, &C̹�˴�ս����30Dlg::OnBnClicked8)
ON_BN_CLICKED(IDC_BUTTON2, &C̹�˴�ս����30Dlg::OnClickedButton2)
ON_BN_CLICKED(IDC_BUTTON6, &C̹�˴�ս����30Dlg::OnBnClickedButton6)
ON_BN_CLICKED(IDC_BUTTON7, &C̹�˴�ս����30Dlg::OnBnClickedButton7)
END_MESSAGE_MAP()


// C̹�˴�ս����30Dlg ��Ϣ�������

BOOL C̹�˴�ս����30Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	SetTimer(1,1000,NULL);
	GetClientRect(&rect);
    oSize.x=rect.right-rect.left;
	oSize.y=rect.bottom-rect.top;
//...
	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void C̹�˴�ս����30Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void C̹�˴�ս����30Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR C̹�˴�ս����30Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}




void C̹�˴�ս����30Dlg::OnClickedButton5()
{
	Cmydia4* pOneDlgObj1 = new Cmydia4; 
	if ( pOneDlgObj1) 
	{ 
	BOOL ret = pOneDlgObj1->Create(IDD_DIALOG3,this); 
	} 
	pOneDlgObj1->ShowWindow(SW_SHOW);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
void C̹�˴�ս����30Dlg::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);
	 if (nType==SIZE_RESTORED || nType==SIZE_MAXIMIZED)  
    {  
                 
                float   ratio[2];  
                POINT   newDialogSize;  
                CRect   newRect;  
                GetClientRect(&newRect);  
                newDialogSize.x = newRect.right - newRect.left;  
                newDialogSize.y = newRect.bottom - newRect.top;  
                ratio[0]    = (float)newDialogSize.x / oSize.x;  
                ratio[1]    = (float)newDialogSize.y / oSize.y;  
                CRect Rect;  
                int woc;  
                CPoint OldTLPoint, NewTLPint;  
                CPoint OldBRPoint, NewBRPint;  
                HWND  hwndChild = ::GetWindow(m_hWnd,GW_CHILD);  
                while(hwndChild)  
                {   
                       woc  = ::GetDlgCtrlID(hwndChild);  
                       GetDlgItem(woc)->GetWindowRect(Rect);  
                       ScreenToClient(Rect);  
                       OldTLPoint = Rect.TopLeft();  
                       NewTLPint.x  = long(OldTLPoint.x*ratio[0]);  
                       NewTLPint.y  = long(OldTLPoint.y*ratio[1]);  
                       OldBRPoint   = Rect.BottomRight();  
                       NewBRPint.x  = long(OldBRPoint.x*ratio[0]);  
                       NewBRPint.y  = long(OldBRPoint.y*ratio[1]);  
                       Rect.SetRect(NewTLPint,NewBRPint);  
                       GetDlgItem(woc)->MoveWindow(Rect,TRUE);  
                       hwndChild=::GetWindow(hwndChild, GW_HWNDNEXT);  
               }   
  
                oSize   = newDialogSize;      
  
    }
	// TODO: �ڴ˴������Ϣ����������
}


void C̹�˴�ս����30Dlg::OnDropdownButton7(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMBCDROPDOWN pDropDown = reinterpret_cast<LPNMBCDROPDOWN>(pNMHDR);
		*pResult = 0;
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	*pResult = 0;
}



void C̹�˴�ս����30Dlg::OnBnClickedButton4()
{
		 Cmydia4* pOneDlgObj2= new  Cmydia4; 
	if (  pOneDlgObj2) 
	{ 
	BOOL ret = pOneDlgObj2->Create(IDD_DIALOG4,this); 
	} 
	pOneDlgObj2->ShowWindow(SW_SHOW);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//PlaySound(NULL ,NULL,SND_LOOP|SND_ASYNC);
}



/*void C̹�˴�ս����30Dlg::OnClickedButton1()
{
	PlaySound(L"C:\\Users\\Seavan_CC\\Desktop\\Tank\\res\\sulian" ,NULL,SND_FILENAME|SND_ASYNC); //��������
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}*/


/*void C̹�˴�ս����30Dlg::OnBnClickedButton8()
{
	PlaySound(NULL ,NULL,SND_LOOP|SND_ASYNC);//�ر�����
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}*/


void C̹�˴�ս����30Dlg::OnBnClicked8()
{
		 Cmydia4* pOneDlgObj3 = new  Cmydia4; 
	if (  pOneDlgObj3) 
	{ 
	BOOL ret = pOneDlgObj3->Create(IDD_DIALOG4,this); 
	} 
	pOneDlgObj3->ShowWindow(SW_SHOW);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void C̹�˴�ս����30Dlg::OnClickedButton2()
{
	 Cmydia4* pOneDlgObj4 = new  Cmydia4; 
	if (  pOneDlgObj4) 
	{ 
	BOOL ret = pOneDlgObj4->Create(IDD_DIALOG4,this); 
	} 
	pOneDlgObj4->ShowWindow(SW_SHOW);

	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
C̹�˴�ս����30Dlg::~C̹�˴�ս����30Dlg(){
		
}



void C̹�˴�ս����30Dlg::OnBnClickedButton6()
{
	 C̹�˴�ս����30Dlg::OnOK();
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void C̹�˴�ս����30Dlg::OnBnClickedButton7()
{
	 Cmydia5* pOneDlgObj5 = new  Cmydia5; 
	if (  pOneDlgObj5) 
	{ 
	BOOL ret = pOneDlgObj5->Create(IDD_DIALOG5,this); 
	} 
	pOneDlgObj5->ShowWindow(SW_SHOW);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
