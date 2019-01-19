#pragma once
#include "Imagebuf.h"
#include <iostream>
#include "TankWarObj.h"
#include "Tank.h"
#include "RobotTank.h"
#include "Bullet.h"

//������ʾ
class CMyView
{
public:
    CMyView();
    ~CMyView();

    //���ƻ���Ԫ�أ� nType = 1 ��ʾש  2 �� 3 ǳ������ 4 �������� 5 �� 
    void DrawElement(int x, int y, int nType);

    //���Ʊ�ըЧ�� nType = 0-5 ��ʾ6�ֱ�ըЧ����Ч���𽥵���
    void DrawBoom(int x, int y, int nType);

    //����̹�� nType = 0-3 ��ʾ4��̹�����ͣ�nRotate��ʾ��ת�ķ���
    void DrawTank(int x, int y, int nType, int nRotate);

    //���ƻ���
    void DrawHomeBase(int x, int y);

    //�����ӵ� nType = 0 ��ʾ��ɫ�ӵ� =1 ��ʾ��ɫ�ӵ�
    void DrawBullet(int x, int y, int nType);

    //���Ʊ���
    void DrawBg(int x, int y);

    //���Ƶ�ͼ
    void drawMap();

    //��ȡ��������
    void OnUp();
    void OnDown();
    void OnLeft();
    void OnRight();

    void OnFire();


    //���ж����Զ��ж�
    int AllRun();
    //�����ǽ
    int CheckWall(TankWarObj *obj);
    //��黥ײ
    int CheckObj(TankWarObj *obj, TankWarObj *another);
    //�ɵ�ǽ
    void DestroyWallForObj(TankWarObj *obj);
    //���������˶�
    void RunEach(TONode * p);
    void ObjFire(TankWarObj *obj);
public:
    TONode tList;


private:
    unsigned  char *MapPic[6];                //ָ���������ݵ�ָ��  ���Լ�¼ש��������
    unsigned char *BoomPic[6];              //��ըЧ��6��
    unsigned char *TankPic[4][4];           //̹�ˣ��������� 4��
    unsigned char* HomeBase;               //����
    unsigned char * BulletPic[2];             //�����ӵ�


    CTank m_MyTank;//��ʾ�Լ�

    unsigned char m_mapData[26][26];
};
