#include <iostream>
using namespace std;

int main()
{
    int i, avg, total=0, size;
    
    cout<<"How Many Marks Do You Want To Enter?"<<endl;
    cin>>size;   //The Number of values to be entered. Dynamic Array.
    
    int score[size];
    
    for(i=0; i<size; i++)   // Array starts from value 0, so to enter 5 marks i < 5 thus value start from 0 to 4 = total 5 enteries.
    {
        cout<<"Enter the Score of Sujbect "<<i+1<<endl; // "i+1" just for display. First value starts from 0 so 0 + 1 = 1 which is the first(1) value.
        cin>>score[i];
        total = total + score[i]; // or total += score[i];
    }
    
    
    cout<<"Following is the score of each of the Subject:"<<endl;
    
    for (i=0; i<size; i++) // Second Loop for displaying  the Values (socre[i]) entered. 
    {
        cout<<score[i]<<"\t";
    }
    
    cout<<endl<<endl; // New line 
    
    avg = total/size;
    cout<<"Total Score is: "<<total<<endl;
    cout<<"The Average Score is: "<<avg;
    return 0;
}
