
// ̹�˴�ս����3.0.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// C̹�˴�ս����30App:
// �йش����ʵ�֣������ ̹�˴�ս����3.0.cpp
//

class C̹�˴�ս����30App : public CWinApp
{
public:
	C̹�˴�ս����30App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern C̹�˴�ս����30App theApp;