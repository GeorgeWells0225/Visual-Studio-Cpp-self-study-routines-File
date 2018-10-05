
// MFCsystemDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCsystem.h"
#include "MFCsystemDlg.h"
#include<stdlib.h>
#include "afxdialogex.h"
#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup") 

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMFCsystemDlg 对话框



CMFCsystemDlg::CMFCsystemDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MFCSYSTEM_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCsystemDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMFCsystemDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CMFCsystemDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMFCsystemDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CMFCsystemDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CMFCsystemDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CMFCsystemDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CMFCsystemDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CMFCsystemDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CMFCsystemDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CMFCsystemDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CMFCsystemDlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &CMFCsystemDlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &CMFCsystemDlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &CMFCsystemDlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &CMFCsystemDlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &CMFCsystemDlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON16, &CMFCsystemDlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON17, &CMFCsystemDlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON18, &CMFCsystemDlg::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON19, &CMFCsystemDlg::OnBnClickedButton19)
END_MESSAGE_MAP()


// CMFCsystemDlg 消息处理程序

BOOL CMFCsystemDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
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

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CMFCsystemDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMFCsystemDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMFCsystemDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFCsystemDlg::OnBnClickedButton1()
{ 
	// TODO: 在此添加控件通知处理程序代码

    #include<stdlib.h>
	system("calc");
}


void CMFCsystemDlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
    #include<stdlib.h>
	system("\"D:\\Program Files\\EditPlus 4\\EditPlus.exe\"");

}


void CMFCsystemDlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码

	MessageBoxA(0,"你正在打开的是病毒软件，请关闭","Windows友情提示",1);
	system("taskkill /f /im EditPlus.exe");

}


void CMFCsystemDlg::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
#include<stdlib.h>
	system("\"C:\\Program Files\\Internet Explorer\\iexplore.exe\" http://www.baidu.com");
}


void CMFCsystemDlg::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	MessageBoxA(0, "你的电脑有木马病毒在监视你的电脑，为了您的安全，Windows即将关闭该网站", "Windows友情提示", 1);
	system("taskkill /f /im  iexplore.exe");

}


void CMFCsystemDlg::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
#include<stdlib.h>
	system("tasklist & pause");
	

}


void CMFCsystemDlg::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
#include<stdlib.h>
	system("ipconfig & pause");
}


void CMFCsystemDlg::OnBnClickedButton8()
{
	// TODO: 在此添加控件通知处理程序代码
    #include<stdlib.h>
	system("tasklist > D:\\进程.txt"); 
	system("D:\\进程.txt");
}


void CMFCsystemDlg::OnBnClickedButton9()
{
	// TODO: 在此添加控件通知处理程序代码

	system("type  \"D:\\进程.txt\" & pause");
}



void CMFCsystemDlg::OnBnClickedButton10()
{
	// TODO: 在此添加控件通知处理程序代码
	system("color 4f & title 微软安全局 & echo 你的所有文件将被销毁 & pause");
}


void CMFCsystemDlg::OnBnClickedButton11()
{
	// TODO: 在此添加控件通知处理程序代码
	system("E:\\1.mp3");

}


void CMFCsystemDlg::OnBnClickedButton12()
{
	// TODO: 在此添加控件通知处理程序代码

	system("del E:\\1.mp3");
}


void CMFCsystemDlg::OnBnClickedButton13()
{
	// TODO: 在此添加控件通知处理程序代码、

	system("appwiz.cpl");
}


void CMFCsystemDlg::OnBnClickedButton14()
{
	// TODO: 在此添加控件通知处理程序代码
	system("certmgr.msc");

}


void CMFCsystemDlg::OnBnClickedButton15()
{
	// TODO: 在此添加控件通知处理程序代码
	system("charmap");

}


void CMFCsystemDlg::OnBnClickedButton16()
{
	// TODO: 在此添加控件通知处理程序代码

	system("cleanmgr");

}


void CMFCsystemDlg::OnBnClickedButton17()
{
	// TODO: 在此添加控件通知处理程序代码
	system("shutdown -s -t 600");
}


void CMFCsystemDlg::OnBnClickedButton18()
{
	// TODO: 在此添加控件通知处理程序代码
	system("shutdown -a");

}


void CMFCsystemDlg::OnBnClickedButton19()
{
	// TODO: 在此添加控件通知处理程序代码
	system("colorcpl");
}
