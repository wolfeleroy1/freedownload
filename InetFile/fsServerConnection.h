/*
  Free Download Manager Copyright (c) 2003-2016 FreeDownloadManager.ORG
*/

#if !defined(AFX_FSSERVERCONNECTION_H__0CD5653D_2D57_4456_B496_204556B72225__INCLUDED_)
#define AFX_FSSERVERCONNECTION_H__0CD5653D_2D57_4456_B496_204556B72225__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif 

#include <windows.h>
#include <wininet.h>
#include "fsinet.h"	
#include <fsString.h>
#include "fsSpeaking.h"

class fsInternetServerConnection : public fsSpeaking
{
public:
	
	INTERNET_PORT GetServerPort();
	
	LPCTSTR GetServerName();
	
	
	class fsInternetSession* GetSession();
	
	void CloseHandle();
	
	LPCTSTR GetLastError ();
	
	
	
	
	virtual fsInternetResult Connect (LPCTSTR pszServer, LPCTSTR pszUser, LPCTSTR pszPassword, INTERNET_PORT nPort) = NULL;
	
	
	fsInternetResult Initialize (class fsInternetSession *pSession);
	
	HINTERNET GetHandle();
	fsInternetServerConnection();
	virtual ~fsInternetServerConnection();

protected:
	INTERNET_PORT m_uPort;	
	fsString m_strServer;	
	TCHAR *m_pszLastError;	
	HINTERNET m_hServer;	
	class fsInternetSession* m_pSession;	
};

#endif 
