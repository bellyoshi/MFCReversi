
// MFCAppReversi1View.h : CMFCAppReversi1View クラスのインターフェイス
//

#pragma once


class CMFCAppReversi1View : public CView
{
protected: // シリアル化からのみ作成します。
	CMFCAppReversi1View() noexcept;
	DECLARE_DYNCREATE(CMFCAppReversi1View)

// 属性
public:
	CMFCAppReversi1Doc* GetDocument() const;

// 操作
public:

// オーバーライド
public:
	virtual void OnDraw(CDC* pDC);  // このビューを描画するためにオーバーライドされます。
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 実装
public:
	virtual ~CMFCAppReversi1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成された、メッセージ割り当て関数
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCAppReversi1View.cpp のデバッグ バージョン
inline CMFCAppReversi1Doc* CMFCAppReversi1View::GetDocument() const
   { return reinterpret_cast<CMFCAppReversi1Doc*>(m_pDocument); }
#endif

