
// MFCAppReversi1.h : MFCAppReversi1 アプリケーションのメイン ヘッダー ファイル
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'stdafx.h' をインクルードしてください"
#endif

#include "resource.h"       // メイン シンボル


// CMFCAppReversi1App:
// このクラスの実装については、MFCAppReversi1.cpp を参照してください
//

class CMFCAppReversi1App : public CWinAppEx
{
public:
	CMFCAppReversi1App() noexcept;


// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCAppReversi1App theApp;
