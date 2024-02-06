#pragma once

struct Node
{
    char LastName[20];
	char Name[20];
    char SurName[20];
    int Grade = 0;

	Node* m_parent;

    Node* m_left;  
    Node* m_right;
	

    char* GetLastName();
    char* GetName();
    char* GetSurName();
    int GetGrade();
    void SetGrade(int l);
};