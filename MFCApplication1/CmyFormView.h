#pragma once



// CmyFormView ������ͼ

class CmyFormView : public CFormView
{
	DECLARE_DYNCREATE(CmyFormView)

protected:
	CmyFormView();           // ��̬������ʹ�õ��ܱ����Ĺ��캯��
	virtual ~CmyFormView();

public:
	enum { IDD = IDD_DIALOG1 };
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};


