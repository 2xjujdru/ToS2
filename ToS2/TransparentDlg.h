#pragma once


// CTransparentDlg ��ܤ��

class CTransparentDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CTransparentDlg)

public:
	CTransparentDlg(CWnd* pParent = NULL);   // �зǫغc�禡
	virtual ~CTransparentDlg();

// ��ܤ�����
	enum { IDD = IDD_TRANSPARENT_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �䴩

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClose();
};
