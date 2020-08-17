// SeparatorDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Separator.h"
#include "SeparatorDlg.h"

#include "UTSampleAbout.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSeparatorDlg dialog

CSeparatorDlg::CSeparatorDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSeparatorDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSeparatorDlg)
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CSeparatorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSeparatorDlg)
	DDX_Control(pDX, IDC_SEPARATOR_VERTRIGHT, m_ctlSepVertRight);
	DDX_Control(pDX, IDC_SEPARATOR_VERTPLAIN, m_ctlSepVertPlain);
	DDX_Control(pDX, IDC_SEPARATOR_VERTLEFT, m_ctlSepVertLeft);
	DDX_Control(pDX, IDC_SEPARATOR_VERTCENTER, m_ctlSepVertCenter);
	DDX_Control(pDX, IDC_SEPARATOR_HORZRIGHT, m_ctlSepHorzRight);
	DDX_Control(pDX, IDC_SEPARATOR_HORZPLAIN, m_ctlSepHorzPlain);
	DDX_Control(pDX, IDC_SEPARATOR_HORZLEFT, m_ctlSepHorzLeft);
	DDX_Control(pDX, IDC_SEPARATOR_HORZCENTER, m_ctlSepHorzCenter);
	DDX_Control(pDX, IDC_SEPARATOR_CUSTOMTEXT, m_ctlSepCustomText);
	DDX_Control(pDX, IDC_SEPARATOR_CUSTOMLINE, m_ctlSepCusomLine);
	DDX_Control(pDX, IDC_SEPARATOR_HEADER, m_ctlSeparatorHeader);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CSeparatorDlg, CDialog)
	//{{AFX_MSG_MAP(CSeparatorDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON_ABOUT, OnButtonAbout)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSeparatorDlg message handlers

BOOL CSeparatorDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	// set text color and font for separator
	static CFont fontHeader;
	VERIFY(fontHeader.CreatePointFont(140,_T("Times New Roman")));
	m_ctlSeparatorHeader.SetFont(&fontHeader);
	m_ctlSeparatorHeader.SetTextColor(RGB(128,0,0));
	/////////////////////

	// setup vertically oriented separators
	static CFont fontVertEnabled;
	VERIFY(fontVertEnabled.CreatePointFont(120,_T("Times New Roman")));
	m_ctlSepVertRight.SetVertOriented();
	m_ctlSepVertRight.SetFont(&fontVertEnabled);
	m_ctlSepVertPlain.SetVertOriented();
	m_ctlSepVertLeft.SetVertOriented();
	m_ctlSepVertLeft.SetFont(&fontVertEnabled);
	m_ctlSepVertCenter.SetVertOriented();
	m_ctlSepVertCenter.SetFont(&fontVertEnabled);
	/////////////////////

	// setup customized separators
	static CFont fontCustom;
	VERIFY(fontCustom.CreatePointFont(120,_T("Arial")));
	m_ctlSepCustomText.SetFont(&fontCustom);
	m_ctlSepCustomText.SetTextColor(RGB(0,0,128));
	m_ctlSepCustomText.SetWindowText(_T("Font and Color"));

	m_ctlSepCusomLine.SetSeparatorColors(RGB(128,0,128),RGB(0,255,0));
	///////////////////////

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CSeparatorDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		OnButtonAbout();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CSeparatorDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CSeparatorDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CSeparatorDlg::OnButtonAbout() 
{
	// TODO: Add your control notification handler code here
	
		CUTSampleAboutDlg dlgAbout(IDR_MAINFRAME,ID_DESCRIPTION_FILE);
		dlgAbout.DoModal();
}
