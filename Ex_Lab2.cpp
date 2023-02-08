//Ex:1
class Array1
{
  private:
    int arr[10];
    int Size=10;
    int CountEven=0;
    int CountOdd=0;
  public:
  void SetAtArray()
  {
    cout<<"Enter "<<Size<<" number at array:";
    for (int i=0 ; i<=Size-1 ; i++)
    {
      cin>>arr[i];
    }
  }
  void Count()
  {
    for (int i=0 ; i<=Size-1 ; i++)
    {
      if (arr[i] %2 == 0)
        {
         CountEven++;
        }
    else
        {
         CountOdd++;
        }
    }
  }
  void PrintResult()
  {
    cout<<"The sum of the even numbers in the array:"<<CountEven<<endl;
    cout<<"The sum of the odd numbers in the array:"<<CountOdd<<endl;
  }
};

//Ex:2
class Array2
{
  private:
    int array_A[10],array_B[10],array_C[10];
    int Result = 0;
  public:
  void SetArray_A()
  {
    cout<<"Enter 10 number in array A:";
    for (int i = 0; i < 10; i++)
    {
      cin>>array_A[i];
    }
    cout<<endl;
  }
  void SetArray_B()
  {
    cout<<"Enter 10 number in array B:";
    for (int i = 0; i < 10; i++)
    {
      cin>>array_B[i];
    }
    cout<<endl;
  }
   void Array_C()
   {
     for (int i = 0; i < 10; i++)
     {
       array_C[i] = array_A[i] + array_B[i];
       Result = array_C[i];
     }
     cout<<"the sum of array A + array B = "<<Result;
   }
};
 
 //Ex:3
class Array3
{
  private:
    int Array_A[10];
    
  public:
    void SetArray()
    { 
      cout<<"Enter 10 number in array:";
      for (int i = 0; i < 10; i++)
      {
        cin>>Array_A[i];
      }
      cout<<endl;
    }
    void PrintMax()
    {
      int max = Array_A[0];
      for (int i = 0; i < 10; i++)
      {
        
        if (max < Array_A[i] )
          {
            max = Array_A[i]; 
          }
      }
      cout<<"the max value is:"<<max<<endl;
    }
    void PrintMin()
    { 
      int min=Array_A[0];
      for (int i = 0; i < 10; i++)
      {
        if (min > Array_A[i] )
          {
            min = Array_A[i]; 
          }
      }
      cout<<"the min value is:"<<min<<endl;
    }
    double PrintAvg()
    {
      int sum=0;
      for (int i = 0; i < 10; i++)
      {
        sum+=Array_A[i];
      }
      double avg = sum / 10.0;
      return avg;
    }

};

//Ex:4
class Array4
{
 private:
  int sizee=10;
  int arr[10];

 public:
  void Set_Array() 
  {
    cout<<"Enter "<<sizee<<" numbers: ";
    for(int i = 0; i < sizee; i++) 
    {
      cin>>arr[i];
    }
  }

  void search(int n) 
  {
    int index = -1, count = 0;
    for(int i = 0; i < sizee; i++) 
    {
      if (arr[i] == n) 
      {
        if (index == -1) 
        {
          index = i;
        }
        count++;
      }
    }
    cout<<"Index of N in the array: "<<index<<endl;
    cout<<"Count of N in the array: "<<count<<endl;
  }
};

int main() 
{
  /*int n;
  cout<<"Enter a number N: ";
  cin>>n;*/
  return 0;
}

//Ex:5
class Array5
{
  private:
    char arr[5];
  public:
    void SetArray()
    { 
      cout<<"Enter 5 characters in array:";
      for (int i = 0; i < 5; i++)
      {
        cin>>arr[i];
      }
      cout<<endl;
    }
    void PrintArray()
    {
      for (int i = 0; i < 5; i++)
      {
        cout<<arr[i];
      }
    }
};

//Ex:6
class Array6
{
  private:
    int arr[5];
  public:
    void SetArray()
    { 
      cout<<"Enter 5 marks of the student in array:";
      for (int i = 0; i < 5; i++)
      {
        cin>>arr[i];
      }
      cout<<endl;
    }
    void MinimumPassingMark()
    {
      int m;
      int count=0;
      cout << "Enter the minimum passing mark: ";
      cin >> m;
      for (int i = 0; i < 5; i++) 
        {
          if (arr[i] >= m) 
          {
            count++;
          }
        }
      if (count >= 3) 
        {
          cout << "YES" << endl;
        }
        else 
        {
          cout << "NO" << endl;
        }
    }
};

//Ex:7 on chatGpt
int main() 
{
    int A[10]; // Define array of integers A with size 10
    int frequency[100] = {0}; // To store the frequency of each number in the array
    
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) 
    {
        cin >> A[i];
        frequency[A[i]]++;
    }
    
    cout << "Frequency of each number in the array: " << endl;
    for (int i = 0; i < 100; i++) 
    {
        if (frequency[i] > 0) {
            cout << i << ": " << frequency[i] << " times" << endl;
        }
    }
    return 0;
}