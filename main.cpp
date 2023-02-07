#include<iostream>
using namespace std;

class Static_Lest
{
 private:
    int Size=10;
    int LastIndex=-1;
    int arr[10];
public:
    bool IsFull()
    {
        if(LastIndex == Size-1)
            return true;
        else
            return false;
    }
    bool IsEmpty()
    {
        if(LastIndex == -1)
            return true;
        else
            return false;
    }
    void InsertAtStart(int value)
    {
        for (int i = LastIndex+1; i > 0; i--)
        {
            arr[i] = arr[i-1];
            arr[0] = value;
            LastIndex++;
        }
    }
    void InsertAtPosition(int value,int pos)
    {
        for (int i = LastIndex+1; i > pos; i--)
        {
            arr[i] = arr[i-1];
            arr[pos] = value;
            LastIndex++;  
        }
    }
    void InsertAtEnd(int value)
    {
        if(IsFull())
        cout<<"Sorry, I cannot delete its already empty.";
        
        else
        arr[LastIndex+1] = value;
        LastIndex++;
    }
    void DeleteFromStart()
    {
        if(IsFull())
        cout<<"Sorry, I cannot delete its already empty.";
        
        else
        for (int i = 0; i > LastIndex; i++)
        {
            arr[i]=arr[i+1];
            LastIndex--;
        }
    }
    void DeleteFromEnd()
    {
        if(IsFull())
        cout<<"Sorry, I cannot delete its already empty.";
        
        else
        LastIndex--;
    }
    void DeleteFromPosition(int pos)
    {
        if(IsFull())
        cout<<"Sorry, I cannot delete its already empty.";

        else
        for (int i = pos; i < LastIndex; i++)
        {
           arr[i] = arr[i+1];
           LastIndex--;
        }
    }
    int HowManyElements()
    {
        int x;
        x = LastIndex+1;
        return x;
    }
    int HowManyEmptyLoc()
    {
        int x;
        x = Size - (LastIndex+1);
        return x;
    }
};

int main()
{
    return 0;
} 