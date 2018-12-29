/**
 * \file
 * \version  $Id: zType.h  $
 * \author  
 * \date 
 * \brief �����������
 *
 * 
 */

#ifndef _zType_h_
#define _zType_h_
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>


#define SAFE_DELETE(x) { if (x) { delete (x); (x) = NULL; } }
#define SAFE_DELETE_VEC(x) { if (x) { delete [] (x); (x) = NULL; } }

/**
 * \brief ���ֽ��޷�������
 *
 */
typedef unsigned char BYTE;

/**
 * \brief ˫�ֽ��޷�������
 *
 */
typedef unsigned short WORD;

/**
 * \brief ˫�ֽڷ�������
 *
 */
typedef signed short SWORD;

/**
 * \brief ���ֽ��޷�������
 *
 */
typedef unsigned int DWORD;

/**
 * \brief ���ֽڷ�������
 *
 */
typedef signed int SDWORD;

/**
 * \brief ���ֽ��޷�������
 *
 */
typedef unsigned long long QWORD;

/**
 * \brief ���ֽڷ�������
 *
 */
typedef signed long long SQWORD;

/**
 * \brief ���ֵ���󳤶�
 */
#define MAX_NAMESIZE 32

/**
 * \brief �˺���󳤶�
 */
#define MAX_ACCNAMESIZE	48

/**
 * \brief IP��ַ��󳤶�
 *
 */
#define MAX_IP_LENGTH	16

/**
 * \brief ������������û���Ŀ
 *
 */
#define MAX_GATEWAYUSER 4000	

/**
 * \brief ������󳤶�
 *
 */
#define MAX_PASSWORD  16

/**
 * \brief ����
 */
#define SCREEN_WIDTH 13

/**
 * \brief ����
 */
#define SCREEN_HEIGHT 19

/**
 * \brief �����̳߳ص�״̬���λ
 *
 */
enum {
	state_none		=	0,							/**< �յ�״̬ */
	state_maintain	=	1 << 0,						/**< ά���У���ʱ���������µ����� */
};

/**
 * \brief ��������
 */
#ifndef MAX_NUMPASSWORD
#define MAX_NUMPASSWORD	32
#endif

#pragma pack(1)
/**
 * \brief ������Ϸ��
 * ����Ϸ���з��࣬Ȼ����ͬ����Ϸ���ٷ���
 */
struct GameZone_t
{
	union
	{
		/**
		 * \brief Ψһ���
		 */
		DWORD id;
		struct
		{
			/**
			 * \brief ��Ϸ�������
			 */
			WORD zone;
			/**
			 * \brief ��Ϸ������
			 */
			WORD game;
		};
	};

	GameZone_t()
	{
		this->game = 0;
		this->zone = 0;
	}
	GameZone_t(const GameZone_t &gameZone)
	{
		this->id = gameZone.id;
	}
	GameZone_t & operator= (const GameZone_t &gameZone)
	{
		this->id = gameZone.id;
		return *this;
	}
	bool operator== (const GameZone_t &gameZone) const
	{
		return this->id == gameZone.id;
	}
};

#pragma pack()
#endif

