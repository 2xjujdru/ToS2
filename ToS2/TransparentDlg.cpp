// TransparentDlg.cpp : ��@��
//

#include "stdafx.h"
#include "ToS2.h"
#include "TransparentDlg.h"
#include "afxdialogex.h"


// CTransparentDlg ��ܤ��

IMPLEMENT_DYNAMIC(CTransparentDlg, CDialogEx)

CTransparentDlg::CTransparentDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CTransparentDlg::IDD, pParent)
{

}

CTransparentDlg::~CTransparentDlg()
{
}

void CTransparentDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CTransparentDlg, CDialogEx)
	ON_WM_CLOSE()
END_MESSAGE_MAP()


// CTransparentDlg �T���B�z�`��


void CTransparentDlg::OnClose()
{
	// TODO: �b���[�J�z���T���B�z�`���{���X�M (��) �I�s�w�]��

	// CDialogEx::OnClose();
}
