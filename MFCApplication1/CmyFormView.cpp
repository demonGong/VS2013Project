// CmyFormView.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "CmyFormView.h"


// CmyFormView

IMPLEMENT_DYNCREATE(CmyFormView, CFormView)

CmyFormView::CmyFormView()
	: CFormView(CmyFormView::IDD)
{

}

CmyFormView::~CmyFormView()
{
}

void CmyFormView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CmyFormView, CFormView)
	ON_BN_CLICKED(IDC_BUTTON1, &CmyFormView::OnBnClickedButton1)
END_MESSAGE_MAP()


// CmyFormView ���

#ifdef _DEBUG
void CmyFormView::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CmyFormView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CmyFormView ��Ϣ�������


void CmyFormView::OnBnClickedButton1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	//AfxMessageBox(this,"FUCK GIT!");
}
