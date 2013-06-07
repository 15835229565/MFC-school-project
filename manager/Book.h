// Book.h: interface for the CBook class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BOOK_H__8F1878CD_3FF2_49C2_86D4_9B0F230959D4__INCLUDED_)
#define AFX_BOOK_H__8F1878CD_3FF2_49C2_86D4_9B0F230959D4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CBook  
{
public:
	CBook(CString bname, CString author, CString bclass, int year, int tnum, int hot);
	bool available();     //�������Ƿ�ɽ�,tnum�Ƿ�>0
	void addHot();        //�����ȶ�
	int getYear();        //��ȡ���
	CString getName();    //��ȡ����
	CString getAuthor();  //��ȡ����
	int getHot();         //��ȡ�ȶ�
	CString getClass();   //��ȡ����
	int getNum();         //��ȡ��ǰ����
	void delNum();        //��������,ÿ��һ��ʱ 
	void addNum();        //��������,ÿ��һ��ʱ
	void setBookInfo(CString newbname, CString newauthor, CString newbclass, int newyear, int newtnum);   //Ϊ����Ա�ṩͼ��ģ���޸Ĳ����ӿ�
protected:
	CString bname,    //����
		author,       //����
		bclass;       //��������
	int year,         //���
		tnum,         //��ǰ����
		hot;          //�ȶ�
};

#endif // !defined(AFX_BOOK_H__8F1878CD_3FF2_49C2_86D4_9B0F230959D4__INCLUDED_)
