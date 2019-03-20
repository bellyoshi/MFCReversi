
// MFCAppReversi1View.cpp : CMFCAppReversi1View クラスの実装
//

#include "stdafx.h"
// SHARED_HANDLERS は、プレビュー、縮小版、および検索フィルター ハンドラーを実装している ATL プロジェクトで定義でき、
// そのプロジェクトとのドキュメント コードの共有を可能にします。
#ifndef SHARED_HANDLERS
#include "MFCAppReversi1.h"
#endif

#include "MFCAppReversi1Doc.h"
#include "MFCAppReversi1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCAppReversi1View

IMPLEMENT_DYNCREATE(CMFCAppReversi1View, CView)

BEGIN_MESSAGE_MAP(CMFCAppReversi1View, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CMFCAppReversi1View コンストラクション/デストラクション

CMFCAppReversi1View::CMFCAppReversi1View() noexcept
{
	// TODO: 構築コードをここに追加します。

}

CMFCAppReversi1View::~CMFCAppReversi1View()
{
}

BOOL CMFCAppReversi1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: この位置で CREATESTRUCT cs を修正して Window クラスまたはスタイルを
	//  修正してください。

	return CView::PreCreateWindow(cs);
}

// CMFCAppReversi1View 描画

void CMFCAppReversi1View::OnDraw(CDC* /*pDC*/)
{
	CMFCAppReversi1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: この場所にネイティブ データ用の描画コードを追加します。
}

void CMFCAppReversi1View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CMFCAppReversi1View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CMFCAppReversi1View の診断

#ifdef _DEBUG
void CMFCAppReversi1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCAppReversi1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCAppReversi1Doc* CMFCAppReversi1View::GetDocument() const // デバッグ以外のバージョンはインラインです。
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCAppReversi1Doc)));
	return (CMFCAppReversi1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCAppReversi1View メッセージ ハンドラー
