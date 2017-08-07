
// PathFinderTestDlg.h : ͷ�ļ�
//

#pragma once

#include "nav.h"
#include <vector>
// CPathFinderTestDlg �Ի���
class CPathFinderTestDlg : public CDialogEx
{
// ����
public:
	CPathFinderTestDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_PATHFINDERTEST_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��

	enum CheckState {
		BLOCK = 0,
		BEGIN,
		OVER,
		DOOR
	};

	struct TileRect
	{
		int _index;
		int _block;
		int _xIndex;
		int _yIndex;
		CRect _rect;
	};
// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg int OnMouseActivate(CWnd* pDesktopWnd, UINT nHitTest, UINT message);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);

	void DrawMap();
	void DrawBlock(CPoint& pos);
	void DrawBegin(CPoint& pos);
	void DrawOver(CPoint& pos);
	void DrawDoor(CPoint& pos);
	int GetRectIndex(CPoint& pos,int* xIndexPtr,int* yIndexPtr);
	TileRect* CreateTileRect(int index, int xIndex, int yIndex);
	void ClearCheck();

public:
	POINT _beginOffset;
	POINT _overOffset;
	int _tile;
	CheckState _checkState;
	std::vector<TileRect*> _blockVector;
	TileRect* _beginRect;
	TileRect* _overRect;

	int _width;
	int _heigh;
	char* _mapData;

	struct MeshContext* mesh_ctx;
	int xoffset;
	int yoffset;
	int scale;
	int polyBegin;
	vector3* vtBegin;
	int polyOver;
	vector3* vtOver;
	struct NavNode* polyPath;
	int sizePath;
	struct vector3* resultPath;
public:
	afx_msg void OnClickedCheck1();
	afx_msg void OnClickedCheck2();
	afx_msg void OnClickedCheck3();
	afx_msg void OnClickedCheck4();
	afx_msg void OnUpdateIddPathfindertestDialog(CCmdUI *pCmdUI);
	afx_msg void OnBnClickedButton2();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	
	afx_msg void OnBnClickedButton3();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnEnChangeEdit4();
};
