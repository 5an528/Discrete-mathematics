#include<iostream>
using namespace std;
void graph(int );
int main()
{
    int option;
    cout<<"Press \"1\" for Directed Graph.\nPress \"2\" for Undirected Graph\n";
    cin>>option;
    switch(option)
    {
    case 1:
    {
        graph(option);
        break;
    }
    case 2:
    {
        graph(option);
        break;
    }
    }
}
void graph(int op)
{
    int arr[10][10]= {0};
    int node,edge,a,b;
    cout<<"How many nodes are there?\n";
    cin>>node;
    cout<<"How many edges are there?\n";
    cin>>edge;
    for(int i = 0; i<edge; i++)
    {
        cin>>a>>b;
        if(op==1)
        {
            arr[a-1][b-1] = 1;
        }
        else if(op==2)
        {
            arr[a-1][b-1] = 1;
            arr[b-1][a-1] = 1;
        }

    }
    cout<<"\n\n\n";
    for(int i=0; i<node; i++)
    {
        if(i!=0)
        {
            cout<<"|"<<i+1<<"|";
        }



        for(int j=0; j<node; j++)
        {
            if(i==0 && j==0)
            {
                cout<<"\t";
                for(int k=1; k<=node; k++)
                {
                    cout<<"|"<<k<<"|"<<"\t";
                }
                cout<<endl<<endl<<"|"<<i+1<<"|";
            }
            cout<<"\t"<<"|"<<arr[i][j]<<"|";
        }
        cout<<endl;
    }
}
