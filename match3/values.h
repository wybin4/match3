#pragma once

const int count = 7;//���������� �������-������� 

struct Real//��������� ��� �������� �����
{
	int i;
	int j;
	int kind;//��� ���������, ������� �������� � ������ �����
	double x;//���������� x
	double y;//���������� y
}grid[10][10];

int ts = 35;//��������� ��� ���������� �����

int score = 0;//���������� ��������� �����

bool mode = true;//true, ���� �� ������ ���� 

bool move = false;//����� �� ������� �������

bool mat = false;//���������, ���� �� ���������� ��� ������������� �����

int maximum = 0;//������������ ����, ������������ � ������� ����

int select = 0;//���� �� ������� �������, �� 1, ���� ��� ������ ���������, �� 2

int pr_x, pr_y, x, y, sx, sy;//����������

int kind_r;//���������� ��� ������ ������ �������

bool swap = false;//���� ��������� �����, �� true

