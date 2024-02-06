#include "Node.h"

char* Node::GetLastName()
{
    return LastName;
}

char* Node::GetName()
{
    return Name;
}
char* Node::GetSurName()
{
    return SurName;
}
int Node::GetGrade()
{
    return Grade;
}
void Node::SetGrade(int l)
{
    Grade = l;
}
