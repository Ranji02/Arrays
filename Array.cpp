#include<bits/stdc++.h>

using namespace std;

int main()
{
    // int arr[5] = {1,2,3,4,5};
    int arr[5]  {1,2,3,4,5};
    cout<<"Size of the Array :"<<sizeof(arr)/sizeof(arr[0])<<endl;
    int len = sizeof(arr)/sizeof(arr[0]);
//Traversal
    cout<<"Array Elements :"<<endl;
    for(int i =0;i<len;i++)
        cout <<arr[i]<<"  ";
    cout<<endl;

    cout<<"Array Elements :"<<endl;
    for(int i =0;i<len;i++)
        cout <<i[arr]<<"  ";
    cout<<endl;

    cout<<"Array Elements :"<<endl;
    for(auto i:arr)
        cout <<i<<"  ";
    cout<<endl;

    cout<<"Array Elements :"<<endl;
    for(auto &i:arr)
        cout <<i<<"  ";
    cout<<endl;
//Initialization
    cout<<"Initialize with 0 :"<<endl;
    int arr2[6]={};
     for(auto i:arr2)
        cout <<i<<"  ";   
    cout<<endl;

    cout<<"Initialize with 2 elements and other elements value will be 0 :"<<endl;
    int arr3[6]={1,2};
     for(auto i:arr3)
        cout <<i<<"  ";  
    cout<<endl;
    
    cout<<"Initialize with 2 :"<<endl;
    int arr4[6];
    int len1 = sizeof(arr4)/sizeof(arr4[0]);
    fill_n(arr4,len1,2);
    for(auto i:arr4)
        cout <<i<<"  ";   
    cout << endl;

//get input from user
    int arr5[5];
    cout << "Enter 5 Elements :";
    for(int i=0;i<sizeof(arr5)/sizeof(arr5[0]);i++)
        cin>>arr5[i];
    for(auto i:arr5)
        cout <<i<<"  ";   
    cout << endl;

    return 0;
}

