
// PathFinderTest.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CPathFinderTestApp: 
// �йش����ʵ�֣������ PathFinderTest.cpp
//

class CPathFinderTestApp : public CWinApp
{
public:
	CPathFinderTestApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CPathFinderTestApp theApp;