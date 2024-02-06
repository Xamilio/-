#include <conio.h>
#include <iostream>

#include "Functions.h"

using namespace std;

void Insert(Tree& tree)
{
    system("cls");
    cout << "Enter a quantity of elements to add: ";

    unsigned int count = 0U;
    cin >> count;

    for (unsigned int i = 0U; i < count; ++i)
    {
        Node* temp = new Node;

        cout << endl << "Введите Фамилию: " << i + 1 << endl;
        cin >> temp->GetLastName();

        cout << endl << "Введите Имя: " << i + 1 << endl;
        cin >> temp->GetName();

        cout << endl << "Введите Отчество: " << i + 1 << endl;
        cin >> temp->GetSurName();
        cout << endl << "Введите Оценку: " << i + 1 << endl;
        int l;
        cin >> l;
        temp->SetGrade(l);
       
        tree.Insert(temp);
    }
}

void Print(const Tree& tree)
{
    system("cls");

    tree.Print(tree.GetRoot());

    _getch();
}

void PrintMenu()
{
    char menu[] = "1. Insert node\n2. Remove node\n3. Print node\n4. Search node\n5. Exit\n";

    system("cls");

    cout << menu;
}

void Remove(Tree& tree)
{
    system("cls");
    cout << "Введите имя студента которого выхотите удалить: " << endl;

    char buffer[15] = {};
    cin >> buffer;

    Node* node = tree.Search(tree.GetRoot(), buffer);

    tree.Remove(node);
}

void Search(const Tree& tree)
{
    system("cls");
    cout << "Введите имя студента которого выхотите найти: " << endl;

    char buffer[15] = {};
    cin >> buffer;

    Node* node = tree.Search(tree.GetRoot(), buffer);

    if (node != nullptr)
    {
        cout << node->GetName();
    }
    else
    {
        cout << "Такого студента нет" << endl;
    }

    _getch();
}