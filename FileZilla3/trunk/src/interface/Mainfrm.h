#ifndef __MAINFRM_H__
#define __MAINFRM_H__

class CStatusView;
class CQueueView;
class CLocalTreeView;
class CLocalListView;
class CRemoteTreeView;
class CRemoteListView;

class CMainFrame : public wxFrame
{
public:
	CMainFrame();
	virtual ~CMainFrame();
protected:
	bool CreateMenus();
	bool CreateQuickconnectBar();

	wxStatusBar *m_pStatusBar;
	wxMenuBar	*m_pMenuBar;
	wxPanel	*m_pQuickconnectBar;
	wxSplitterWindow *m_pTopSplitter;
	wxSplitterWindow *m_pBottomSplitter;
	wxSplitterWindow *m_pViewSplitter;
	wxSplitterWindow *m_pLocalSplitter;
	wxSplitterWindow *m_pRemoteSplitter;

	CStatusView *m_pStatusView;
	CQueueView *m_pQueueView;
	CLocalTreeView *m_pLocalTreeView;
	CLocalListView *m_pLocalListView;
	CRemoteTreeView *m_pRemoteTreeView;
	CRemoteListView *m_pRemoteListView;

	// Event handlers
	void OnSize(wxSizeEvent& event);
	void OnViewSplitterPosChanged(wxSplitterEvent& event);
	void OnMenuHandler(wxCommandEvent &event);
	void OnQuickconnect(wxCommandEvent &event);
	void OnEngineEvent(wxEvent &event);

	float m_ViewSplitterSashPos;
	bool m_bInitDone;

	CFileZillaEngine *m_pEngine;

	DECLARE_EVENT_TABLE()
};

#endif

