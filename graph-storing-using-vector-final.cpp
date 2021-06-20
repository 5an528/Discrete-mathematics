#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{

    int option,a,b;
    vector<int> arr1,arr2;
    int node,edge;
    cout<<"Press \"1\" for Directed Graph.\nPress \"2\" for Undirected Graph\n";
    cin>>option;
    cout<<"How many nodes are there?\n";
    cin>>node;
    cout<<"How many edges are there?\n";
    cin>>edge;
    if(option==2)
    {
        edge = edge*2;
    }
    cout<<"First enter from which node then to which node.\n";
    for(int i=1; i<=edge; i++)
    {
        cin>>a>>b;
        if(option==1)
        {
            arr1.push_back(a);
            arr2.push_back(b);
        }
        else if(option==2)
        {
            arr1.push_back(a);
            arr2.push_back(b);
            i++;
            arr1.push_back(b);
            arr2.push_back(a);
        }

    }
    for(int i=1; i<=node; i++)
    {
        cout<<i<<" : ";
        for(int j=0; j<=(edge-1); j++)
        {
            if(arr1[j]==i)
            {
                cout<<" "<<arr2[j];
            }
        }
        cout<<endl;
    }
}


