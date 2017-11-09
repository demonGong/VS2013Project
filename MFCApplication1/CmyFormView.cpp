// CmyFormView.cpp : 实现文件
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


// CmyFormView 诊断

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


// CmyFormView 消息处理程序


void CmyFormView::OnBnClickedButton1()
{
	// TODO:  在此添加控件通知处理程序代码
	//AfxMessageBox(this,"FUCK GIT!");
}
